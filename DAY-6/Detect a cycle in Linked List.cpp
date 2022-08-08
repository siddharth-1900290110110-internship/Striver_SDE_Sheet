void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

//utility function to create cycle
void createCycle(node* &head,int a,int b) {
    int cnta = 0,cntb = 0;
    node* p1 = head;
    node* p2 = head;
    while(cnta != a || cntb != b) {
        if(cnta != a) p1 = p1->next, ++cnta;
        if(cntb != b) p2 = p2->next, ++cntb;
    }
    p2->next = p1;
}

//utility function to detect cycle
bool cycleDetect(node* head) {
    unordered_set<node*> hashTable;
    while(head != NULL) {
        if(hashTable.find(head) != hashTable.end()) return true;
        hashTable.insert(head);
        head = head->next;
    }
    return false;
}
