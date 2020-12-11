//Prompt

//You are given a number N.You need to print the pattern for the given value of N.
//for N = 2 the pattern will be
//2 2 1 1
//2 1
//for N = 3 the pattern will be
//3 3 3 2 2 2 1 1 1
//3 3 2 2 1 1
//3 2 1

#include <iostream>

#define PAUSE std::cout << "\n\n"; system("pause"); 


void pattern_funct(int repeats) {

	int starting_value = repeats;
	int pattern_count;
	int value;

	while (repeats > 0) {
		for (value = starting_value; value > 0; value--) {
			for (pattern_count = repeats; pattern_count > 0; pattern_count--) {
				std::cout << value << " ";
			}
		}
		std::cout << "$\n\n";
		repeats--;
	}

	return;
}

int main() {
	// print the pattern

	int repeats;

	std::cout << "Give me a number to see the pattern: ";

	std::cout << "Number of pattern repeats: ";
	std::cin >> repeats;
	std::cout << "\n\n\n";


	pattern_funct(repeats);
	
	PAUSE
	return 0;
}