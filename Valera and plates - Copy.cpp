#include <iostream>
using namespace std;
int main()
{
	int x, y, z, n, sum = 0;
	cin >>x>>y>>z;

	for (int i=0;i<x;i++)
	{
		cin >> n;
		if (n == 1)
		{
			y--;
			if (y < 0)
			{
				sum++;
			}

		}
		if (n== 2)
		{
			z--;
			if (z<0)
			{
				y--;
				if (y < 0)
				{
					sum++;
				}
			}
		}
	}
	cout << sum;
}
