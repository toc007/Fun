#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool repeatChar(string s) {
        unordered_set<char> us;
        for(char c:s) {
            auto i = us.insert(c);
            if(!i.second)
                return true;
        }
        return false;
    }

    int lengthOfLongestSubstring(string s) {
        if(s.length() == 1)
            return 1;
        cout << s.substr(0, s.size()/2) << endl;
        cout << s.substr(s.size()/2);
        return -1;
    }
};

int main(int argc, char** argv) {
    Solution s;
    s.lengthOfLongestSubstring("PENIS");
}
