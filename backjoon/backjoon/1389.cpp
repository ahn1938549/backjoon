//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//int n = 0, m = 0, k = 0;
//
//vector<vector<int>> vortex;
//vector<bool> visit;
//vector<int> away;
//int min_count = 2000000000;
//int number;
//void solve(void)
//{
//    
//    for (int i = 1; i <= n; ++i)
//    {
//        visit.assign(n + 1, false);
//        int count = 0;
//        queue<int> baceon;
//        baceon.push(i);
//        visit[i] = true;
//        away[i] = 0;
//        while (!baceon.empty())
//        {
//            int node = baceon.front();
//            int far_away = away[node];
//            baceon.pop();
//            
//            for (int j = 0; j < vortex[node].size(); j++)
//            {
//                if (!visit[vortex[node][j]] )
//                {
//                    visit[vortex[node][j]] = true;
//                    away[vortex[node][j]] = far_away + 1;
//                    //count += visit[vortex[node][j]];
//                    baceon.push(vortex[node][j]);
//                    
//                }
//                
//            }
//            
//        }
//
//        for (int j = 1; j <= n; ++j) { // BFS 후 visit 배열의 값을 count에 누적
//            count += away[j];
//        }
//        
//        if (count < min_count)
//        {
//            min_count = count;
//            number = i;
//            
//
//        }
//        /*cout << "number : " << i << " \t count" << count << endl;*/
//    }
//    cout << number;
//}
//
//
//
//int main(void) {
//    cin >> n >> m ;
//    vortex.resize(n + 1, vector<int>(0));
//    visit.resize(n + 1, false);
//    away.resize(n + 1, 0);
//    for (int i = 0; i < m; ++i)
//    {
//        int a,b;
//        cin >> a >> b;
//        vortex[a].push_back(b);
//        vortex[b].push_back(a);
//    }
//    solve();
//    return 0;
//}