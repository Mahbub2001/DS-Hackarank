bool has_cycle(SinglyLinkedListNode *head)
{
    if (head == NULL)
        return false;

    SinglyLinkedListNode *temp1 = head->next;
    SinglyLinkedListNode *temp2 = head;

    while (temp1 != NULL && temp1->next != NULL && temp2 != NULL)
    {
        temp1 = temp1->next->next;
        temp2 = temp2->next;
        if (temp1 == temp2)
            return true;
    }
    return false;
}