#include "Brain.hpp"

Brain::Brain() {
    std::cout << "** Brain default constructor called **" << std::endl;
}

Brain::Brain(const Brain &brain) {
    *this = brain;
    std::cout << "** Brain copy constructor called **" << std::endl;
}

Brain::~Brain() {
    std::cout << "** Brain destructor called **" << std::endl;
}

Brain &Brain::operator=(Brain *brain) {
    for (int i = 0; i < NUMBER_IDEAS; i++)
        _ideas[i] = brain->_ideas[i];
    std::cout << "** Brain operator \"=\" called **" << std::endl;
    return (*this);
}
