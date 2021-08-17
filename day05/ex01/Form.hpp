#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
public:
    Form();
    Form(std::string const &name, int gradeSign, int gradeExcute);
    Form(Form const &form);
    ~Form();
    Form &operator=(Form const &form);

    std::string getName() const;
    int getGradeSign() const;
    int getGradeExcute() const;
    bool getSign() const;
    void beSigned(Bureaucrat const &bureaucrat);
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw ();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw ();
    };
private:
    void checkGrade() const;
    std::string const _name;
    int const _gradeSign;
    int const _gradeExcute;
    bool    _sign;
};

std::ostream &operator<<(std::ostream &output, Form const &form);
#endif