#include <iostream>
#include <string>

void capitalize(char *s)
{
    while (*s)
    {
        *s = toupper(*s);
        ++s;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    while (*(++argv))
    {
        capitalize(*argv);
        std::cout << std::string(*argv);
    }
    std::cout << std::endl;
}