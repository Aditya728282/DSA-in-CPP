#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string>& ans, int i, string output, vector<string>& v ) {
    // Base case
    if (i >= output.size()) {
        ans.push_back(output);
        return;
    }

    int digit = output[i] - '0';
    string value = v[digit];
    for (int j = 0; j < value.length(); j++) {
        char ch = value[j];
        // include
        output[i] = ch;
        // recursive call
        solve(ans, i + 1, output, v);
    }
}

int main() {
   
    vector<string> ans;
    int i = 0;
    string output = "";

    vector<string> v(10);

    v[2] = "abc";
    v[3] = "def";
    v[4] = "ghi";
    v[5] = "jkl";
    v[6] = "mno";
    v[7] = "pqrs";
    v[8] = "tuv";
    v[9] = "wxyz";

    // assuming you want to generate combinations for a specific input
    string input = "23";
    solve(ans, 0, input, v);

    // print the generated combinations
    for (string s : ans) {
        cout << s << endl;
    }

    return 0;
}
