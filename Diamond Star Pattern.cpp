#include <iostream>
using namespace std;

void erect_pyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << string(N - i - 1, ' ') // spaces
             << string(2 * i + 1, '*') // stars
             << endl;
    }
}

void inverted_pyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << string(i, ' ')               // spaces
             << string(2 * (N - i) - 1, '*') // stars
             << endl;
    }
}

int main()
{
    int N = 15;
    erect_pyramid(N);
    inverted_pyramid(N);
    return 0;
}
