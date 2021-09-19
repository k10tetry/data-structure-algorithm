#include <bits/stdc++.h>

using namespace std;

/* 
On an 8x8 chessboard, there can be multiple Black Queens and one White King.

Given an array of integer coordinates queens that represents the positions of the Black Queens, and a pair of coordinates king that represent the position of the White King, return the coordinates of all the queens (in any order) that can attack the King.
*/

/* 
Find nearest queens to the king in all the directions, time complexity is 7ms and 45% faster
*/

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> chess(8, vector<int>(8,0));
        vector<vector<int>> ans;
        // plot queens in chess
        for(vector<int> q : queens){
            chess[q[0]][q[1]]++;
        }
        
        // find nearest queen in row
        int i = king[1],j = king[1]; // get column position of king
        while(--i>=0 || ++j<8){
            if(i>=0){
               if(chess[king[0]][i] == 1){
                   ans.push_back({king[0],i});
                   i = 0;
               }
            }
            if(j<8){
               if(chess[king[0]][j] == 1){
                   ans.push_back({king[0],j});
                   j = 8;
               }
            }
        }
        
        // find nearest queen in column
        i = king[0];j = king[0]; // get row position of king
        while(--i>=0 || ++j<8){
            if(i>=0){
               if(chess[i][king[1]] == 1){
                   ans.push_back({i,king[1]});
                   i = 0;
               }
            }
            if(j<8){
               if(chess[j][king[1]] == 1){
                   ans.push_back({j,king[1]});
                   j = 8;
               }
            }
        }
        
        // find nearest queen main diagonal top
        i = king[0]; j = king[1];
        while(--i>= 0 && --j>=0){
            if(chess[i][j] == 1){
                ans.push_back({i,j});
                break;
            }
        }
        
        // find nearest queen main diagonal bottom
        i = king[0]; j = king[1];
        while(++i< 8 && ++j<8){
            if(chess[i][j] == 1){
                ans.push_back({i,j});
                break;
            }
        }
        
        // find nearest queen anti diagonal top
        i = king[0]; j = king[1];
        while(--i>= 0 && ++j<8){
            if(chess[i][j] == 1){
                ans.push_back({i,j});
                break;
            }
        }
        
        // find nearest queen anti diagonal bottom
        i = king[0]; j = king[1];
        while(++i< 8 && --j>=0){
            if(chess[i][j] == 1){
                ans.push_back({i,j});
                break;
            }
        }
        
        return ans;
    }
};