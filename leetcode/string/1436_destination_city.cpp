#include <bits/stdc++.h>

using namespace std;

/* 
You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.
*/

/* 
Solution is to find the destination city which is not the departure city, optimized the old submission time complexity reduced to 8ms and 96% faster
*/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for(int i = 0; i < paths.size(); i++){
            bool found = false; 
            for(int j = 0; j < paths.size() ; j++){
                if(paths[i][1] == paths[j][0]){
                    found = true;
                }
            }
            if(found == false){
                return paths[i][1];
            }
        }
        return paths[0][1];
    }
};