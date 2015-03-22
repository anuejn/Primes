#include <iostream>

int main() {
	bool numbers[100000] = {}; //init with false
	for(int Checker = 2; Checker < sizeof(numbers); Checker++) {
		for(int i = 1; i < sizeof(numbers); i++) {
			if(!numbers[i]) {
				//std::cout << i << "%" << Checker << "=" << i%Checker << "\n";
				if(i%Checker == 0 && Checker < i) {
					numbers[i] = true;
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
