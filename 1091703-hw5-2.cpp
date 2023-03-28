#include <iostream>
using namespace std;

// prints the binary representation of number,
// for example, if number is 10, then prints 1010
void displayBinary( int number );

// returns the sum of all bits of the binary representation of number,
// or equivalently the number of 1s in the binary representation of number,
// for example, if number is 10, then returns 2
int sumBits( int number );

int main()
{
   int number;
   cin >> number;
   while( number > 0 )
   {
      cout << "The parity of ";
      displayBinary( number );

      cout << " is " << sumBits( number ) << " (mod 2).\n";

      cin >> number;
   }

   system( "pause" );
}

void displayBinary( int number )
{
    string numbers="";
    while (number > 0)
    {
        if (number % 2 == 1)
            numbers = "1" + numbers;
        else
            numbers = "0" + numbers;
        number /= 2;
    }
    cout << numbers;

}

int sumBits( int number )
{
    int c=0;
    while(number > 0)
    {
        if (number % 2 == 1)
            c++;
        number /= 2;
    }
    return c;

}