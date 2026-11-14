#include <iostream>
using namespace std;

int main() {
    long long num = 600851475143;
    for (long long i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            cout << i << endl;
            num /= i;
        }
    }
    if (num > 1) {
        cout << num << endl;
    }
    return 0;
}
