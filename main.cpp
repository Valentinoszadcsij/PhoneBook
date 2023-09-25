#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    Contact array[8];
    std::string command;
   
    while(1)
    {
        std::cout << "Chose a command (ADD, SEARCH, EXIT):\n";
        std::getline(std::cin, command);
        //std::cin.ignore();
        if (command == "ADD")
            book.add();
        else if (command == "EXIT")
            break ;
        else if (command == "SEARCH")
            book.search();
        else
            std::cout << "Wrong command. Try again\n";
    }

    return (0);
}