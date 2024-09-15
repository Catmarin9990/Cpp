#include <iostream>
#define M 3

struct Human {
    std::string name;
    std::string surname;
    int age;

    void inIt(){
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Surname: ";
        std::cin >> surname;
        std::cout << "Enter Age: ";
        std::cin >> age;
    }

    void show(){
        std::cout << std::endl;
        std::cout << name << " " << surname;
    }
};

struct Player{
    Human human[M];
    int gamesCount[M];
    int golsCount[M];

    void initialize(){
        for(int i = 0; i < M; i++){
            human[i].inIt();
            std::cout << "Games Count: ";
            std::cin >> gamesCount[i];
            std::cout << "Goals Count: ";
            std::cin >> golsCount[i];
        }
    }
};

int main(){
    Player player;
    player.initialize();

    int index = 0, max = player.golsCount[0];

    for(int i = 1; i < M; i++){
        if(player.golsCount[i] > max){
            max = player.golsCount[i];
            index = i;
        }
        else if(player.golsCount[i] == max && player.human[i].age < player.human[index].age){
            index = i;
        }
    }

    player.human[index].show();
}