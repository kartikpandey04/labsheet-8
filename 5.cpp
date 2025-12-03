#include <iostream>
#include <cstring>
using namespace std;

void copyString(char dest[], char src[]) {
    strcpy(dest, src);
}

int main() {
    char src[100], dest[100];
    cout << "Enter string: ";
    cin.getline(src, 100);

    copyString(dest, src);

    cout << "Copied string: " << dest;
    return 0;
}
