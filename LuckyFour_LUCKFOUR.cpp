#include <iostream>
using namespace std;
int main()
{
    long t = 0, n = 0, count = 0;
    cin >> t;
    while (t-- != 0)
    {
        cin >> n;
        while (n > 0)
        {
            if (n % 10 == 4)
            {
                count++;
            }
            n /= 10;
        }

        cout << count << endl;
        count = 0;
    }
}