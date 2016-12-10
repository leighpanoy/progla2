#include <iostream>
using namespace std;
int main ()
{
	for (int c=1 ; c<=100 ; c++)
	{
		if (c%3 == 0 && c%5 == 0)
		{
			cout << "Ed Pogi" << endl;
		}
		else if (c%5 == 0)
		{
			cout << "Ed" << endl;
		}
		else if (c%3 == 0)
		{
			cout << "Pogi" << endl;
		}
		else
		{
			cout << c << endl;
		}
	}
	
	return 0;
}
