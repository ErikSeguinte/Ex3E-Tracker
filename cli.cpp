#include <iostream>
#include <iomanip>
#include <string>
#include "Character.h"
int main()
{
    int choice;
    do
    {
    std::cout << 
	"1) Withering Attack\n" <<
	"2) Decisive Attack\n" <<
	"3) Add Character\n" <<
	"4) Quit\n";
    std::cin >> choice;
    } while (choice != 4);

    return 0;
}
