class Twitter {
public:
    unordered_map<int, unordered_set<int>> friends;
    unordered_map<int, vector<pair<int,int>>> tweets;
    int time;
    Twitter() {
        time =0;
    }
    
    void postTweet(int uid, int tid) {
        tweets[uid].push_back({time++,tid});
    }
    
     void follow(int follower, int fren) {
        
         friends[follower].insert(fren);
    }
    
    void unfollow(int follower, int fren) {
        if(friends[follower].find(fren)!=friends[follower].end())
            friends[follower].erase(fren);}
    
    
     vector<int> getNewsFeed(int uid) {
        vector<int> feed;
        priority_queue<pair<int,int>> pq;
        
        for(auto it: tweets[uid]) pq.push(it);
        
        for(int follower: friends[uid])
            for(auto it:tweets[follower])
                pq.push(it);
        
        while(!pq.empty() && feed.size()<10)
        {
            feed.push_back(pq.top().second);
            pq.pop();
        }
        
        return feed;
    }
};
    
   
    
   

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */