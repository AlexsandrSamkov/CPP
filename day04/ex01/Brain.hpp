#ifndef BRAIN_HPP
# define BRAIN_HPP
# define NUMBER_IDEAS 100
# include <string>
# include <iostream>

class Brain {
public:
    Brain();
    Brain(Brain const &brain);
    Brain &operator=(Brain *brain);
    ~Brain();
    std::string *getIdeas() const;
private:
    std::string	_ideas[NUMBER_IDEAS];
};
#endif
