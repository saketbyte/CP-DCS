class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        // DOne Using priority queues - learnt new concept of priority queue application
        
        priority_queue<int, vector<int>> pq;
	
	for(auto& pile : piles) pq.push(pile);

	while(pq.size() && k--)
	{
		int pile = pq.top(); pq.pop();
		pile -= pile/2;
		if(pile) pq.push(pile);
	}

	int totalPile = 0;
	while(pq.size())
	{
		totalPile += pq.top();
		pq.pop();
	}
	return totalPile;
        
    }
};