//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//
//
//int solve(int number, int times)
//{
//    vector<int> numbers;
//    
//    vector<int> digits = {1, 10, 100, 1000};
//    if (number > 1000)
//    {
//        numbers.push_back(number / digits[3]);
//        numbers.push_back(number % 1000 / digits[2]);
//        numbers.push_back(number % 1000 % 100 / digits[1]);
//        numbers.push_back(number % 1000 % 100 % 10 / digits[0]);
//        //int digit_4 = number / digits[3];
//        //int digit_3 = number % 1000 / digits[2];
//        //int digit_2 = number % 1000 % 100 / digits[1];
//        //int digit_1 = number % 1000 % 100 % 10 / digits[0];
//
//        
//    }
//    else if (number > 100)
//    {
//        numbers.push_back(number / digits[2]);
//        numbers.push_back(number % 100 / digits[1]);
//        numbers.push_back(number % 100 % 10 / digits[0]);
//    }
//    else if (number > 10)
//    {
//        numbers.push_back(number  / digits[1]);
//        numbers.push_back(number % 10 / digits[0]);
//    }
//    else // number < 10
//
//    {
//        numbers.push_back(number);
//    }
//
//    for (int i = 0; i < numbers.size(); ++i)
//        {
//
//            for (int j = 0; j < times; ++j)
//            {
//                numbers[i] *= numbers[i];
//            }
//        }
//    int sum = 0;
//    for (int i = 0; i < numbers.size(); ++i)
//    {
//        sum += numbers[i];
//    }
//    numbers.clear();
//    numbers.push_back(sum);
//
//    numbers
//
//}
//
//
//
//int main(void) {
//    int number, times;
//    cin >> number >> times;
//    cout << solve(number, times);
//
//
//    return 0;
//}