#ifndef LOG_H
#define LOG_H

#include <string>
#include <vector>

std::vector<std::string> split(std::string str, char delim);
std::string last(std::string str, char delim);

#define __FILENAME__ (last(__FILE__, '/'))
#define LOG(msg) (__log.log(__FILE__, __LINE__, msg))

class Log
{
public:
    void init(std::string preface);
    void log(std::string file, int line, std::string message);

private:
    std::string preface;
};

extern Log __log;

#endif
