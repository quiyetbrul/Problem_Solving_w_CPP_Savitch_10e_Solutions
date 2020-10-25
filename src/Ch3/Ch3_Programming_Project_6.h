#include <iostream>

using namespace std;

void Ch3_Programming_Project_6(){

    int f_1, f_2;

	int initialSize = inputInteger("Enter the initial size of a green crud in pounds: ", true);

	int days = inputInteger("Enter after number of days: ", true);

	f_1 = 0;
	f_2 = initialSize;

	for (int i = 5; i <= days; i++)
	{
		if (i % 5 == 0)
		{

			initialSize = f_1 + f_2;
			f_1 = f_2;
			f_2 = initialSize;
		}
	}
	cout << "The green crud will be " << initialSize << " pounds after " << days << " days.\n";

}