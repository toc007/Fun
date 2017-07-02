#include <iostream>
#include <unordered_map>

using namespace std;

class longestSubstring
{
public:
    longestSubstring() {

    }

    int longSubstring(string s)
    {
        int hist[256] {-1};
        string substr = "";
        int subLength = -1;
        int subIndex = 0;

        for (int i = 0; i < s.length(); i++)
        {
            unsigned char c = tolower(s[i]);

            if(hist[c] == -1)
                hist[c] = i;
            else {
                int temp = subIndex;
                subIndex = hist[c] + 1;

                for(int j=temp; j<subIndex; j++) 
                    hist[(unsigned char)s[j]] = -1;

                hist[c] = i;
            }

            if (i - subIndex + 1 >= subLength) {
                subLength = i - subIndex + 1;
                substr = s.substr(subIndex, subLength);
                hist[c] = i;
            }
        }

        cout << substr << endl;

        return subLength;
    }
};

int main(int argc, char** argv) {
    string s = argv[1];
    longestSubstring penis;
    cout << s << ": " << penis.longSubstring(s);
}
