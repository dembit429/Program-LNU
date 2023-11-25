#include <iostream>
#include <cmath>
using namespace std;

int sumofintegers(int n) {
    //к-сть дільників числа n
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        int sum1 = sumofintegers(i);

        for (int j = i + 1; j <= n; j++) {
            int sum2 = sumofintegers(j);

            if (sum1 == j && sum2 == i) {
                cout << i << " and " << j << " are friendly numbers." << endl;
            }
        }
    }

    return 0;
}
