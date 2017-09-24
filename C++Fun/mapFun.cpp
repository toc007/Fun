#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> hello;
    for(char c='a'; c <='z'; c++)
        hello.emplace(c, 1);
    for(auto a:hello)
        cout << a.first << a.second << endl;
}
