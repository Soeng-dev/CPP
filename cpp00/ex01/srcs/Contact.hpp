
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <sstream>
#include <iostream>

class Contact
{
public:
    void printInfo();

    Contact(std::string firstName,
            std::string lastName,
            std::string nickName,
            std::string phoneNumber,
            std::string secret);

    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();

private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;
};

#endif