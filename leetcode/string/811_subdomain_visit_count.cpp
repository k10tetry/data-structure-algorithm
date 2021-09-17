#include <bits/stdc++.h>

using namespace std;

/* 
A website domain "discuss.leetcode.com" consists of various subdomains. At the top level, we have "com", at the next level, we have "leetcode.com" and at the lowest level, "discuss.leetcode.com". When we visit a domain like "discuss.leetcode.com", we will also visit the parent domains "leetcode.com" and "com" implicitly.

A count-paired domain is a domain that has one of the two formats "rep d1.d2.d3" or "rep d1.d2" where rep is the number of visits to the domain and d1.d2.d3 is the domain itself.

For example, "9001 discuss.leetcode.com" is a count-paired domain that indicates that discuss.leetcode.com was visited 9001 times.

Given an array of count-paired domains cpdomains, return an array of the count-paired domains of each subdomain in the input. You may return the answer in any order.
*/

/* 
Solved using map to save the count value against the domain, time complexity is 12ms and 88% faster
*/

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> map;
        
        for(string cp : cpdomains){
            int index = cp.find(" ");
            int number = stoi(cp.substr(0,index));
            string domain = cp.substr(index + 1);
            for(int i = 0;i<domain.length();i++){
                if(domain[i] == '.'){
                    map[domain.substr(i+1)] += number;
                }
            }
            map[domain] += number;
        }
        
        vector<string> data;
        for(auto itr : map){
            data.push_back(to_string(itr.second) + " " + itr.first);
        }
        
        return data;
    }
};