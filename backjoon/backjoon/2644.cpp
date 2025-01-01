//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//vector<vector<int>> jokbo;
//vector<int> dist;
//vector<bool> visit;

// DFS 
// ------------------

//int solve(int child, int node)
//{
//    if (child == node)
//    {
//        return 0;
//    }
//    int cnt = 0;
//    visit[node] = true;
//
//    for (int i = 0; i < jokbo[node].size(); ++i)
//    {
//        int next = jokbo[node][i];
//        if (!visit[next])
//        {
//            int result = solve(child, next);
//            if (result != -1) {
//                return result + 1;
//            }
//        }
//        
//        
//
//        
//        
//    }
//
//    return -1;
//
//}
// ------------------------------------
//int solve(int child, int parent)
//{
//    queue<int> temp;
//    temp.push(parent);
//    while (!temp.empty())
//    {
//        int node = temp.front();
//        visit[node] = true;
//        if (node == child)
//        {
//            return dist[node];
//        }
//        temp.pop();
//        for (int i = 0; i < jokbo[node].size(); ++i)
//        {
//            if (!visit[jokbo[node][i]])
//            {
//                temp.push(jokbo[node][i]);
//                dist[jokbo[node][i]] = dist[node] + 1;
//            }
//            
//            
//            
//        }
//    }
//    return -1;
//
//}



//int main(void) {
//    int n;
//    cin >> n;
//    jokbo.resize(n+1);
//    dist.resize(n+1, 0);
//    visit.resize(n+1, false);
//    int child, parent;
//    cin >> child >> parent;
//    int vortex; 
//    cin >> vortex;
//    for (int i = 0; i < vortex; ++i)
//    {
//        int x, y;
//        cin >> x >> y;
//        jokbo[x].push_back(y);
//        jokbo[y].push_back(x);
//
//    }
//    int result = solve(child, parent);
//    cout << result;
//    return 0;
//}