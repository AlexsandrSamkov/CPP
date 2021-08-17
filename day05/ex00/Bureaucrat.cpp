#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("(null)") {
    _grade = 1;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
                       _name(name),  _grade(grade) {
    checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : {
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    _grade = bureaucrat._grade;
    return (*this);
}

const std::string &Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const{
    return (_grade);
}

void Bureaucrat::checkGrade() const{
    if (_grade > MAX_GRADE)
        throw GradeTooHighException();
    else if (_grade < MIN_GRADE)
        throw GradeTooLowException();
}

void Bureaucrat::incrementGrade() {
    _grade++;
}

void Bureaucrat::decrementGrade() {
    _grade--;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "The grade is too low!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "The grade is too high!";
}

std::ostream& operator<<(std::ostream &output, Bureaucrat &bureaucrat) {
    output << "Bureaucrat: " << bureaucrat.getName() << ". Grade: " \
    << bureaucrat.getGrade() << "." << std::endl;
    return (output);
}