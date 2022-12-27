#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void )
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << meta->getType() << " " << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        delete meta;
        delete i;
        delete j;
    }
    {
        const WrongAnimal* k = new WrongCat();

        std::cout << k->getType() << " " << std::endl;

        k->makeSound();
        delete k;
    }
    return 0;
}