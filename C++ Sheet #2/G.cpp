#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        long long fac = 1;

        for (int j = 1; j <= N; j++)
        {
            fac *= j;
        }

        cout << fac << endl;
    }

    return 0;
}
