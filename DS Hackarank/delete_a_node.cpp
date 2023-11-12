SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if(llist == NULL && position == 0){
        return NULL;
    }
    if(position == 0 && llist!= NULL){
        llist = llist->next;
        return llist;
    }
    SinglyLinkedListNode *temp = llist;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    SinglyLinkedListNode *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;

    return llist;
}
