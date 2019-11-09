#include<iostream>
#include<vector>
using namespace std;
vector<int>abc;
int strange_sum(int x, int y) {
    if (y!= x)
    return strange_sum(x, (y+x) / 2)+strange_sum((y+x) / 2 + 1, y);
    else
        return abc[y];
}
int main() {
    int n;
    cin>>n;
    abc.resize(n);
    for (int i=0; i<n; ++i)
        cin >> abc[i];
    cout << strange_sum(0, n-1);
return 0;
}