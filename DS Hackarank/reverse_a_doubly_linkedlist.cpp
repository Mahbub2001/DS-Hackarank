
DoublyLinkedListNode *reverse(DoublyLinkedListNode *llist)
{
    DoublyLinkedListNode *temp = NULL;
    DoublyLinkedListNode *curr = llist;

    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        llist = curr;
        curr = curr->prev;
    }

    return llist;
}