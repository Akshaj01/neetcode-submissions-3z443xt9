class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        closeToOpen = {")": "(", "}": "{", "]": "["}

        for c in s:
            if c in closeToOpen: #if closing bracket
                if stack and stack[-1] == closeToOpen[c]: # if stack not empty and correct match
                    stack.pop()
                    continue #good
                else:
                    return False
            #if open bracket
            stack.append(c) #add to stack
        
        if not stack:
            return True
        else:
            return False




                    



        