#include <random>
std::random_device rd;
std::uniform_int_ditribution<int> dist(0, 1);

const int TOTAL_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	bool keepGoing = true;
	while (keepGoing){
		for (horse in TOTAL_HORSES){
			advance();
			printLane();
		} // end for loop
	} // end while loop
} // end main

int advance(horsePosition, horseNum){
	number = dist(rd);
	horseNum += number;
	return horseNum;
} // end advance

int printLane(


