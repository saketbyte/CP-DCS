long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  
  long long num1 = 0;
  long long num2 = 0;
  long long N = 1000000000 + 7;  
  long long product = 1;
  
  Node *first = l1;
  Node *second = l2;
  
  while( first || second )
  {
      
      if(first)
      {
          
            num1 = ((num1)*10)%N + first->data;
            first = first->next;
      }
         
      if(second)
        {
            num2 = ((num2)*10)%N + second->data;
            second = second->next;
        }
  }
  
    return ((num1%N)*(num2%N))%N;
  
 

}