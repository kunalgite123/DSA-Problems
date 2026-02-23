#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj,
         vector<bool>& vis, vector<bool>& rec) {

    vis[node] = true;
    rec[node] = true;

    for(int i = 0; i < adj[node].size(); i++) {
        int nei = adj[node][i];

        if(!vis[nei]) {
            if(dfs(nei, adj, vis, rec))
                return true;
        }
        else if(rec[nei]) {
            return true;
        }
    }

    rec[node] = false;
    return false;
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

    vector<vector<int>> adj(numCourses);

    for(int i = 0; i < prerequisites.size(); i++) {
        int course = prerequisites[i][0];
        int prereq = prerequisites[i][1];
        adj[prereq].push_back(course);
    }

    vector<bool> vis(numCourses, false);
    vector<bool> rec(numCourses, false);

    for(int i = 0; i < numCourses; i++) {
        if(!vis[i]) {
            if(dfs(i, adj, vis, rec))
                return false;
        }
    }

    return true;
}

int main() {

    int numCourses = 4;

    vector<vector<int>> prerequisites = {
        {1,0},
        {2,1},
        {3,2}
    };

    if(canFinish(numCourses, prerequisites))
        cout << "finish course<< endl;
    else
        cout <<" Cannot Finish" << endl;

    return 0;
}
