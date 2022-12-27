#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

// Constructors
Cat::Cat() : Animal("Cat") 
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	_brain = new Brain(*copy._brain);
}


// Destructor
Cat::~Cat()
{
	delete _brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	_brain = new Brain(*assign._brain);
	_type = assign._type;
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow! "  + _type << std::endl;
}

void	Cat::addIdea(std::string idea)
{
	_brain->addIdea(idea);
}

void	Cat::getIdeas( void )
{
	_brain->getIdeas();
}