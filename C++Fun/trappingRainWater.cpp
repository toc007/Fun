#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int trap(vector<int>& height) {
            auto beg = height.begin();
            auto end = height.end();
            cout << max_element(beg, end);
        }
};

int main() {
    Solution s;
    s.trap(vector<int>)
}
