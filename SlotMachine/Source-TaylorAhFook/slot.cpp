#include "slot.h"
#include <cstdlib>

void spinSlots(int& _a, int& _b, int& _c)
{
	_a = rand() % 6 + 2;
	_b = rand() % 6 + 2;
	_c = rand() % 6 + 2;
}

int calculateWinnings(int _a, int _b, int _c, int _bet)
{
	if (_a == _b && _b == _c && _a == 7)
		return _bet * 10;
	else if (_a == _b && _b == _c)
		return _bet * 5;
	else if (_a == _b || _a == _c || _b == _c)
		return _bet * 2;
	else
		return 0;
}