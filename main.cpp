#include <iostream>
using namespace std;
int main()
{
    int h, m;
    string c[21] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty"};
    cin >> h >> m;
    if (m == 0)
        cout << c[h] << " o' clock";
    else {
        bool ans = false;
        if (m > 30)
            {
            ans = true;
            m = 60 - m;
        }
        if (m == 30)
            cout << "half past " << c[h];
        else
        {
            if (9 < m && m < 20) cout << c[m] << " ";
            if (m / 10 == 2) cout << c[20] << " ";
            if (m < 10 || 20 < m) cout << c[m % 10]<< " ";
            if (ans == true)
            {
                if (m != 15 && m != 1) cout << "minutes to " << c[h + 1];
                else if (m == 1) cout << "minute to " << c[h + 1];
                else cout << "to " << c[h + 1];
            }
            else
            {
                if (m != 15 && m != 1) cout << "minutes past " << c[h];
                else if (m == 1) cout << "minute past " << c[h];
                else cout << "past " << c[h];
            }
        }
    }

    return 0;
}
