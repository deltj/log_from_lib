#include "FakeLibClass.h"
#include "Log.h"

void FakeLibClass::say(std::string something)
{
    LOG(something);
}
