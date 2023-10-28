def searchInLinkedList(head, k):
    # Your code goes here.
    temp=head
    if temp.data==k:
        return 1
    while temp.next!=None:
        temp=temp.next
        if temp.data==k:
            return 1
    return 0
