#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class ICharacter;
class AMateria {
public:
    AMateria();
    AMateria(AMateria const &aMateria);
    AMateria(std::string const &type);
    virtual ~AMateria();
    AMateria &operator=(AMateria const &aMateria);
    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
protected:
    std::string _type;
};
#endif