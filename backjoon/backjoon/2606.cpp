//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//vector<vector<int>> jokbo;
//vector<bool> visit;
//
//// DFS 
//// ------------------
//
//int solve(int node)
//{
//    if (jokbo[node].size() == 0)
//    {
//        return 0;
//    }
//    visit[node] = true;
//    int cnt = 0;
//
//    for (int i = 0; i < jokbo[node].size(); ++i)
//    {
//        int next = jokbo[node][i];
//        if (!visit[next])
//        {
//            cnt++;
//            cnt += solve(next);
//            
//            }
//        }
//        
//    return cnt;
//}
//
//
//
//int main(void) {
//    int n;
//    cin >> n;
//    jokbo.resize(n + 1);
//    visit.resize(n + 1, false);
//    int vortex;
//    cin >> vortex;
//
//    for (int i = 0; i < vortex; ++i)
//    {
//        int x, y;
//        cin >> x >> y;
//        jokbo[x].push_back(y);
//        jokbo[y].push_back(x);
//
//    }
//    int result = solve(1);
//    cout << result;
//    return 0;
//}