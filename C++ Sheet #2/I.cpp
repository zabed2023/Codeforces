#include <iostream>
using namespace std;

int main()
{
    long long x, n, reversed = 0;
    cin >> x;

    n = x;

   
    while (n > 0)
    {
        int r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }

    
    cout << reversed << endl;

    
    if (reversed == x)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
