#ifndef _PHONEBOOK_
# define _PHONEBOOK_

#include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook
{
private:
	Contact array[8];
    void    printSearchEntry(std::string str);
public:
    int	entries;
	PhoneBook();
	~PhoneBook();
	void    search();
	void	add();
	//void	search();
	//void	exit();

};


#endif

