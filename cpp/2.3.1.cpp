#include <iostream>
using namespace std;

void reverse(int * m, int size);

int main() {
    int m[5] = {1, 2, 3, 4, 5};

    reverse(m, 5);

    for (int i = 0; i < 5; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    return 1;
}

void reverse(int * m, int size) {
    cout << m;
    cout << endl;
}