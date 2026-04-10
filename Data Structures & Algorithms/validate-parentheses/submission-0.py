class Solution:
    def isValid(self, s: str) -> bool:
        openStack = []
        closeToOpen = {"}" : "{", ")" : "(", "]" : "["}
        for n in s:
            if n in closeToOpen: #if its a close bracket
                if openStack and openStack[-1] == closeToOpen[n]:
                    openStack.pop()
                else:
                    return False
            else:
                openStack.append(n)
        return not openStack;


        