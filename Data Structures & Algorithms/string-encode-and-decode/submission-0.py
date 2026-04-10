class Solution:

    def encode(self, strs: List[str]) -> str:
        res = "" #empty string
        for s in strs: #for string in strings
            res += str(len(s)) + "#" + s # add to res the length of string plus pound plus string
        return res #return result


    def decode(self, s: str) -> List[str]:
        res = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != '#':
                j += 1
            length = int(s[i:j])
            i = j + 1
            newstring = s[i: i + length]
            res.append(newstring)
            i += length
        return res


            


