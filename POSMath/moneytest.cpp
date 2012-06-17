#include "money.h"

void main()
{
	CMoney m1(100, 50);
	CMoney m2 = m1 * m1;

	auto rands = m1.GetRands();
	auto cents = m1.GetCents();
}