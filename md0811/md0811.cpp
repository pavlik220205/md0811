#include "pch.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int N;
	do {
		cout << "Enter N=";
		cin >> N;
	} while (N < 0);
	// Prime number
	cout << "Prime numbers: ";
	for (int i = 1; i <= N; i++){
		bool is = true;
		for (int b = 2; b < i; b++){
			if (i%b == 0) {
				is = false;
				break;
			
			}
		}
		if (is) {
		cout << i << " ";
		}
	}
	cout << "\n Draudz. Sk. = ";
	// 3 uzd 
	
	for (int i = 1; i <= N; i++) {

		int sum = 0, sum2 = 0;

		for (int b = 1; b <= i/2; b++) {
			if (i%b == 0)
			{
				sum += b;
			}
		}
	
		for (int c = 1; c <= sum/2; c++) {
			if (sum%c == 0)
			{
				sum2 += c;
			}
		}

		if (i == sum) {
			cout << i << " - " << sum << ";" ;
		}
		else if (i == sum2){
			cout << sum2 << "-" << sum << ";";
		}
	}
	cout << "\n nesok. drobi. =";
	// uzd 2


	for (int i = 1; i <= N; i++) {
		for (int b = 1; b < N; b++) {
				if (i == 1){
				cout << i << "/" << b << " ";
				}
				if ( b>i && b%i != 0) {
					cout << i << "/" << b << " ";
				}
		}
	}
	cout << "\n";

	system("pause");
	return 0;
}
