
#include <iostream>

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string cmd;

    while (true)
    {
        std::cin >> cmd;
        if (std::cin.eof() || cmd == "EXIT")
            break;

        if (cmd == "ADD")
            phoneBook.add();
        else if (cmd == "SEARCH")
            phoneBook.search();
    }

    return (0);
}