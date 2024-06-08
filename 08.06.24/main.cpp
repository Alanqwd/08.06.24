
#include <Windows.h>
#include <iostream>
#include <string>

class Animal 
{

public:
    Animal(std::string n, int a) : name(n), age(a)
    {

    }

    void printInfo() 
    {
        std::cout << "Имя: " << name << ", Лет: " << age << "\n";
    }
private:
    std::string name;
    int age;
};

class Cat : public Animal 
{

public:
    Cat(std::string n, int a, std::string s) : Animal(n, a), sound(s)
    {

    }

    void printSound() 
    {
        std::cout << "Голос: " << sound << "\n";
    }
private:
    std::string sound;
};

class Dog : public Animal 
{

public:
    Dog(std::string n, int a, std::string s) : Animal(n, a), sound(s)
    {

    }

    void printSound() 
    {
        std::cout << "Голос: " << sound << "\n";
    }
private:
    std::string sound;
};

int main() 
{
   SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

    Cat barsik("Барсик", 15, "мяу");
    Dog layka("Лайка", 9, "гав");

    barsik.printInfo();
    barsik.printSound();

    layka.printInfo();
    layka.printSound();

    return 0;
}
     

