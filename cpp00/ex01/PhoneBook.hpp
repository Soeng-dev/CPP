#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <limits>

#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void add();
    void search();


private:
    Contact *contacts[8];
    int oldest;

    void printBriefInfos();
    void briefInfo(const int index);
    std::string formatted(const std::string &field);
    void cinInt(int &input);
};
#endif