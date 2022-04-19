#ifndef CPP_MODULE_05_EX02_FORM_H
#define CPP_MODULE_05_EX02_FORM_H
#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {

public:
						Form(std::string const & name, int gradeSign,
							 int gradeExecute);
						Form(Form const & form);
	virtual				~Form();
	Form &				operator=(Form const & form);

	std::string const &	getName() const;
	bool				getSigned() const;
	int					getGradeSign() const;
	int					getGradeExecute() const;
	bool				beSigned(Bureaucrat const & bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const = 0;

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

	class ExecuteRequirementException: public std::exception {
	public:
										ExecuteRequirementException();
										ExecuteRequirementException(
												ExecuteRequirementException
												const &
												ExecuteRequirementException);
		virtual							~ExecuteRequirementException() throw();
		ExecuteRequirementException &	operator=(ExecuteRequirementException
												const &
												ExecuteRequirementException);

		virtual char const *	what() const throw();
	};

private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeSign;
	int const			_gradeExecute;

						Form();
	void				checkGrade() const;

protected:
	void				beExecuted(Bureaucrat const & bureaucrat) const;

};

std::ostream &	operator<<(std::ostream & o, Form const & form);

#endif //CPP_MODULE_05_EX02_FORM_H
