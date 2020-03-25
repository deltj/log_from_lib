#include "Log.h"
#include <iostream>
#include <sstream>

std::vector<std::string> split(std::string str, char delim)
{
    std::vector<std::string> tokens;
    std::string token;

    std::stringstream ss(str);
    while(std::getline(ss, token, delim))
    {
        if(token.length() > 0)
            tokens.push_back(token);
    }

    return tokens;
}

std::string last(std::string str, char delim)
{
    std::vector<std::string> tokens = split(str, delim);

    if(tokens.size() > 0)
    {
        return tokens[tokens.size() - 1];
    }
    else
    {
        return "";
    }
}

void Log::init(std::string preface)
{
    this->preface = preface;
}

void Log::log(std::string file, int line, std::string message)
{
    std::cout << preface << " " << last(file, '/') << ":" << line << " " << message << std::endl;
}
