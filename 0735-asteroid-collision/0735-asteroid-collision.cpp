class Solution {
public:
    vector<int> asteroidCollision(vector<int>& A) {
      vector<int> res;
	for(int a : A) {
                // pick an asteroid

		bool destroyed = false;
		while(res.size() && res.back() > 0 && a < 0 && !destroyed) {
			// if the stone is
            // negative 
            // not destroyed by stack stone
            // and can further destroy
            // and there is something to destroy
            // only then enter the loop
        
            if(res.back() >= -a) destroyed = true;
            // stone haar gya
            // stone bach gya or stack m ghus gya
			if(res.back() <= -a) res.pop_back();
		}
		if(!destroyed) res.push_back(a);
	}
	return res;
    }
};