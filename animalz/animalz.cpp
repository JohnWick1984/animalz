// animalz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

class Animal 
{
public:
    virtual void makeSound() const 
    {
        cout << "Generic animal makes a sound." << endl;
    }
};

class Lion : public Animal 
{
public:
    void makeSound() const override
    {
        cout << "Lion roars." << endl;
    }
};

class Mouse : public Animal 
{
public:
    void makeSound() const override 
    {
        cout << "Mouse squeaks." << endl;
    }
};

class Hippo : public Animal 
{
public:
    void makeSound() const override 
    {
        cout << "Hippo grunts." << endl;
    }
};

class Elephant : public Animal 
{
public:
    void makeSound() const override
    {
        cout << "Elephant toots its trunk." << endl;
    }
};

class Monkey : public Animal
{
public:
    void makeSound() const override 
    {
        cout << "Monkey swings on the branch." << endl;
    }
};

class Crocodile : public Animal
{
public:
    void makeSound() const override 
    {
        cout << "Crocodile hides in the river." << endl;
    }
};

int main() 
{
    const int numAnimals = 6;
    Animal* animals[numAnimals];

    Lion lion;
    Mouse mouse;
    Hippo hippo;
    Elephant elephant;
    Monkey monkey;
    Crocodile crocodile;

    animals[0] = dynamic_cast<Animal*>(&lion);
    animals[1] = dynamic_cast<Animal*>(&mouse);
    animals[2] = dynamic_cast<Animal*>(&hippo);
    animals[3] = dynamic_cast<Animal*>(&elephant);
    animals[4] = dynamic_cast<Animal*>(&monkey);
    animals[5] = dynamic_cast<Animal*>(&crocodile);

    for (int i = 0; i < numAnimals; ++i) {
        if (animals[i]) {
            animals[i]->makeSound();
        }
        else {
            cout << "Failed to cast an animal." << endl;
        }
    }

    return 0;
}
