#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat(Cat const &cat);
    virtual ~Cat();
    Cat &operator=(Cat const &cat);
    virtual void makeSound() const;
    virtual std::string getType() const;
private:
    Brain *_brain;
};
#endif