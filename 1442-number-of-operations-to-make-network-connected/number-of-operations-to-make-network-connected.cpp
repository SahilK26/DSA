class disjointSet{
    public :
    vector<int>parent,rank;
    disjointSet(int n){
        parent.resize(n+1,0);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
        int findUpar(int node){
            if(node==parent[node]){
                return node;
            }
            return parent[node]=findUpar(parent[node]);
        }
        void unionByRank(int u, int v){
            int ulp_u = findUpar(u);
            int ulp_v = findUpar(v);
        
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u]< rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_u]> rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v]= ulp_u;
            rank[ulp_u]++;
        }
    }
};

class Solution {

public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        disjointSet ds(n);
        int cntExtra=0;
        for(auto it : connections){
            int v=it[0];
            int u = it[1];
            if(ds.findUpar(v)==ds.findUpar(u)){
                cntExtra++;
            }
            else{
                ds.unionByRank(u,v);
            }
        }
            int cntC=0;
            for(int i=0;i<n;i++){
                if(ds.parent[i]==i) cntC++;
            }
            int ans = cntC-1;
            if(cntExtra>=ans) return ans;
            return -1;
    }
};