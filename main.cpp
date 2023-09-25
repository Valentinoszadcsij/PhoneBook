#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    Contact array[8];
    std::string command;
   
    while(1)
    {
        std::cout << "Chose a command (ADD, SEARCH, EXIT):\n";
        std::cin >> command;
        if (command == "ADD")
            book.add();
        else if (command == "EXIT")
            break ;
        else if (command == "SEARCH")
            book.contactList(book.entries - 1);
        else
            std::cout << "Wrong command. Try again\n";
    }

    return (0);
}