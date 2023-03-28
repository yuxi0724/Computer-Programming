// Determine whether a number is a palindrome.
#include <iostream>
using namespace std; 

int main()
{
   int number; // user input number
   cout << "Enter a 5-digit number: "; // prompt for a number
   cin >> number; // get number
   int x = number;
   for (int i = 10000; i >= 100; i /= 100)
   {   
	   if (number / i != number % 10)
	   {
		  cout << x << " is not a palindrome." << endl;
		  return 0;
	   }   
	   number %= i;
	   number /= 10;
   }
   cout << x << " is a palindrome." << endl;
   system( "pause" );
} // end main
