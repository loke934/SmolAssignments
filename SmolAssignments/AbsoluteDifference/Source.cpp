#include <iostream>
#include <C:\Users\elokr\Documents\Projects\FG FT 21\Game Programming with C++\SmolAssignments\SmolAssignments\AbsoluteDifference\Header.h>

using namespace std;

int main() {
	int a;
	int b;
	cout << "Write two numbers and get the absolute difference. \nNumber 1:" << endl;
	cin >> a;
	cout << "Number 2: " << endl;
	cin >> b;
	cout << "The absolute difference is: " << AbsoluteDifference(a, b) << endl;
}

int MyAbs(int x) {
	return x < 0 ? -x : x;
}

int AbsoluteDifference(int a, int b) {
	int sum = a - b;
	MyAbs(sum);
	return sum;
}