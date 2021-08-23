#include "AMatria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "iostream"

void test() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}

void myTest() {
    Character me("Me");
    MateriaSource src;
    src.learnMateria(new Ice);
    src.learnMateria(new Ice);
    src.learnMateria(new Cure);
    src.learnMateria(new Cure);
    src.learnMateria(new Ice);
    src.learnMateria(new Ice);
    MateriaSource copySrc(src);
    AMateria* tmp;
    tmp = src.createMateria("ice");
    me.equip(tmp);
    tmp = src.createMateria("cure");
    me.equip(tmp);
    tmp = src.createMateria("ice");
    me.equip(tmp);
    tmp = src.createMateria("cure");
    me.equip(tmp);
    tmp = src.createMateria("ice");
    me.equip(tmp);
    Character copyMe = me;
    tmp = src.createMateria("cure");
    copyMe.equip(tmp);
    std::cout << copyMe << std::endl;
    copyMe.unequip(2);
    copyMe.unequip(2);
    std::cout << copyMe << std::endl;
    tmp = src.createMateria("cure");
    copyMe.equip(tmp);
    std::cout << copyMe << std::endl;
    std::cout << me << std::endl;
}

int main ()
{
    test();
    myTest();
    return 0;

}