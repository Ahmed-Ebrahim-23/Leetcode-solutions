class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        len1,len2 = len(word1),len(word2)
        min_len = min(len1,len2)
        print(min_len)
        ans = ""
        for i in range(min_len):
            ans += word1[i] + word2[i]

        if len1 == min_len:
            ans += word2[min_len:]
        else:
            ans += word1[min_len:]

        return ans