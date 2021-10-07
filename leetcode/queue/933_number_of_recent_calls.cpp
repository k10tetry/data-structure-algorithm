#include <bits/stdc++.h>

using namespace std;

/* 
You have a RecentCounter class which counts the number of recent requests within a certain time frame.

Implement the RecentCounter class:

    RecentCounter() Initializes the counter with zero recent requests.
    int ping(int t) Adds a new request at time t, where t represents some time in milliseconds, and returns the number of requests that has happened in the past 3000 milliseconds (including the new request). Specifically, return the number of requests that have happened in the inclusive range [t - 3000, t].

It is guaranteed that every call to ping uses a strictly larger value of t than the previous call.
*/

/* 
Initially I tried to iterate over every value of the queue result in TLE, then got idea to pop the elements which are not in range result success, but after checking the discussion section I found awesome solution..
*/

class RecentCounter {
    queue<int> count;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        count.push(t);
        while(count.front() < t-3000){
            count.pop();
        }
        return count.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */