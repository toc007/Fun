#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(int argc, char **argv) {
    ifstream inFile;
    
//    string inf(argv[1]);
//    inFile.open(inf);
//    if(inFile.fail()) 
//        return -1;

    char s[] = "I   like    me some penis";
    char *res;
    res = strtok(s, " \t");
    while(res) {
        cout << res << endl;
        res = strtok(NULL, " \t");
    }

}
