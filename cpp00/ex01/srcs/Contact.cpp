#include "Contact.hpp"

void Contact::printInfo()
{
    std::cout << firstName << '\n'
              << lastName << '\n'
              << nickName << '\n'
              << phoneNumber << '\n'
              << secret << std::endl;
}

Contact::Contact(std::string firstName,
                 std::string lastName,
                 std::string nickName,
                 std::string phoneNumber,
                 std::string secret)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickName = nickName;
    this->phoneNumber = phoneNumber;
    this->secret = secret;
}

std::string Contact::getFirstName()
{
    return firstName;
}
std::string Contact::getLastName()
{
    return lastName;
}
std::string Contact::getNickName()
{
    return nickName;
}
std::string Contact::getPhoneNumber()
{
    return phoneNumber;
}