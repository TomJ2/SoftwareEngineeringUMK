#include <iostream>
using namespace std;

int nwd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Wczytane liczby: " << a << " " << b << endl;
    cout << "NWD: " << nwd(a, b) << endl;
    return 0;
}

