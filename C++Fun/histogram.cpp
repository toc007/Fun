#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main(int argc, char **argv) {
    vector<int> hist(255);
    ifstream inFile;

    string inf(argv[1]);
    inFile.open(inf);
    if(inFile.fail()) 
        return -1;

    char c;
    while(inFile.get(c)) {
        if(inFile.eof())
            break;
        hist[c]++;
    }

    for(unsigned char i=0; i<hist.size(); i++) {
        if(hist[i]) cout << i << ": " << hist[i] << endl;
    }

}
