#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c <= b && a <= d)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}