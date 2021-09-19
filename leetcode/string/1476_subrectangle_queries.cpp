#include <bits/stdc++.h>

using namespace std;

/* 
Implement the class SubrectangleQueries which receives a rows x cols rectangle as a matrix of integers in the constructor and supports two methods:

1. updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)

Updates all values with newValue in the subrectangle whose upper left coordinate is (row1,col1) and bottom right coordinate is (row2,col2).

2. getValue(int row, int col)

Returns the current value of the coordinate (row,col) from the rectangle.
*/

/* 
Initially solved by updating newValue in the matrix, then modified with optimized approach time complexity is 63ms and 14% faster
*/

class SubrectangleQueries {
vector<vector<int>> rect;
vector<vector<int>> updates;
vector<int> value;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rect = rectangle;
        value = {0,0,0,0,0};
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        value[0] = row1;
        value[1] = row2;
        value[2] = col1;
        value[3] = col2;
        value[4] = newValue;
        updates.push_back(value);
    }
    
    int getValue(int row, int col) {
        for(int i = updates.size()-1; i>=0;i--){
            if(row >= updates[i][0] && 
               row <= updates[i][1] && 
               col >= updates[i][2] && 
               col <= updates[i][3]){
                return updates[i][4];
            }
        }
        return rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */