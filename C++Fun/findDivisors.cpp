#include<iostream>
#include<cmath>
#include<stack>
#include<vector>
using namespace std;

vector<long> findDivisors(long n) {
    vector<long> res;
    stack<long> divs;
    for(long i=1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            // cout << i << endl;
            res.push_back(i);
            if(i != n/i) {
                divs.push(n/i);
            }
        }
    }
    while(!divs.empty()) {
        // cout << divs.top() << endl;
        res.push_back(divs.top());
        divs.pop();
    }
    return res;
}

