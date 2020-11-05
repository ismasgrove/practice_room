#include <iostream>
#include <unordered_map>
 
struct point
{
    uint32_t x, y;
};
 
int main()
{
    int n;
    uint32_t max_dist = 0;
    std::cin >> n;
    std::unordered_map<double, point> map;
    for (int i = 0; i < n; i++)
    {
        uint32_t x, y;
        std::cin >> x >> y;
        uint32_t dist = x + y;
        map.insert({dist, {x, y}});
        if (dist > max_dist)
            max_dist = dist;
    }
 
    std::cout << map.at(max_dist).x + map.at(max_dist).y;
 
    return 0;
}
