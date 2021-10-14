#include <bits/stdc++.h>

using namespace std;

/* 
There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nth friend brings you to the 1st friend.

The rules of the game are as follows:

    Start at the 1st friend.
    Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
    The last friend you counted leaves the circle and loses the game.
    If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
    Else, the last friend in the circle wins the game.

Given the number of friends, n, and an integer k, return the winner of the game.
*/

/* 
Not a 100% perfect solution but fortunately it was accepted with 68ms time and 16% faster.
*/

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> game;
        
        for(int i = 1; i<=n; i++){
            game.push(i);
        }
        
        int count = 0;
        while(game.size() != 1){
            if(++count == k){
                 count = 0;
             }else{
                 game.push(game.front());
             }
             game.pop();
        }
        
        return game.front();
    }
};