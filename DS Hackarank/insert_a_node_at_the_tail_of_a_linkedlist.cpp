SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode *head,int data){
    SinglyLinkedListNode * newNode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp = head;
    if(head == NULL){
        head = newNode;
    }
    else{
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}