#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int first = 0, second = 1, third = 0, sum = 0;
    while (second < 4000000) {
        int tmp = first + second;
        first = second;
        second = tmp;
        if (second % 2 == 0) {
            sum += second;
        }
    }
    cout << sum << endl;
    return 0;
}
