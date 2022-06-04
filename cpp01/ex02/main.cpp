#include "iostream"

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << &s << '\n'
              << stringPTR << '\n'
              << &stringREF << std::endl;

    std::cout << s << '\n'
              << *stringPTR << '\n'
              << stringREF << std::endl;
}