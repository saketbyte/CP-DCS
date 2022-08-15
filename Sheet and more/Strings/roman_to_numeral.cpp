 int ans = 0, num = 0;
        for (int i = S.size()-1; i>=0; i--) {
            switch(S[i]) {
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
            }
            if (4 * num < ans) ans -= num;
            else ans += num;
        }
        return ans;        
    // The logic is we use a smaller number ie I or X with a larger number to substract only when the difference is of
    // of 4 times the smaller number ie you will not write VX as V but you will write IX, XV, CD etc..
    // SO when traversing from the back, if we have any value to my left smaller than 4times the current value
    // we will substract it
    // otherwise we will addd it




    // ******************************************************************************

    // Another approach:
class solution{
    int romanToInt(string s) {
        // creating a map to store the character and its value
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;)
        {
            // if the value of the next element is greater than previous one 
            // for example if we encounter IX , then basically we need to subtract the value of 'I' from value of 'X' and then add to answer and then also increment the iterator i by 2 , as we have already considered i+1 element
            // 'IX'= 10-1=9
            // 'XL'= 50-10=40
            // 'IV'= 5-1=4
            if(i+1<n && m[s[i]]<m[s[i+1]])
            {
                ans=ans+m[s[i+1]]-m[s[i]];
                i=i+2;
            }
            // else we can simply add the value of s[i] to answer and increment i by 1
            // example- 'VIII' = 5+1+1+1 = 8
            //          'LX' = 50+10=60    
            else
            {
                ans=ans+m[s[i]];
                i++;
            }
        }
        return ans;
        
    }
};