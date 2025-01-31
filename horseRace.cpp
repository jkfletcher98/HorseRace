#include <random>
std::random_device rd;
std::uniform_int_ditribution<int> dist(0, 1);

const int TOTAL_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = true;
	while (keepGoing){
		for (int hn = 0; hn < TOTAL_HORSES; hn++){
			advance(hn, horses);
			printLane(hn, horses);
			if (isWinner(hn, horses)){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press ENTER for next round.";
		std::cin:ignore;
	} // end while
} // end main

int advance(hn, horses){
	coin = dist(rd);
	horse += coin;
	return horse;
} // end advance

int printLane(hn, horses){
	for (int space = 0; space < TRACK_LENGTH; space++){
		if (space == horse){
			printf("%i" /
