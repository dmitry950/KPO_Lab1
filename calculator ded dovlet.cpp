#include <iostream>
using namespace std;
int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    if (a >= 1 && a <= b && b <= 1000000) {
        int x[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
        for (int i = a; i <= b; i++) {
            int num = i;
            while (num > 0) {
                sum += x[num % 10];
                num /= 10;
            }
        }
        cout << sum;
    }
    else {
        cout << "нарушены условия: 1 ≤ a ≤ b ≤ 10^6" << endl;
    }
    return 0;
}
