#include "Log.h"
#include "FakeLibClass.h"

#include <iostream>

Log __log;

int main(int, char*[])
{
    __log.init("[PREFACE]");

    FakeLibClass flc;

    flc.say("Hello World!");
    LOG("Dang");

    return 0;
}
