#include <iostream>
#include <string>

using namespace std;

int numFlips(string &str) {
    int bit = (str[0] == '+')? 1:0;
    int flips = 0;
    for(int i=1; i<str.size(); i++) {
        if(str[i] == '+' && bit == 0) {
            flips++;
            bit = 1;
        }
        if(str[i]=='-' && bit==1) {
            flips++;
            bit = 0;
        }
    }

    if(bit == 0) 
        flips++;
    return flips;
}

int main() {
    int argc;
    cin >> argc;
    for(int i=0; i<argc; i++) {
        string str;
        cin >> str;
        cout << "Case #" << i+1 << ": " << numFlips(str) << endl;
    }
}
