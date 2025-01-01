//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//vector<int> jokbo[1001];
//vector<bool> visit;
//
//
//int solve(int node)
//{
//    int cnt = 0;
//    for (int i = 1; i <= node; ++i)
//    {
//        if (visit[i]) continue;
//
//
//        queue<int> temp;
//        temp.push(i);
//        visit[i] = true;
//        while (!temp.empty())
//        {
//
//            int node = temp.front();
//            temp.pop();
//
//            for (int j = 0; j < jokbo[node].size(); ++j)
//            {
//                if (visit[jokbo[node][j]]) continue;
//                visit[jokbo[node][j]] = true;
//                temp.push(jokbo[node][j]);
//
//            }
//        }
//        cnt++;
//
//    }
//    return cnt;
//
//}
//
//
//
//int main(void) {
//    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//    int node, line;
//    cin >> node >> line;
//    visit.resize(node + 1, false);
//
//    for (int i = 0; i < line; ++i)
//    {
//        int x, y;
//        cin >> x >> y;
//        jokbo[x].push_back(y);
//        jokbo[y].push_back(x);
//
//    }
//    int result = solve(node);
//    cout << result;
//    return 0;
//}