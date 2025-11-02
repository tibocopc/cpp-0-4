#pragma once

#include <iostream>
#include <string>

class Brain
{
  private:
	std::string _ideas[100];

  public:
	Brain();
	Brain(const Brain &b);
	virtual ~Brain();
	Brain &operator=(const Brain &a);

	void setIdeas(const std::string idea);
	void printIdeas() const;
};