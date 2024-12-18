#include <iostream>
#include <string>
#include <string_view>

std::string READ(std::string str)
{
    return str;
}


std::string EVAL(std::string str)
{
    return str;
}

std::string PRINT(std::string str)
{
    return str;
}

std::string rep(std::string str)
{
    return READ(EVAL(PRINT(str)));
}

int main()
{
    while (true)
    {
        std::cout << "user> ";
        std::string str;
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        else
            std::cout << str << '\n';
    }
}
