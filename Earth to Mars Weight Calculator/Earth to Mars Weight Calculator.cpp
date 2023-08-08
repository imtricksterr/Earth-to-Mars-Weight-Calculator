#include <iostream>

int main() {
	double weight;
	double weightm;

	std::cout << "Enter your weight: \n";
	std::cin >> weight;

	weightm = weight / 9.81 * 3.711;
	std::cout << "Your weight is equal to " << weightm << "lbs on the Planet Mars. \n";

}