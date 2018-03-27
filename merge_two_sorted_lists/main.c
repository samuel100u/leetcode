struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    
    
    struct ListNode *head = 0;
    struct ListNode *index;
    struct ListNode *pre = 0;
    
    if(l1 || l2)
        head = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    index = head;
    
    if(index)
        index->next = 0;
    
    while(l1!=0 && l2!=0){
        
        if(pre) {
            index = (struct ListNode*)malloc(sizeof(struct ListNode));
            pre->next = index;
            index->next = 0;
        }
        
        if(l1->val >= l2->val){
            
            index->val = l2->val;
            l2 = l2->next;
            pre = index;
            
        }else{
            
            index->val = l1->val;
            l1 = l1->next;
            pre = index;
        }
        
    }
    
    
    
    while(l1){
        
        if(pre) {
            index = (struct ListNode*)malloc(sizeof(struct ListNode));
            pre->next = index;
            index->next = 0;
        }
        
        index->val = l1->val;
        l1 = l1->next;
        pre = index;
        
    }
    
    while(l2){
        
        if(pre) {
            index = (struct ListNode*)malloc(sizeof(struct ListNode));
            pre->next = index;
            index->next = 0;
        }
        
        index->val = l2->val;
        l2 = l2->next;
        pre = index;
        
    }
    
    return head;
    
}