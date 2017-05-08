#include <iostream>
using namespace std;

unsigned char setLeftBit(unsigned char input, unsigned char bit) {
    unsigned char temp = 0x7F;
    cout << (unsigned int)temp << endl;
    temp = temp | (bit << 7);
    return temp;
}

int main(int argc, char **argv) {
    cout << (int)setLeftBit((unsigned char)140, (unsigned char)0) << endl;
}
