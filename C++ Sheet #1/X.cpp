#include<iostream>
using namespace std;

int main()
{
    long long int l1, r1, l2, r2;

    cin >> l1 >> r1 >> l2 >> r2;


    long long int start = max(l1, l2);
    long long int end = min(r1, r2);


    if (start <= end) {
        cout << start << " " << end << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
