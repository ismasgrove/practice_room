#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

//using 'sieve of eratothenes'

int main()
{
	const uint32_t two_million = 10;
	std::vector<bool> primes(two_million, true);
	size_t sum = (std::pow(two_million, 2) + two_million) / 2;
	for (size_t p=2; p*p<=two_million; p++)
	{	
		if (primes[p] == true)
		{
			for (size_t i = p*p; i<=two_million; i+=p)
			{
				if (primes[i] == true){
					primes[i]=false;
					sum-=i;
				}
			}
		}
	}
	
	std::cout << sum - 1 /*one isn't a prime*/ << std::endl;
}
