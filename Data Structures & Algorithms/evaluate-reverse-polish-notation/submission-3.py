class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for c in tokens:
            if c == "+":
                right = stack.pop()
                left = stack.pop()
                result = left + right
                stack.append(int(result))
            elif c == "-":
                right = stack.pop()
                left = stack.pop()
                result = left - right
                stack.append(int(result))
            elif c == "*":
                right = stack.pop()
                left = stack.pop()
                result = left * right
                stack.append(int(result))
            elif c == "/":
                right = stack.pop()
                left = stack.pop()
                result = left / right
                stack.append(int(result))

            else: 
                stack.append(int(c))

        return stack[0]