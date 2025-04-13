#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

////Func.1 --> Brackets balanced
//bool is_balanced(string some_string);

//Func.2 --> Turn to binary
string convert_to_binary(int some_int);

//Func.3 --> Time simulator 
	// Helper function for time delay
int getTimeToStart(int cars);
int timeDelay();


int main() {
	int num, cars, trafficTime;
	cout << "What number would you lik eto convert to binary: ";
	cin >> num;

	string binary = convert_to_binary(num);
	cout << binary << endl;

	cout << "Simulation" << endl;
	cout << "You are in traffic. How many cars are ahead: ";
	cin >> cars;

	trafficTime = getTimeToStart(cars);
	cout << "You will start moving in " << trafficTime << " seconds." << endl;
	return 0;
}
//
//bool is_balanced(string some_string) {
//
//}

string convert_to_binary(int some_int) {
	//base case
	if (some_int == 0) return "0";
	stack <int> into;

	while (some_int > 0) {
		into.push(some_int % 2);
		some_int /= 2;
	}

	string outOf;
	while (!into.empty()) {
		outOf += to_string(into.top());
		into.pop();
	}

	return outOf;
}

int getTimeToStart(int cars) {
	//seed
	srand(time(0));
	queue<int> trafficLine;

	for (int i = 0; i < cars; ++i) {
		trafficLine.push(timeDelay());
	}

	int totalTime = 0;
	while (!trafficLine.empty()) {
		totalTime += trafficLine.front();
		trafficLine.pop();
	}

	return totalTime; 
}

int timeDelay() {
	return rand() % 3 + 1; 
}