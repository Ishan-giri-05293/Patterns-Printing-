#include <iostream>
using namespace std;

void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << string(i, ' ') << string(2 * (N - i) - 1, '*') << endl;
    }
}

int main()
{
    int N = 5;
    pattern7(N);
    return 0;
}