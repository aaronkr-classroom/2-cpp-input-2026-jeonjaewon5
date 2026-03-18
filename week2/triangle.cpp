// triangle.cpp
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// *네모 만들기
int main(void) {
	cout << "What size ? >>> ";

	int size;
	cin >> size; //10

	// 행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		// 행 끝 줄 바꿈
		cout << endl;
	}
	return 0;
}