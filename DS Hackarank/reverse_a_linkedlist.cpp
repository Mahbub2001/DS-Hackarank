SinglyLinkedListNode *reverse(SinglyLinkedListNode *llist)
{
    if (llist == NULL || llist->next == NULL)
        return llist;

    SinglyLinkedListNode *temp = reverse(llist->next);
    llist->next->next = llist;
    llist->next = NULL;

    return temp;
}