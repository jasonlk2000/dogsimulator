#include <iostream>
#include "main.hpp"

Dog::Dog(std::string name, std::string breed, int age) {
	this->name = name;
	this->breed = breed;
	this->age = age;
}
std::string Dog::get_name() {

	return name;
}

std::string Dog::get_breed() {
	return breed;
}

int Dog::get_age() {
	return age;
}

void Dog::print_info() {
	std::cout << "\n" <<  get_name() << " is " << get_age() << " years old.\n" <<
	"Breed: " << get_breed();
}