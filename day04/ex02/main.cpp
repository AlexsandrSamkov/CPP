#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


void test() {
    const Dog* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    delete j;
    delete i;
}

int main()
{
    test();
}
