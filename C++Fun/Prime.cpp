#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if(n<2) {
        cout << "Fuck off m8";
        return false;
    }

    int upperBound = sqrt(double(n));

    for(int i=2; i<=upperBound; i++) {
        if(n%i == 0) 
            return false;
    }
    return true;
}

int main() {
    for(int i = 0; i<4000; i++) {
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}
