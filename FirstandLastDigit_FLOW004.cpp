#include <iostream>
using namespace std;
int main()
{
    int t = 0, n = 0, temp = 0;
    cin >> t;
    while (t-- != 0)
    {
        cin >> n;
        temp = n % 10;
        while (n >= 10)
        {

            n /= 10;
        }
        n += temp;
        temp = 0;
        cout << n<<endl;
    }
}