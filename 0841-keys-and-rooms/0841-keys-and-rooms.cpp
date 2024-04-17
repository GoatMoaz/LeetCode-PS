class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        set<int> visited;
        queue<int> q{{0}};
        while(q.size()){
            int curr=q.front();
            q.pop();
            visited.insert(curr);
            for (auto& neighbor: rooms[curr]) {
                if(!visited.count(neighbor))
                    visited.insert(neighbor),q.push(neighbor);
            }
        }
        return visited.size()==rooms.size();
    }
};