#include <iostream>
#include "slot.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));

	int _menu;
	int _playerChips = 2000;
	int _bet;
	int _winnings;

	do {
		cout << "Player's chips: $" << _playerChips << endl << endl;
		cout << "1)	Play Slots\n";
		cout << "2)	Credits\n";
		cout << "3)	Quit Game\n\n";
		cin >> _menu;

		switch (_menu) {
		case 1:
			if (_playerChips <= 0)
			{
				cout << "You have no chips left! Please call 0800 654 655\n\n";
				break;
			}
				cout << "You have selected slots! Make a bet: ";
				cin >> _bet;
				if (_bet > _playerChips)
				{
					cout << "You cannot bet more than your current chip amount!\n\n";
					break;
				}
				_playerChips -= _bet;
				int _r1, _r2, _r3;
				spinSlots(_r1, _r2, _r3);
				cout << "_________________________________________________\n";
				cout << "|	" << _r1 << "	|	" << _r2 << "	|	" << _r3 << "	|\n";
				cout << "_________________________________________________\n\n";

				_winnings = calculateWinnings(_r1, _r2, _r3, _bet);
				if (_winnings > 0)
				{
					cout << "You won $" << _winnings << endl;
				}
				else
				{
					cout << "You lost $" << _bet << endl;
				}

				_playerChips += _winnings;
				
				break;
			
		case 2:
			cout << "This was made by Taylor Ah Fook, as part of an assignment for GD1P01.\nCode was written solely by myself.\n\n";
			break;

		case 3:
			cout << "Exiting... \n\n";
			break;

		default:
			cout << "You have entered an invalid menu option. Please try again \n\n";
		}
	}

	while (_menu != 3);

	return 0;
}