#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# define MAX_GRADE 150
# define MIN_GRADE 1
class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat const &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &bureaucrat);
    std::string const &getName() const;
    int getGrade() const ;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception {
        public:
            const char * what() const throw();
    };
    class GradeTooLowException : public std::exception {
        const char * what() const throw();
    };
private:
    void checkGrade() const;
    std::string _name;
    int _grade;
};

std::ostream& operator<<(std::ostream &output, Bureaucrat &bureaucrat);
#endif