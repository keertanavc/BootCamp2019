#include <iostream>
#include <cstdlib>

int main()
{
	using namespace std;
	float x, y, pi = 0;
	int i, N;
	//N = 100;
	//N = 1000;
	N = 10000;
	
	for (i = 0; i < N; i++)
	{
		x = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		y = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		if (x * x + y * y <= 1)
		{
			pi += 1;
		}
	}
	pi = pi * 4 / N;
	cout << "Value of pi is = " << pi << endl;
	return 0;
}
