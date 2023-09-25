#ifndef _CONTACT_
# define _CONTACT_

# include <iostream>
# include <string>

class Contact
{
private:
    std::string firstName;
	std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    // Constructor & destructor
	Contact();
	~Contact();

    //setter methods
    void setAttributes(std::string input[5]);
	// void setFirstName(std::string input);
	// void setLastName(std::string input);
	// void setNickName(std::string input);
	// void setPhoneNumber(std::string input);
	// void setDarkestSecret(std::string input);

    // Getter methods
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
};


#endif