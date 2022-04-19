#ifndef CPP_MODULE_05_EX00_BUREAUCRAT_H
#define CPP_MODULE_05_EX00_BUREAUCRAT_H
#include <iostream>

class Bureaucrat {

public:
						Bureaucrat(std::string const & name, int grade);
						Bureaucrat(Bureaucrat const & bureaucrat);
	virtual				~Bureaucrat();
	Bureaucrat &		operator=(Bureaucrat const & bureaucrat);

	std::string const &	getName() const;
	int					getGrade() const;
	void 				incrementGrade(int amount = 1);
	void				decrementGrade(int amount = 1);

	class GradeTooHighException: public std::exception {
	public:
								GradeTooHighException();
								GradeTooHighException(GradeTooHighException
												const & gradeTooHighException);
		virtual					~GradeTooHighException() throw();
		GradeTooHighException &	operator=(GradeTooHighException
												const & gradeTooHighException);

		virtual char const *	what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
								GradeTooLowException();
								GradeTooLowException(GradeTooLowException
												const & gradeTooLowException);
		virtual					~GradeTooLowException() throw();
		GradeTooLowException &	operator=(GradeTooLowException
												const & gradeTooLowException);

		virtual char const *	what() const throw();
	};

private:
	std::string const	_name;
	int					_grade;

						Bureaucrat();
	void				checkGrade() const;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif //CPP_MODULE_05_EX00_BUREAUCRAT_H
