#include <string>
#include <iostream>

std::string read(std::string line)
{
    return line;
}

std::string eval(std::string line)
{
    return line;
}

void print(std::string output)
{
    std::cout << output << std::endl;
}

void rep(std::string line)
{
    print(eval(read(line)));
}

void prompt()
{
    std::cout << "user> ";
}


int main()
{
    prompt();

    std::string line;
    while (std::getline(std::cin, line))
    {
        rep(line);
        prompt();
    }

    if (std::cin.bad())
    {
        // IO Error
        return 1;
    } else if (!std::cin.eof())
    {
        // Format error
        return 1;
    } else
    {
        // EOF
        return 0;
    }
}