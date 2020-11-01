#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

int main()
{	
	int sum_of_squares=0, square_of_sum=0;
	std::vector<int> hundred(100);
	for (int i=1; i<101; i++)
		hundred.push_back(i);
	std::for_each(
		hundred.begin(),
		hundred.end(),
		[&sum_of_squares, &square_of_sum](const int &n){
			sum_of_squares+=std::pow(n, 2);
			square_of_sum+=n;
		}
		);
	square_of_sum*=square_of_sum;
	std::cout << std::abs(sum_of_squares-square_of_sum) <<std::endl;
	std::cout << sum_of_squares << std::endl << square_of_sum << std::endl; 


}

