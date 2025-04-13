#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Func.1 --> Brackets balanced
bool is_balanced(string some_string);

//Func.2 --> Turn to binary
string convert_to_binary(int some_int);

//Func.3 --> Time simulator 
	// Helper function for time delay
int getTimeToStart(int cars);
int timeDelay();


int main() {


	return 0;
}

bool is_balanced(string some_string) {

}

string convert_to_binary(int some_int) {

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