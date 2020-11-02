class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        if (x_center >= x1 && x_center <= x2 && y_center <= y2 && y_center >= y1)
           return true;
            
        for (int i=x1; i<=x2; i++) {
            if (circle_eqn(x_center, y_center, radius, {i, y1}))
                return true;
            if (circle_eqn(x_center, y_center, radius, {i, y2}))
                return true;
        }
        for (int i=y1; i<=y2; i++) {
            if (circle_eqn(x_center, y_center, radius, {x1, i}))
                return true;
            if (circle_eqn(x_center, y_center, radius, {x2, i}))
                return true;
        }
        
        return false;
        
    }
private:
    bool circle_eqn(int x_center, int y_center, int radius, vector<int> points)
    {
        return pow(points[0]-x_center, 2) + pow(points[1]-y_center, 2) <= pow(radius, 2);
    }
};