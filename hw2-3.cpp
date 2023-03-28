#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		int N, A=0, B=99;
		for (int j = 0; j < a; j++)
		{
			cin >> N;
			if (N > A)
				A = N;
			if (N < B)
				B = N;
		}
		cout << (A - B)*2 << endl;
	}
}
