#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, L, sum=0;
	cin >> a >> b >> c >> d >> L;
	if (d == 0)
		return 0;
	for (int i = 0; i <= L; i++)
	{
		int SUM=(a*(i*i))+(b*i)+c;
		if (SUM % d == 0)
			sum++;
	}
	cout << sum;
}
