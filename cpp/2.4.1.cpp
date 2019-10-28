#include <iostream>
using namespace std;

unsigned strlen(const char *str);


int main() {
    int len = 0;
    char string[] = "C-style string";

    len = strlen(string);

    cout << len << endl;
    return 0;
}


unsigned strlen(const char *str) {
    return 1;
}
