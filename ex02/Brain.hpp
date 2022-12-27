#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		// Destructor
		virtual ~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
		void	addIdea(std::string idea);
		void	getIdeas( void );

	private:
		std::string _ideas[100];
		int			_idea_count;
};

#endif