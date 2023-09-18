#include <iostream>
#include <string>
#include <cstring>  // Added for strlen()

using namespace std;

void removeDuplicates(char a[]) {
    int l = strlen(a);
    if (l == 1 || l == 0) {
        return;
    }
    int prev = 0;
    for (int current = 1; current < l; current++) {
        if (a[current] != a[prev]) {
            prev++;
            a[prev] = a[current];
        }
    }
    a[prev + 1] = '\0';
}

int main() {
    char a[1000];
    cin.getline(a, 1000);

    removeDuplicates(a);
    cout << a << endl;
    return 0;
}
