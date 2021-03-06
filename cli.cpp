#include <iostream>
#include <iomanip>
#include <string>
#include "Character.h"
#include <cstdlib>
#include "Tracker.h"
int menu(Tracker* const);
int validateInt();
void addCharacter(Tracker * const);
int main() {
  Tracker tracker;
  Tracker * tracker_ptr = &tracker;
  int choice = menu(tracker_ptr);
  while (choice !=4) {
    std::string new_name;
    switch (choice) {
      case 1:
        // Withering attack
        break;
      case 2:
        break;
      case 3:
        addCharacter(tracker_ptr);
        break;
      case 4:
        std::exit(0);
    }
    choice = menu(tracker_ptr);
  }
  return 0;
}

int menu(Tracker * const tracker) {
  tracker->print();
  int choice;
  do {
    std::cout <<
      "1) Withering Attack\n" <<
      "2) Decisive Attack\n" <<
      "3) Add Character\n" <<
      "4) Quit\n";
    choice = validateInt();
  } while (choice < 1 || choice > 4);
  return choice;
}

int validateInt() {
  int input;
  std::cin >> input;
  while (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    std::cout << "Invalid choice. Please try again.\n";
    std::cin >> input;
  }
  return input;
}

void addCharacter(Tracker * const tracker) {
  std::string new_name;
  std::cout << "Name: ";
  std::cin >> new_name;
  tracker->AddCharacter(new_name);
}
