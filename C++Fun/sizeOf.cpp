#include <iostream>

using namespace std;

int main() {
    char c;
    int i;
    long int li;
    long long int lli;
    
    cout << "Sizes in bytes" << endl;
    cout << "Size of char:          " << sizeof(c) << endl;
    cout << "Size of int:           " << sizeof(i) << endl;
    cout << "Size of long int:      " << sizeof(li) << endl;
    cout << "Size of long long int: " << sizeof(lli) << endl;
}
