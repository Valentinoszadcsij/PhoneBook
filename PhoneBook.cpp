#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    entries = 0;
}

PhoneBook::~PhoneBook()
{
    //delete[] array;
}

void    PhoneBook::printSearchEntry(std::string str)
{
    std::string temp;

    if (str.length() >= 10) {
        temp = str.substr(0, 9);
        std::cout << std::setw(9) << temp << ".";
    }
    else {
        std::cout << std::setw(10) << str;
    }
}
void    PhoneBook::add()
{
    std::string input[5];

    entries++;
    if (entries > 8)
        entries = 1;

    while (input[0] == "") {
        std::cout << "Enter Firstname:" << std::endl;
        std::getline(std::cin, input[0]);
    }
    while (input[1] == "") {
        std::cout << "Enter Lastname:" << std::endl;
        std::getline(std::cin, input[1]);
    }
    while (input[2] == "") {
        std::cout << "Enter  Nickname:" << std::endl;
        std::getline(std::cin, input[2]);
    }
    while (input[3] == "") {
        std::cout << "Enter Phone Number:" << std::endl;
        std::getline(std::cin, input[3]);
    }
    while (input[4] == "") {
        std::cout << "Enter Darkest Secret:" << std::endl;
        std::getline(std::cin, input[4]);
    }
    array[entries - 1].setAttributes(input);
}

void PhoneBook::search()
{
    if (entries == 0){
        std::cout << "Phone Book is empty!" << std::endl;
        return ;
    }
    for (int i = 0; i < entries; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        printSearchEntry(array[i].getFirstName());
        std::cout << "|";
        printSearchEntry(array[i].getLastName());
        std::cout << "|";
        printSearchEntry(array[i].getNickName());
        std::cout << std::endl;
    }
    std::cout << "Enter index of Contact to display:" << std::endl;
}