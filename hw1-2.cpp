#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number; // integer read from user

   cout << "Enter a five-digit integer: "; // prompt
   cin >> number; // read integer from user
   for (int i = 10000; i > 1; i /= 10)
   {
		cout << number / i << " ";
		number = number % i;
		if (i == 10)
			cout << number % i << endl;
   }	

   system( "pause" );
} // end main
