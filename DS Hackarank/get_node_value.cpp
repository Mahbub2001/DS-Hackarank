int getNode(SinglyLinkedListNode *llist, int positionFromTail)
{
    SinglyLinkedListNode *temp1 = llist;
    SinglyLinkedListNode *temp2 = llist;

    for (int i = 0; i < positionFromTail; i++)
    {
        temp1 = temp1->next;
    }

    while (temp1->next != NULL)
    {
        temp2 = temp2->next;
        temp1 = temp1->next;
    }

    return temp2->data;
}
