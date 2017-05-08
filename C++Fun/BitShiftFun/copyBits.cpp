#include <iostream>
using namespace std;

typedef unsigned char byte;

byte copyBits(byte source, byte dest, int n) {
    byte maski = ~0 >> (8-n-1);
    byte temp = source & maski;
    byte maskj = ~0 >> n;
    byte temp2 = dest & maskj;
    return temp2 | (temp << (8-n-1));
}

int main(int argc, char **argv) {
    byte i = (byte)stoi(argv[1]);
    byte j = (byte)stoi(argv[2]);

    cout << (unsigned int)copyBits(i, j, 2);
}
