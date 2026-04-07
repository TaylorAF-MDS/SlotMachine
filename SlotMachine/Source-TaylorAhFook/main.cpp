#include <iostream>
using namespace std;

int main() {
	int _menu;
	int _playerChips = 2000;
	int _bet;

	do {
		cout << "Player's chips: $" << _playerChips << endl << endl;
		cout << "1)	Play Slots" << endl;
		cout << "2)	Credits" << endl;
		cout << "3)	Quit Game" << endl;
		cin >> _menu;

		switch (_menu) {
		case 1:
				cout << "You have selected slots! Make a bet: ";
				cin >> _bet;
				break;
			
		case 2:
			cout << "This was made by Taylor Ah Fook, as part of an assignment for GD1P01.\nCode was written solely by myself.\n\n";
			break;

		case 3:
			cout << "Exiting... \n";
			break;

		default:
			cout << "You have entered an invalid menu option. Please try again \n";
		}
	}

	while (_menu != 3);

	return 0;
}