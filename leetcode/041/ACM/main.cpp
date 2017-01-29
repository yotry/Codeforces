//
//  main.cpp
//  ACM
//
//  Created by 林伟池 on 16/9/4.
//  Copyright © 2016年 林伟池. All rights reserved.
/************************** 题解 **********************
 题目链接：https://leetcode.com/problems/first-missing-positive/
 题目大意：
 给出一个数组，找到数组中没有的最小正整数。
 example,
 Given [1,2,0] return 3,
 and [3,4,-1,1] return 2.
 要求，O(N)的时间和O(1)的空间复杂度；
 
 题目解析：
 先不考虑题目要求的时间、空间复杂度；
 暴力的做法有两个：
 1、时间最快，空间不限：数组a[N]，然后出现数字k就a[k]=1标志出现；
 2、时间、空间都不限：排序，遍历一遍数组；
 
 回到题目的要求，时间复杂度要求是O(N)，可以肯定是会用到方法1；
 现在要求O(1)的空间复杂度，那么就必须利用上给出的数组。
 遍历数组，如果数字k小于n，那么a[k-1]=k-1;
 然后遍历一遍，a[i] != i的就行是解。
 
 复杂度解析：
 
 
 
 
 其他解法：
 
 
 
 ************************* 题解 ***********************/
#include<cstdio>
#include<cmath>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<deque>
#include<string>
#include<utility>
#include<sstream>
#include<cstring>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;
#define LYTEST  1

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ret = 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (i <= nums.size() && i > 0) {

            }
            else {
                nums[i] = -1;
            }
        }
        return ret;
    }
};


int main(int argc, const char * argv[]) {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    
    
    return 0;
}
