#include <stack>
#include <vector>

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        std::stack<int> x_stack, y_stack;
        for (auto& c: coordinates) {
            x_stack.push(c.front());
            y_stack.push(c.back());
        }
        int x_next, y_next, x_prev, y_prev;
        x_next = x_stack.top(); x_stack.pop();
        x_prev = x_stack.top(); x_stack.pop();
        y_next = y_stack.top(); y_stack.pop();
        y_prev = y_stack.top(); y_stack.pop();
        
        bool alt=true, inf=false;
        double slope, prev_slope=0;
        if (x_next-x_prev != 0) {
            prev_slope = (y_next-y_prev)/(x_next-x_prev);
            inf=true;
        }
        while (!x_stack.empty()) {
            if (alt==true){
                x_next = x_stack.top(); x_stack.pop();
                y_next = y_stack.top(); y_stack.pop();
                if (x_prev-x_next == 0)
                    if (inf!=true)
                        return false;
                else continue;
                slope = (y_prev-y_next)/(x_prev-x_next);
                alt = false;
            }
            if (alt==false) {
                if (x_next-x_prev == 0)
                    if (inf!=true)
                        return false;
                else continue;
                slope = (y_next-y_prev)/(x_next-x_prev);
                alt = true;
            }
            if (slope != prev_slope)
                return false;
            if (alt==false) {
            x_prev = x_stack.top(); x_stack.pop();
            y_prev = y_stack.top(); y_stack.pop();
            }
        }
        
        return true;
    }
};