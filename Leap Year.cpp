#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the year number : " << endl;
    cin >> x;
    if (x % 4 == 0 && x > 0)
    {
        cout << "Year number " << x << " is a leap year." << endl;
    }

    else if (x <= 0)
    {
        cout << "Invalid year :/" << endl;
    }
    else
    {
        cout << x << " is not a leap year.";
    }
}
