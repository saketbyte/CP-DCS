class Solution{
  public:
   Node *merge(Node *first, Node *second){
        if(!second)
            return first;
        if(!first)
            return second;
            
        Node *p = first;
        Node *q = second;
        Node *prev = NULL;
    
        while(p && q){
            if(p->data <= q->data){
                prev = p;
                p = p->next;
            }else if(q->data < p->data){
                if(prev == NULL){
                    Node *temp = q->next;   
                    q->next = p;
                    first = q;
                    p = q;
                    q= temp;
                }else{
                    Node *temp = q->next;
                    prev->next = q;
                    q->next = p;
                    prev = q;
                    q = temp;
                }
            }
        }
        
        if(p == NULL){
            prev->next = q;
        }
            
        return first;
        
    }
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
            Node *first = arr[0];
            for(int i = 1 ; i < K ; i++){
                first = merge(first,arr[i]);
            }
            
            return first;
    }
};
