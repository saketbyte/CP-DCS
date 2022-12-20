class Solution {
public:

         void dfs(unordered_map<int, vector<int> > &adjacencyList, int v1, unordered_map<int, bool> &visited) 
    {
    
      vector<int> adjacentVertices = adjacencyList[v1];
        
      // Mark it visited to avoid calling over this vertex again
      visited[v1] = true;
        
      // Recursion call
      for(int i = 0; i < adjacentVertices.size(); i++) 
      {
         //If the vertex is not visited yet then dfs from there
        if(visited.find(adjacentVertices[i]) == visited.end()) 
          dfs(adjacencyList, adjacentVertices[i], visited);

      }
        
    }


    bool isConnected(unordered_map<int, vector<int> > &adjacencyList) 
    {
      unordered_map<int, bool> visited;
      int startVertex = 0;

      dfs(adjacencyList, startVertex, visited);
      return visited.size() == adjacencyList.size();
    }
    
    /* Main Function */
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        unordered_map<int, vector<int> > adjacencyList;
        
        //Putting the input in a graph
        for(int i=0;i<rooms.size();i++)
        {
            //Putting the room in map irrespective it has any keys or not
            adjacencyList[i];
            
            for(auto &r: rooms[i])
                adjacencyList[i].push_back(r);
        }
        
        return isConnected(adjacencyList) ;      
                
    }
};