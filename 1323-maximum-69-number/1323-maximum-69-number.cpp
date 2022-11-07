class Solution {
public:
    int maximum69Number (int num) {
        
        int temp = num;
        vector<int> A;
        while(num!=0)
        {
            A.push_back(num%10);
            num/=10;
        }
        int num2 = 0;
        for(int i = A.size()-1; i>=0;i--)
        {
            if(A[i] == 6)
            { A[i] = 9;
             break;
            }
            

        }
         for(int i = A.size()-1; i>=0;i--)
                num2 =(num2*10) +A[i];
        
        
        return num2;
        
        
        
    }
};