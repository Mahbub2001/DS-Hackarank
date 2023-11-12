void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    newNode->next = llist;
    llist = newNode;

    return llist;

}