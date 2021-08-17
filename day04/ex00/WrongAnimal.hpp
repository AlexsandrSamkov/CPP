#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &wrongAnimal);
    WrongAnimal &operator=(WrongAnimal const &wrongAnimal);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
protected:
    std::string _type;
};
#endif