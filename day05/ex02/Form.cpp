#include "Form.hpp"

Form::Form() : _name("(null)"), _gradeSign(1),\
    _gradeExcute(150), _sign(false) {
}

Form::Form(const std::string &name, int gradeSign, int gradeExcute)\
    : _name(name), _gradeSign(gradeSign), _gradeExcute(gradeExcute) {
    _sign = false;
    checkGrade();
}

Form::Form(const Form &form) : _name(form.getName()),\
    _gradeSign(form.getGradeSign()), _gradeExcute(form.getGradeExcute()),
    _sign(form.getSign()){
    checkGrade();
}

Form::~Form() {
}

Form &Form::operator=(const Form &form) {
    _sign = form.getSign();
    return *this;
}

std::string Form::getName() const {
    return _name;
}

int Form::getGradeExcute() const {
    return _gradeExcute;
}

int Form::getGradeSign() const {
    return _gradeSign;
}

bool Form::getSign() const {
    return _sign;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _gradeSign)
        throw GradeTooHighException();
    else
        _sign = true;
}

void Form::checkGrade() {
    if (this->getGradeExcute() < MIN_GRADE || this->getGradeSign() < MIN_GRADE)
        throw GradeTooLowException();
    if (this->getGradeExcute() > MAX_GRADE || this->getGradeSign() > MAX_GRADE)
        throw GradeTooHighException();
}

const char* Form::GradeTooHighException::what() const throw () {
    return "The grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw () {
    return "The grade is too low!";
}

std::ostream &operator<<(std::ostream &output, Form const &form) {
    output << "Form :" << form.getName() << ". Sign :" <<\
    (form.getSign() ? "yes" : "no") << ". Grade to be signed:" <<\
    form.getGradeSign() << ". Grade to be exucte:" << form.getGradeExcute()\
    << "." << std::endl;
    return output;
}