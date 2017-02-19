#include<iostream>
#include<queue>

using namespace std;

int main() {
    priority_queue<int> q;
    q.push(5);
    q.push(8);
    q.push(40);
    q.push(52);
    q.push(6);
    q.push(9);
    q.push(2);

    while(!q.empty()) {
        cout << q.top() << endl;
        q.pop();
    }
}
