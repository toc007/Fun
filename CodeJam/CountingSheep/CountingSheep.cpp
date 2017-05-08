#include <iostream>
#include <unordered_set>

using namespace std;

/*
bool seeAllDig(int &cnt[]) {
    bool ret = false;
    for(int e:cnt) 
        ret = ret && e;
    return ret;
}
*/

int cntSheep(int n) {
    if(n==0)
        return -1;
    unordered_set<int> cnt;
    int i = 1;
    while(cnt.size()<10) {
        int temp = i*n;
        do {
            if(cnt.insert(temp%10).second)
                if(cnt.size() >= 10)
                    return i * n;
            temp /= 10;
        } while(temp>0);
        i++;
    }
}

int main() {
    int argc;
    cin >> argc;
    for(int i=0; i<argc; i++) {
        int in;
        cin >> in;
        int res = cntSheep(in);
        cout << "Case #" << i+1 << ": ";
        if(res==-1) {
            cout << "INSOMNIA" << endl;
        }
        else {
            cout << res << endl;
        }
    }
}
