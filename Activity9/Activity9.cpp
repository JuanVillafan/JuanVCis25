#include <iostream>
#include <string>
using namespace std;
int main()
{
	//four applicants, reffered to as 1 and 2 and 3 and 4: 
	string citizen;
	string bachelor;
	int experience;

	cout << "Are you a U.S Citizen? ";
	while (citizen != "s"){
		cout << "Please use \"y\" or \"n\" : ";
		getline(cin, citizen);
		if (citizen == "y") {
			break;
		}
		if (citizen == "n") {
			break;
		}
	}
	if (citizen == "n") {
		cout << "You are not elligible for the job." << endl;
		return 0;
	}

	cout << "Do you have a bachelors degree? ";
	while (bachelor !="s" ) {
		cout << "Please use \"y\" or \"n\" : ";
		getline(cin, bachelor);
		if (bachelor == "y") {
			break;
		}
		if (bachelor == "n") {
			break;
		}
	}
	if (bachelor == "n") {
		cout << "How much experience do you have? ";
		cin >> experience;
		while (experience < 0) {
			cout << "Make sure the number is positive : ";
			cin >> experience;
		}
		if (experience >= 2) {
			cout << "You are elligible for this position, congrats! " << endl;
			return 0;
		}
		if (experience < 2) {
			cout << "You are inelligible for this position." << endl;
			return 0;
		}
	}
		cout << "You are elligible for this position, congrats! ";
		cout << endl;
		return 0;

}

