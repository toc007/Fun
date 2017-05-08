#include <iostream>
#include <climits>

using namespace std;



int main() {
    long int a[5];
    long int sum = 0;
    for(int i=0; i<5; i++) {
        cin >> a[i];
        sum += a[i];
    }
    long int min = LONG_MAX;
    long int max = -1;

    for(auto i:a) {
        long int temp = sum - i;
        if(temp < min) min = temp;
        if(temp > max) max= temp;
    }

    cout << min << " " << max;
    return 0;
}
