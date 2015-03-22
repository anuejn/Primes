#include <iostream>
#define COUNT 1000000

int main() {
	#pragma omp parallel for
	for(int i = 1; i < COUNT; i++) {
		for(int j = 2; j < i-1; j++) {
			//std::cout << i << "%" << j << "=" << i%j << "\n";
			if(i % j == 0) {
				std::cout << i << "\n";
				break;
			}
		}
	}
}
