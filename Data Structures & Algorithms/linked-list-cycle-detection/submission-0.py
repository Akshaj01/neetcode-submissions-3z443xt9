# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        rabbit, turtle = head, head

        while rabbit and rabbit.next:
            turtle = turtle.next
            rabbit = rabbit.next.next
            if rabbit == turtle:
                return True
        return False