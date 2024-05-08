#include "Intern.hpp"

Intern::Intern()
{
}
Intern::~Intern()
{
}

Form * Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string options[3] = 
    {
        "presidential pardon",\
        "robotomy request",\
        "shruberry creation"
    };
    while ((options[i].compare(name)) && i < 3)
        i++;

    Form * ret = 0;
    Form *(Intern::*fts[4])(std::string const) const = 
    {
        &Intern::makePresidential,\
        &Intern::makeRobotomy,\
        &Intern::makeShruberry,\
        &Intern::makeError,\
    };
    try
    {
        ret = (this->*fts[i])(target);
        std::cout << "Intern creates form " << name << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Intern can't create the form: " << name << ", because: " << e.what() << std::endl;
    }
    
    return ret;
}

Form * Intern::makePresidential(std::string target) const
{
    Form *ret = new PresidentialPardonForm(target);
    return ret;
}

Form * Intern::makeRobotomy(std::string target) const
{
    Form *ret = new RobotomyRequestForm(target);
    return ret;
}

Form * Intern::makeShruberry(std::string target) const
{
    Form *ret = new ShrubberyCreationForm(target);
    return ret;
}

Form * Intern::makeError(std::string target) const
{
    throw UnknowForm();
    std::string str = target;
    return (NULL);
}

const char * Intern::UnknowForm::what() const throw()
{
    return "Unknown Form";
}