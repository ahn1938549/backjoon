//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//vector<int> graph;
//vector<bool> visited;
//// --------------------------------
//// This is recursive function //
//// 
//// 
//// 
////void bfs(int i)
////{
////    visited[i] = true;
////    int next = graph[i];
////    
////    if (!visited[next])
////        bfs(next);
////}
////
////int solve(void)
////{
////    
////    visited.assign(graph.size(), false);
////    int count = 0;
////    for (int i = 1; i < graph.size(); ++i)
////    {
////        if (!visited[i])
////        {
////            bfs(i);
////            count++;
////        }
////        
////    }
////    return count;
////}
//// ---------------------------------
//
//
//int solve(void)
//{
//    
//    visited.assign(graph.size(), false);
//    int count = 0;
//    stack<int> temp;
//
//    for (int i = 1; i < graph.size(); ++i) {
//        if (visited[i])
//        {
//            continue;
//        }
//        visited[i] = true;
//        temp.push(graph[i]);
//        while (!temp.empty())
//        {
//            int next = temp.top();
//            temp.pop();
//            if (!visited[next])
//            {
//                visited[next] = true;
//                temp.push(graph[next]);
//            }
//
//
//        }
//        count++;
//    }
//    return count;
//}
//
//
//
//int main(void) {
//    int times;
//    cin >> times;
//    
//    
//    for (int i = 0; i < times; ++i)
//    {
//        int n;
//        cin >> n;
//        graph.clear();
//        graph.push_back(0);
//        for (int j = 0; j < n; ++j)
//        {
//            int index;
//            cin >> index;
//            graph.push_back(index);
//        }
//        int answer = solve();
//        cout << answer << endl;
//    }
//    
//
//    return 0;
//}