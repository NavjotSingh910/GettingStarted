#include <iostream>
using namespace std;
int main()
{
    long t = 0, a = 0, b = 0, c = 0;
    cin >> t;
    while (t-- != 0)
    {
        cin >> a >> b >> c;
        if (a + b + c == 180)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}