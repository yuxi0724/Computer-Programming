#include <iostream>
#include <cstring>
using namespace std;

// puts the binary representation of number into bits, and
// puts the the number of bits of the binary representation of number into numBits
// for example, if number is 10, then numBits == 4, and
// bits[ 3 ] = 1, bits[ 2 ] = 0, bits[ 1 ] = 1 and bits[ 0 ] = 0
void decimalToBinary( int number );

// prints bits[ last ], bits[ last - 1 ], . . ., bits[ 0 ]
void displayBinary( int last );

// returns bits[ 0 ] + bits[ 1 ] + . . . + bits[ last ],
// or equivalently the number of 1s in the binary representation of number,
// for example, if number is 10, then returns 2
int sumBits( int last );

int bits[ 32 ];
int numBits;

int main()
{
   int number;
   cin >> number;
   while( number > 0 )
   {
      memset( bits, 0, sizeof( bits ) );
      numBits = 0;

      decimalToBinary( number );

      cout << "The parity of ";
      displayBinary( numBits - 1 );

      cout << " is " << sumBits( numBits - 1 ) << " (mod 2).\n";

      cin >> number;
   }

   system( "pause" );
}

void decimalToBinary( int number )
{
    while (number>0)
    {
        if (number % 2 == 1)
            bits[numBits] = 1;

        else
            bits[numBits] = 0;
        number /= 2;
        if(number!=0)
            numBits++;
    }
    if (bits[numBits] == 0)
    {
        bits[numBits + 1] = 1;
        numBits++;
    }
}

void displayBinary( int last )
{
    int c = 0;
    for (int i = last + 1; i >= 0; i--)
    {
        cout << bits[i];
        if (bits[i] == 1)
            c++;
    }
    numBits = c;

}

int sumBits( int last )
{
    return last + 1;
}