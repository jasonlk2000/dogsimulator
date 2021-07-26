#include <iostream>
#include "main.hpp"

void welcome();
void print_choices(Dog dog);

std::string dog_name;
int dog_age;
std::string dog_breed;


int main() {
	bool exit = false;
	int input;

	welcome();
	Dog my_dog(dog_name, dog_breed, dog_age);
	

	std::cout << "\n";

	while(exit == false) {
		my_dog.print_info();
		print_choices(my_dog);
		std::cin >> input;
	}
	return 0;

}


void welcome() {

	std::cout << "Welcome to Dog Simulator. What is the name of your dog?\n" <<
		">: ";
	
	std::cin >> dog_name;

	std::cout << "\nHow old are they?\n" << 
		">: ";
	
	std::cin >> dog_age;

	std::cout << "\nLastly, please enter the breed: \n" <<
		">: ";

	std::cin >> dog_breed;
}

void print_choices(Dog dog) {
	std::cout << "\n(1): Play with " << dog.get_name() << ".";
	std::cout << "\n(2): Feed " << dog.get_name() << ".";
	std::cout << "\n(3): Walk " << dog.get_name() << ".";

	std::cout << "\n";
}