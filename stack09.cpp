#include<iostream>
#include<stack>
using namespace std;

void insertSort(stack<int>& s, int target) {
    // base case
    if (s.empty() || s.top() <= target) {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertSort(s, target);

    s.push(topElement);
}

void sortStack(stack<int>& s) {
    // base case
    if (s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();

    sortStack(s);

    // BT
    insertSort(s, topElement);
}

int main() {
    stack<int> s;

    s.push(7);
    s.push(3);
    s.push(5);
    s.push(9);
    s.push(1);

    sortStack(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
