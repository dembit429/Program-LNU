#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, eps;
    cout << "x=";
    cin >> x;
    cout << "eps=";
    cin >> eps;
    float s = 0;
    int i = 2;
    float r = -(x * x) / 8;
    while (fabs(r) > eps)
    {
        s += r;
        r *= -1 * x * (2 * i - 1) / (2 * (i + 1));
        i++;
    }
    cout << "s=" << 1 + x / 2 + s << endl;
    cout << sqrt(1 + x);
    return 0;
    
}