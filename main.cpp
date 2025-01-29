#include <iostream>
#include <vector>

using namespace std;

//uses the difference method to calculate the first and second difference.
//Finds out a, b and c (an^2+bn+c - nth term of a quadtratic sequence)
void difference_method(vector<int> sequence) {

	cout << "\n";

	int first_dif[4] = { sequence[1] - sequence[0], sequence[2] - sequence[1], 
						 sequence[3] - sequence[2], sequence[4] - sequence[3] };
	for (int s = 0; s < 4;s++) {
		cout << first_dif[s] << " ";
	}

	cout << "\n";

	int second_dif[3] = { first_dif[1] - first_dif[0], first_dif[2] - first_dif[1], 
						  first_dif[3] - first_dif[2] };

	for (int d = 0; d < 3;d++) {
		cout << second_dif[d] << " ";
	}
    
	int a = second_dif[0] / 2;
	int b = first_dif[0] - (3 * a);
	int c = sequence[0] - a - b;

	cout << "\n";
	cout << "a = " << a << ", " << "b = " << b << ", " << "c = " << c << "\n";
	cout << a << "n^2 + (" << b << ")n + (" << c << ")";


}

//takes in first 5 terms of a sequence and calls the difference method function
int main() {	
	vector<int> sequence;
	for (int i = 0;i < 5; i++) {
		int element;
		cout << "Enter a number in a quadtratic sequence - ";
		cin >> element;
		sequence.push_back(element);
	}

	for (int x = 0; x < 5;x++) {
		cout << sequence[x] << " ";
	}
	difference_method(sequence);
	return 0;
}

