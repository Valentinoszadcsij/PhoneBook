#ifndef _PHONEBOOK_
# define _PHONEBOOK_

#include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
private:
	Contact array[8];
public:
    int	entries;
	PhoneBook();
	~PhoneBook();
	void contactList(int ind);
	void	add();
	//void	search();
	//void	exit();
};


#endif

