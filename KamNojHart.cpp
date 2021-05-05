#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    //Za genrator na sluchaino chislo
	srand(time(0));
    //za izpisvane na dumi
	string names[3] = {"scissors", "rock", "paper"};
    //Generira sluchaino chislo za computyra
	int robot = rand() % 3;
    // vyvejda promenliva za igracha
	int igrach;

	cout << "scissors (0), rock (1), paper (2): " << endl;
    //Vyvejda chisloto na igracha
	do {
		cin >> igrach;
	} while (!(igrach >= 0&& igrach <= 2));

	if ((robot + 1) % 3 == igrach) {
		cout << "The robot is " << names[robot] << ". You are " << names[igrach] << ". You won";
	}
	else if ((igrach + 1) % 3 == robot) {
		cout << "The robot is " << names[robot] << ". You are " << names[igrach] << ". You lose";
	} else {
		cout << "The robot is " << names[robot] << ". You are " << names[igrach] << ". It is a draw";
	}

	return 0;
}
