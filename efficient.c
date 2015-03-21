#include <iostream>

int main() {
	bool numbers[10] = {}; //init with false
	for(int Checker = 2; Checker < sizeof(numbers); Checker++) {
		for(int i = 1; i < Checker - 1; i++) {
			if(!numbers[i]) {
				if(i%Checker == 0) {
					numbers[i] == true;
				}
			}
		}
	}
	//computing done

	for(int i = 1; i < sizeof(numbers); i++) {
		if(!numbers[i]) {
			std::cout << i << "\n";
		}
	}
}
