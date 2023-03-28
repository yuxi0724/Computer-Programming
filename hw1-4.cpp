// Determine whether three values represent the sides of a right triangle.
#include <iostream>
using namespace std; 

int main()
{
   int side1; // length of side 1
   int side2; // length of side 2
   int side3; // length of side 3

   // get values of three sides
   cout << "Enter side 1: ";
   cin >> side1;

   cout << "Enter side 2: ";
   cin >> side2;

   cout << "Enter side 3: ";
   cin >> side3;
          
   if ((side1 ^ 2 + side2 ^ 2) == (side3 ^ 2))
       cout << "These are the sides of a right triangle." << endl;
   else if ((side1 ^ 2 + side3 ^ 2) == (side2 ^ 2)) 
       cout << "These are the sides of a right triangle." << endl;
   else if ((side2 ^ 2 + side3 ^ 2) == (side1 ^ 2))
       cout << "These are the sides of a right triangle." << endl;
   else
       cout << "These do not form a right triangle." << endl;
   system( "pause" );
} // end main
