
#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
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
    virtual void executeSpecificForm() = 0;
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw ();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw ();
    };
private:
    void checkGrade();
    std::string const _name;
    int const _gradeSign;
    int const _gradeExcute;
    bool    _sign;
};

std::ostream &operator<<(std::ostream &output, Form const &form);
#endif