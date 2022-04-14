//Write your code here
        // Step 1: Create a copy node for each node side by side of originl nodes
        Node *iter = head, *front = head;
        
        while(iter != NULL)
        {
            front = iter->next;
            Node *copy = new Node(iter->data);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        
        // Step 2: assign random pointers for the copy nodes
        iter = head;
        while(iter != NULL)
        {
            if(iter->arb != NULL)
                iter->next->arb = iter->arb->next;
                
            iter = iter->next->next;  // points to next original node
        }
        
        // Step 3: restore the original Linkedlist, and extract the copy Linkedlist.
        iter = head, front = head;
        Node *dummyHead = new Node(0);
        Node *copy = dummyHead;
        while(iter != NULL)
        {
            front = iter->next->next;
            
            // extract the copy Linkedlist
            copy->next = iter->next;
            
            // restore the original Linkedlist
            iter->next = front;
            
            copy = copy->next;
            iter = front;
            
        }
        return dummyHead->next;