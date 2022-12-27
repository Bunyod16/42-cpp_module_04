#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	_idea_count = 0;
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    // Copy the elements of the source array to the destination array
	_idea_count = copy._idea_count;
    std::memcpy(_ideas, copy._ideas, sizeof(_ideas));
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	_idea_count = assign._idea_count;
	std::memcpy(_ideas, assign._ideas, sizeof(_ideas));
	return *this;
}

void	Brain::addIdea(std::string idea)
{
	_ideas[_idea_count] = idea;
	_idea_count++;
}

void	Brain::getIdeas( void )
{
	int i;

	i = -1;
	while (++i <= _idea_count)
		std::cout << _ideas[i] << std::endl;
}