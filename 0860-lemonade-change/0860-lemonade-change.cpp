class Solution {
public:
    
    bool lemonadeChange(vector<int>& bills) {
        
        int five =0, ten = 0, twenty =0;
        bool flag = false;
        
        for(int i =0;i<bills.size();i++)
        {
            int denomination = bills[i];
            
            if(denomination == 5) five++;
            if(denomination == 10) ten++;
            if(denomination == 20) twenty++;
           
           
            
            
            if(denomination==20)
            {
               if(five<1) return false;
                else
                {
                    if(five>=1 && ten>=1 )  
                    {
                        five--;
                        ten--;
                        flag = true;
                    }
                    else
                     if(five>=3) {flag = true, five-=3;}
                    
                    else 
                        return false;
                }
            }
            
            else if(denomination == 10) 
            {
                if(five>=1) five--,flag = true;
            }
            
            cout<<denomination<<endl;
            cout<<five<<ten<<twenty<<endl;
          

        }
        
        return flag;
        
        
    }
};