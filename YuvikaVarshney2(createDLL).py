class Node:
    def __init__(self, val=0, next=None, prev=None):
        self.val = val
        self.next = next
        self.prev = prev


def constructDLL(arr: [int]) -> Node:
    # Write your code here
    head=Node()
    head=None
    n=len(arr)
    for i in range(n-1,-1,-1):
        temp=Node(arr[i])
        if head==None:
            head=temp
        else:
            head.prev=temp
            temp.next=head
            head=temp
    return head



    pass
