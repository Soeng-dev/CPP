#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->oldest = 0;
    memset(contacts, 0, 8 * sizeof(Contact *));
}

PhoneBook::~PhoneBook()
{
    for (int i = 0; i < 8; ++i)
    {
        if (contacts[i])
            delete contacts[i];
    }
}
void PhoneBook::add()
{
    std::string firstName,
        lastName,
        nickName,
        phoneNumber,
        secret;

    std::cout << "Enter each field" << std::endl;

    std::cout << "firstName" << std::endl;
    std::cin >> firstName;

    std::cout << "lastName" << std::endl;
    std::cin >> lastName;

    std::cout << "nickName" << std::endl;
    std::cin >> nickName;

    std::cout << "phoneNumber" << std::endl;
    std::cin >> phoneNumber;

    std::cout << "secret" << std::endl;
    std::cin >> secret;

    if (contacts[oldest])
        delete contacts[oldest];
    contacts[oldest] = new Contact(firstName, lastName, nickName, phoneNumber, secret);
    std::cout << "saved" << std::endl;

    oldest = (oldest + 1) % 8;
}

void PhoneBook::search()
{
    if (!contacts[0])
        return;

    int chosen;
    printBriefInfos();

    std::cout << "Enter index of contact to display" << std::endl;
    cinInt(chosen);

    if (0 <= chosen && chosen < 8 && contacts[chosen])
        contacts[chosen]->printInfo();
    else
        std::cout << "wrong input" << std::endl;
}

void PhoneBook::printBriefInfos()
{
    for (int index = 0; index < 8 && contacts[index]; ++index)
        briefInfo(index);
}

void PhoneBook::briefInfo(const int index)
{
    Contact *contact = contacts[index];

    std::string to_print;
    std::stringstream ssIndex;
    ssIndex << index;

    to_print.append(formatted(ssIndex.str()))
        .append("|")
        .append(formatted(contact->getFirstName()))
        .append("|")
        .append(formatted(contact->getLastName()))
        .append("|")
        .append(formatted(contact->getNickName()));

    std::cout << to_print << std::endl;
}

std::string PhoneBook::formatted(const std::string &field)
{
    std::string formatted;

    if (field.length() >= 9)
        formatted = field.substr(0, 9) + '.';
    else
        formatted.append(10 - field.length(), ' ').append(field);

    return formatted;
}

void PhoneBook::cinInt(int &input)
{
    while (true)
    {
        std::cin >> input;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong input, Enter only number" << std::endl;
        }
        else
            break;
    }
}