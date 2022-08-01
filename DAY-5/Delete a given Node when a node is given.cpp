void insertNode(node* &head,int val) {
  
    node* newNode = new node(val);
    if(head == NULL) {
      
        head = newNode;
      
        return;
    }
    node* temp = head;
  
    while(temp->next != NULL) temp = temp->next;
  
    temp->next = newNode;
}
//function to get reference of the node to delete

node* getNode(node* head,int val) {
  
    while(head->num != val) head = head->next;
    
    return head;
  
}
//delete function as per the question
void deleteNode(node* t) {
  
  
    t->num = t->next->num;
    t->next = t->next->next;
    return;
}
