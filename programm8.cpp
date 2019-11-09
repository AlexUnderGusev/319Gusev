#include <iostream>
using namespace std;
int gcd(int x, int y) {
    if (y==0)
return x;
    else
return gcd(y, x%y);
}
    int proper_fraction(int n) {
    int count=0;
        for (int i=1; i<n; ++i) {
        if (gcd(i, n) == 1)
        ++count;
    } return count * 2;
}
int main() {
    int n;
    cin>>n;
    cout <<proper_fraction(n);
return 0;
}