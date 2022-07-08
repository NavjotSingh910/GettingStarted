#include <iostream>
using namespace std;
int main()
{
    int N = 0, T = 0, sum = 0;
    cin >> T;
    while (T-- > 0)
    {
        cin>>N;
        while (N > 0)
        {
            sum += N % 10;
            N /= 10;
        }
        cout << sum << endl;
        sum=0;
    }
}