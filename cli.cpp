#include <iostream>
#include <iomanip>
#include <string>
#include "Character.h"
#include <cstdlib>
#include "Tracker.h"
int menu(Tracker&);
int validate();
int main()
{
    Tracker tracker;
    int choice = menu(tracker);
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
		break;
	    case 4:
		std::exit(0);

	    
	}
	choice = menu(tracker);
    }
    return 0;
}

int menu(Tracker &tracker)
{
    tracker.print();
    int choice;
    do
    {
    std::cout << 
	"1) Withering Attack\n" <<
	"2) Decisive Attack\n" <<
	"3) Add Character\n" <<
	"4) Quit\n";
    choice = validate();
    } while (choice < 1 || choice > 4);
    return choice;
}

int validate()
{
    int input;
    while (true)
    {
        std::cout << "Validating...\n";
        std::cin >> input;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }
        break;
    }
    return input;
}

