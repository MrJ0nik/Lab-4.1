#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = ";  cin >> N;

    S = 1;
    i = N;
    while (i <= 10)
    {
        S *= (i + (1.0 / (i * i))) / sqrt(1 + exp(1.0 / i));
        i++;
    }
    cout << "S=" << S << endl;

    S = 1;
    do {
        S *= (i + (1.0 / (i * i))) / sqrt(1 + exp(1.0 / i));
        i++;
    } while (i <= 10);
    cout << "S=" << S << endl;

    S = 1;
    for (i = N; i <= 10; i++)
    {
        S *= (i + (1.0 / (i * i))) / sqrt(1 + exp(1.0 / i));
    }
    cout << "S=" << S << endl;

    S = 1;
    for (i = 10; i >= N; i--)
    {
        S *= (i + (1.0 / (i * i))) / sqrt(1 + exp(1.0 / i));
    }
    cout << "S=" << S << endl;

    return 0;
}
