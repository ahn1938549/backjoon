//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//#include <climits>
//using namespace std;
//vector<vector<int>> graph;
//vector<bool> visit;
//int answer = INT_MAX;
//int n;
//void dfs(int start, int now, int cnt, int sum)
//{
//    if (cnt == n)
//    {
//        if (graph[now][start] == 0) return;
//
//        if (answer > sum + graph[now][start]) answer = sum + graph[now][start];
//        return;
//    }
//    for (int i = 0; i < n; ++i)
//    {
//        if (visit[i] == true || graph[now][i] == 0) continue;
//        visit[i] = 1;
//        dfs(start, i, cnt + 1, sum + graph[now][i]);
//        visit[i] = 0;
//    }
//
//}
//
//int solve(int n)
//{
//    for (int i = 0; i < graph[0].size(); ++i)
//    {
//        
//        visit[i] = true;
//        
//        dfs(i, i, 1, 0);
//        visit[i] = false;
//       
//    }
//    return answer;
//}
//
//
//
//int main(void) {
//
//    cin >> n;
//    graph.resize(n, vector<int>(n ));
//    visit.resize(n, false);
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> graph[i][j];
//        }
//
//    }
//    int result = solve(n);
//    cout << result;
//    return 0;
//}