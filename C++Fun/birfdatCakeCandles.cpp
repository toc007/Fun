#include <bits/stdc++.h>
#include <set>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    multiset<int> ms(ar.begin(), ar.end());
    return ms.count(*(--ms.end()));
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;

}

