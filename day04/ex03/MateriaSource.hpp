#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMatria.hpp"
# include <iostream>
# define MATERIAlS_SIZE 4
class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    MateriaSource(MateriaSource const &materiaSource);
    ~MateriaSource();
    MateriaSource &operator=(MateriaSource const &materiaSource);
    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const &type);
private:
    AMateria *_materials[MATERIAlS_SIZE];
};
#endif