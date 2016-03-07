#include <iostream>
#include <iomanip>
#include <string>
#include "Character.h"
#include <cstdlib>
#include "Tracker.h"
int menu();

int main()
{
    Tracker tracker;
    int choice = menu();
    while (choice !=4)
    {
	std::string new_name;
	switch (choice)
	{
	    case 1:
		//withering attack
		break;
	    case 2:
		break;
	    case 3:
		std::cin >> new_name;
		tracker.addCharacter(new_name);		
		tracker.print();
		break;
	    case 4:
		std::exit(0);

	    
	}
	choice = menu();
    }
    return 0;
}

int menu()
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
    } while (choice < 1 || choice > 4);
    return choice;
}
