#include <iostream>
using namespace std;
int main()
{
    long int n;
    while ((cin >> n) && n != 0)
    {
        if (n < 10)
            cout << n <<endl;
        else
        {
            long int sum = 0;
            while (n >= 10)
            {
              sum += n % 10;
              n /= 10;
              if (n < 10)
              {
                sum += n % 10;
                if (sum >= 10)
                {
                   n = sum;
                   sum = 0;
                }
              }  
            }
            cout << sum << endl ;    
        } 
    }    
}