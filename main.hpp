
class Dog {
	private:

		std::string name;
		int age;
		std::string breed;

	public:
		Dog(std::string name, std::string breed, int age);
		std::string get_name();
	       	int get_age();
		std::string get_breed();	
		void print_info();
};
