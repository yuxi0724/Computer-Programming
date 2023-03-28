#include<iostream>
using namespace std;
int main() 
{
	int n, a, b;
	cin >> n;
	for (int i = 1; i <= n ; i++)
	{
		int sum = 0;
		cin >> a;
		cin >> b;
		if (a > b)
		{
			for (int j = b; j <= a; j++)
			{
				if (j % 2 != 0)
					sum += j;
			}
		}
		else
		{
			for (int j = a; j <= b; j++)
			{
				if (j % 2 != 0)
					sum += j;
			}
		}
		cout << "Case" << i << ":" << sum << endl;
	}
}