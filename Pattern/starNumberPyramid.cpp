#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j << " ";
            j++;
        }
        for (int j = 1; j <= (i - 1) * 2; j++)
        {
            cout << "* ";
        }
        for (int j = (n - i + 1); j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        i++;
    }
    return 0;
}
