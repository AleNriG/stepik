#include <iostream>
using namespace std;

void strcat(char *to, const char *from);

int main() {
    char to[] = "String to";
    char from[] = "concatenation!!!";

    strcat(to, from);

    return 0;
}

void strcat(char *to, const char *from) {
    cout << "test" << endl;
}
