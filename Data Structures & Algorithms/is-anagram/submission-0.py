class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        shash, thash = {}, {}

        for index in range(len(s)):
            shash[s[index]] = 1 + shash.get(s[index], 0)
            thash[t[index]] = 1 + thash.get(t[index], 0)

        if shash == thash:
            return True
        return False
        




            
            



        