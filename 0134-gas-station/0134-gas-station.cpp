class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int diff = 0, n = gas.size(), count = 0;
       
        for(int i=0; i<2*n; i++){
            diff += (gas[i % n] - cost[i % n]);
            count++;
            if( diff < 0 ){
                count = 0;
                diff = 0;
            }
           
            if( count == n) {
                cout << i;
                return (i+1) % n;
            }
        }
        return -1;
        
    }
};