#include <iostream>
#include <vector>
#include <algorithm> // for std::max

using namespace std;

 vector<int> goodnessOfArray(int n, int m, vector<int>& a, vector<int>& b) {
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int max = a[i] % b[0];

        for (int j = 1; j < m; ++j) {
            int mod_result = a[i] % b[j];
            max = std::max(max, mod_result);
        }

        v.push_back(max);
    }

    return v;
}

 
int main() {
    
    vector<int> a = {7, 9, 2, 3};
    vector<int> b = {3, 6, 4};         // ans = 3 3 2 3

    int n = a.size();
    int m = b.size();

    vector<int> result = goodnessOfArray(n, m, a, b);

    cout << "Maximum modulo results element in array Is : ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}