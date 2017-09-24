#include <iostream>
#include "./findDivisors.cpp"

bool isPerfekt(long n) {
    auto res = findDivisors(n);
    res.pop_back();
    int sum = 0;
    for(int i:res){
        if(sum > n) break;
        sum += i;
    }
    return n == sum;
}

void printPerfekt(int n) {
    int hit = 0;
    long j = 1;
    while(hit < n) {
        if(isPerfekt(j)) {
            cout << j << endl;
            hit++;
        }
        j++;
    }
}


int main() {
    printPerfekt(6);
    return 1;
}
