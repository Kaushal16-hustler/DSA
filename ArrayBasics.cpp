#include <iostream>
using namespace std;

int main()
{
	int A[10] = {4, 6, 8, 9, 5, 8, 65};
	// int i;
	/* cout<<A[3]<<endl;
	/for (i = 0; i < 10; i++)

	{
		cout << A[i] << endl;
	}*/
	// foreach loop
	for (int x : A)
		cout << x << endl;

	return 0;
}