#include <iostream>
#define M 5

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
    
}