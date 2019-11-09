#include <iostream>
using namespace std;
int strange_multiply(int x, int y) {
    int s=0;
    for (int i=0; i<y; ++i)
        s=x+s;
    return s;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << strange_multiply(a, b);
return 0;
}