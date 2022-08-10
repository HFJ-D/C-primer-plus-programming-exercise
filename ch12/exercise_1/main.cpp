#include "cow.h"

int main()
{
	Cow cow1;
	cow1.ShowCow();
	Cow cow2("Henry", "ball", 66);
	cow2.ShowCow();
	Cow cow3 = cow2;
	cow3.ShowCow();
	cow1 = Cow(cow2);
	cow1.ShowCow();

	return 0;
}

