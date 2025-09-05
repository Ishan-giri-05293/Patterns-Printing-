#include <iostream>
using namespace std;

void rev()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    rev();
    return 0;
}