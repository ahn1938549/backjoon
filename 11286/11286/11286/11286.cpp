#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
using namespace std;

struct cmp {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        }
        else {
            return abs(a) > abs(b);
        }
    }
};

int main(void) {
    int times;
    int index;
    cin >> times;
    priority_queue<int, vector<int>, cmp> que;
    for (int i = 0; i < times; i++) {
        index = 0;
        cin >> index;
        if (index != 0) {
            que.push(index);
        }
        else {
            if (que.empty()) {
                cout << "0" << "\n";
            }
            else {
                cout << que.top() << "\n";
                que.pop();
            }
        }
    }
    return 0;
}
