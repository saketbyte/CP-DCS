class Solution {
public:
   int findIntegers(int n) {
        int ans=0,i,last=0;
        vector<int> fib(31);
        fib[0]=1;
        fib[1]=2;
        for(i=2;i<31;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(i=30;i>=0;i--){
            if((1<<i)&n){
                ans += fib[i];
                if(last==1){
                    ans -=1;
                    break;
                }
                else
                    last=1;
            }
            else last=0;
        }
        return ans+1;
    }
};