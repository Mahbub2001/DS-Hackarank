DoublyLinkedListNode *sortedInsert(DoublyLinkedListNode *llist, int data)
{
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);

    if (llist == NULL || llist->data > data)
    {
        newNode->next = llist;
        if (llist != NULL)
            llist->prev = newNode;
        return newNode;
    }

    DoublyLinkedListNode *current = llist;
    while (current->next != NULL && current->next->data < data)
        current = current->next;

    newNode->next = current->next;
    if (current->next != NULL)
        current->next->prev = newNode;
    current->next = newNode;
    newNode->prev = current;

    return llist;
}