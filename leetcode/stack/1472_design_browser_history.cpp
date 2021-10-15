#include <bits/stdc++.h>

using namespace std;

/* 
You have a browser of one tab where you start on the homepage and you can visit another url, get back in the history number of steps or move forward in the history number of steps.

Implement the BrowserHistory class:

    BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
    void visit(string url) Visits url from the current page. It clears up all the forward history.
    string back(int steps) Move steps back in history. If you can only return x steps in the history and steps > x, you will return only x steps. Return the current url after moving back in history at most steps.
    string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and steps > x, you will forward only x steps. Return the current url after forwarding in history at most steps.
*/

/* 
Successfully solved the problem using two stacks but it's only 5% faster, need to optimize the solution.
*/

class BrowserHistory {
    stack<string> bh, fh;
public:
    BrowserHistory(string homepage) {
        bh.push(homepage);
    }
    
    void visit(string url) {
        bh.push(url);
        while(!fh.empty()){
            fh.pop();
        }
    }
    
    string back(int steps) {
        int i = 0;
        while(bh.size() != 1 && i++ < steps){
            fh.push(bh.top());
            bh.pop();
        }
        return bh.top();
    }
    
    string forward(int steps) {
        int i = 0;
        while(!fh.empty() && i++ < steps){
            bh.push(fh.top());
            fh.pop();
        }
        return bh.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */