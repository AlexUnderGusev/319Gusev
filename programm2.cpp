#include <iostream>
#include <set>
#include <vector>
#include <cmath>
using namespace std;
bool Easy(int n) {
        if (n == 0)
    return false;
        for (int i=2; i<sqrt(n); ++i)
        if (n%i == 0)
    return false;
    return true;
}
vector<int> delete_annoying_primes(vector<int> arr) {
        set<int> elements;
        set<int> easy_nums;
    for (int i = 0; i < arr.size(); ++i) {
        if (easy_nums.find(arr[i]) != easy_nums.end())
    elements.insert(arr[i]);
        else if (Easy(arr[i]))
    easy_nums.insert(arr[i]);
}
for (int i = 0; i < arr.size(); ++i)
    if (elements.find(arr[i]) != elements.end())
        arr.erase(arr.begin() + i--);
    return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; ++i)
        cin >> arr[i];
arr = delete_annoying_primes(arr);
    for (int i=0; i<arr.size(); ++i)
        cout << arr[i] << " ";
return 0;
}