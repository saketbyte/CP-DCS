class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gs) {
        
        
        if(hand.size()%gs) return false;
        
        map<int,int> freq;
        
        for(int card: hand)freq[card]++;
        
        for(auto it = freq.begin();it!=freq.end();it++)
        {
            int card = it->first, count = it->second;
            
            if(count>0)
            {
                for(int i =0;i<gs;i++)
                {
                    if(freq[card+i]<count) return false;
                    freq[card+i]-=count;
                }
            }
        }
        
        return true;
    }
};