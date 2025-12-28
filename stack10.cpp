
// Q. Find the Next Smallest element 

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    vector<int> v;
    vector<int> ans;

    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    ans.resize(v.size(), -1); // Initialize ans with the same size as v and default values

    for(int i = v.size() - 1; i >= 0; i--) {
        int curr = v[i];
        while(!s.empty() && s.top() >= curr) {
            s.pop();
        }
        // If stack is not empty, assign the top value to ans[i]
        if(!s.empty()) {
            ans[i] = s.top();
        }

        s.push(curr);
    }

    cout << "printing" << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
