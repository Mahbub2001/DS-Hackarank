int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{

    int size_of_a = 0, size_of_b = 0;
    SinglyLinkedListNode *curr1 = head1;
    SinglyLinkedListNode *curr2 = head2;

    while (curr1 != NULL)
    {
        size_of_a++;
        curr1 = curr1->next;
    }
    while (curr2 != NULL)
    {
        size_of_b++;
        curr2 = curr2->next;
    }

    curr1 = head1;
    curr2 = head2;
    if (size_of_a < size_of_b)
    {
        for (int i = 0; i < abs(size_of_a - size_of_b); i++)
        {
            curr2 = curr2->next;
        }
    }
    else
    {
        for (int i = 0; i < abs(size_of_a - size_of_b); i++)
        {
            curr1 = curr1->next;
        }
    }

    while (curr1 != curr2)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    return curr1->data;
}
