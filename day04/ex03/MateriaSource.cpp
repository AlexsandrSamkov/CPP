#include <ctime>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < MATERIAlS_SIZE; i++)
        _materials[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
    *this = materiaSource;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < MATERIAlS_SIZE; i++)
        delete _materials[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
    for (int i = 0; i < MATERIAlS_SIZE; i++)
        if (materiaSource._materials[i] != nullptr) {
            _materials[i] = materiaSource._materials[i]->clone();
        } else {
            _materials[i] = nullptr;
        }
    return (*this);
}

AMateria* MateriaSource::createMateria(std::string const &type) {
   for (int i = 0; i < MATERIAlS_SIZE; i++)
        if (!type.compare(_materials[i]->getType()))
            return (_materials[i]->clone());
    return (nullptr);
}

void MateriaSource::learnMateria(AMateria * m) {
    for (int i = 0; i < MATERIAlS_SIZE; i++)
        if (_materials[i] == nullptr) {
            _materials[i] = m;
            return ;
        }
    delete m;
    std::cout << "Full memory." << std::endl;
}