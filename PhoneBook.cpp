#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    entries = 0;
}

PhoneBook::~PhoneBook()
{
    //delete[] array;
}
void    PhoneBook::add()
{
    std::string input[5];

    entries++;
    if (entries > 8)
        entries = 1;
    std::cout << "Enter Firstname:" << std::endl;
    std::cin >> input[0];
    std::cout << "Enter Lastname:" << std::endl;
    std::cin >> input[1];
    std::cout << "Enter  Nickname:" << std::endl;
    std::cin >> input[2];
    std::cout << "Enter Phonenumber:" << std::endl;
    std::cin >> input[3];
    std::cout << "Enter Darkest Secret:" << std::endl;
    std::cin >> input[4];
    array[entries - 1].setAttributes(input);
}

void PhoneBook::contactList(int ind)
{
    std::cout << ind <<std::endl;
    std::cout << array[ind].getFirstName() << std::endl;
    std::cout << array[ind].getLastName() << std::endl;
    std::cout << array[ind].getNickName() << std::endl;
    std::cout << array[ind].getPhoneNumber() << std::endl;
    std::cout << array[ind].getDarkestSecret() << std::endl;
}