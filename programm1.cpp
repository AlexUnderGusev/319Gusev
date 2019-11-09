#include <iostream>
#include <vector>
using namespace std;
bool find (vector <int> abc,int n) {
          for (int i=0; i<abc.size(); ++i)
          if (abc[i] == n)
          return true;
    return false;
}
vector<int> delete_duplicates(vector<int> arr) {
    vector<int> elements;
    for (int i = 0; i < arr.size(); ++i) {
        if (find(elements, arr[i])) {
           arr.erase(arr.begin() + i--);
           } else elements.push_back(arr[i]);
    } return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
        for (int i=0; i<n; ++i)
            cin >> arr[i];
    arr = delete_duplicates(arr);
        for (int i=0; i<arr.size(); ++i)
            cout << arr[i]<< " ";
return 0;
}