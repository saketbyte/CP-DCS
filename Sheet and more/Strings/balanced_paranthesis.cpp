class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        stack<char>q;
       if(x.length()==1){
       return false;}
       
       for(int i=0;i<x.length();i++){
           if(x[i]=='[' || x[i]=='{' || x[i]=='('){
               q.push(x[i]);
           }
           // this is where all the logic is.
           else if(!q.empty()){
               char s=q.top();
               q.pop();
               if((x[i]==')' && s!='(')|| (x[i]=='}' && s!='{')|| (x[i]==']' && s!='[')){return false;}
           }
           else{
                 return false; 
           }
           
       }
       if(q.size()!=0){return false;}
       else{
           return true;
       }
        
    }

};