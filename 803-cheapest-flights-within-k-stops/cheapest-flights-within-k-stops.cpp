class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        if(src==dst) return 0;
        vector<pair<int,int>>adj[n];
        for(auto it:flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
                // stops , {node, distance}
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        vector<int>dist(n,1e9);
        dist[src]=0;
        while(!q.empty()){
            auto it = q.front();
            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;
            q.pop();
            if(stops>k) continue;
            for(auto iter:adj[node]){
                int adjNode = iter.first;
                int edjw = iter.second;
                if(cost+edjw<dist[adjNode] && stops <=k){
                    dist[adjNode]=cost+edjw;
                    q.push({stops+1,{adjNode,cost+edjw}});
                }
            }
        }
        if(dist[dst]==1e9) return -1;
        return dist[dst];
    }
};