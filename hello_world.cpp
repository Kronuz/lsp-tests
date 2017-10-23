#include <iostream>
#include "hello_world.h"

int main()
{
	Greeter greeter;
    std::cout << greeter.getGreeting();
    return 0;
}

std::string Greeter::greeting = "Hello World!";

std::string Greeter::getGreeting()
{
	return greeting;
}