#!/usr/bin/python

class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        maxlen = 0
        currlen = 0
        seen = ""
        for c in s:
            if seen.find(c) >= 0:
                seen = seen[seen.find(c)+1:]
                currlen = len(seen)
            currlen += 1
            seen += c
            if maxlen < currlen:
                maxlen = currlen
        return maxlen

def main():
    sol = Solution()
    print sol.lengthOfLongestSubstring("dvdf")

if __name__ == "__main__":
    main()
