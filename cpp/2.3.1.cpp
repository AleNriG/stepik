#include <iostream>
using namespace std;

void reverse(int * m, int size);
void print(int *m, int size);
void move(int *m, int size, int shift);

int main() {
    int m[5] = {1, 2, 3, 4, 5};

    print(m, 5);
    reverse(m, 5);
    print(m, 5);
    move(m, 5, 2);
    print(m, 5);
    reverse(m, 5);
    print(m, 5);

    return 0;
}

void reverse(int * m, int size) {
    for (int i = 0; i < size/2; i++) {
        int tmp = m[size - i - 1];
        m[size - i - 1] = m[i];
        m[i] = tmp;
    }
}

void print(int * m, int size) {
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
}

void move(int m[], int size, int shift) {
    while (shift > 0) {
        int * first = &m[0];
        int end = m[size - 1];
        int temp = size;

        while (temp > 1) {
            int * p = &m[temp - 1];
            *p = m[temp - 2];
            temp--;
        }

        *first = end;
        shift--;
    }
}
