#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> dig_trench(vector<vector<int>>abc) {
    for (int i=0; i<abc.size(); ++i)
        for (int y=0; y<abc.size(); ++y)
            abc[i][y] = abs(i - y);
    return abc;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> abc(n, vector<int>(n));
    abc=dig_trench(abc);
    for (int i=0; i<n; ++i) {
        for (int y=0; y<n; ++y)
        cout << abc[i][y] << " ";
    cout << endl;
} return 0;
}