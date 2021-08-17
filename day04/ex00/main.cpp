#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << "[--- WRONG ---]" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* a = new WrongDog();
    const WrongAnimal* b = new WrongCat();
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    a->makeSound(); //will output the cat sound!
    b->makeSound();
    wrong->makeSound();
    delete wrong;
    delete a;
    delete b;
}
