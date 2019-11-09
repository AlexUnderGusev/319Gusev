#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> build_zigurat(vector<vector<int>> abc)
{
    for (int i=0; i<(abc.size()+1) / 2; ++i)
    {
        for (int y=i; y<abc.size() - i; ++y) {
            abc[i][y] =i+1;
            abc[abc.size() - i - 1][y]=i+1;
            abc[y][i] =i+1;
            abc[y][abc.size() - i - 1]=i+1;
        }
    } return abc;
}
int main() {
    int n;
    cin >> n;
vector<vector<int>> arr(n, vector<int>(n));
    arr=build_zigurat(arr);
    for (int i=0; i<n; ++i) {
        for (int y=0; y<n; ++y)
        cout << arr[i][y] << " ";
    cout << endl;
} return 0;
}