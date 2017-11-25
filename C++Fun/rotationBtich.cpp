#include <iostream>
#include <string>
using namespace std;

string rotationEncode(string s, int i) {
	for(char &c:s) {
		if(c >= 'a' && c <= 'z') {
			char temp = c + i;
			if(temp < 'a')
				c = 'z' - ('a' - temp);
			else if(temp > 'z')
				c = temp - 'z' + 'a';
			else
				c = temp;
		}
	}
	return s;
}

int main() {
	char c[20000000000];
	int i;
	cin.getline(c, 20000000000);
	cin >> i;
	string s(c);
	cout << rotationEncode(s, i);
}
