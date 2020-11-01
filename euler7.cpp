#include <iostream>
#include <vector>

bool is_prime(std::vector<int> &primes_so_far, int n)
{
	for (auto &prime : primes_so_far)
	{
		if (n % prime == 0)
			return false;
	}
	primes_so_far.push_back(n);
	return true;
}


int main()
{
	std::vector<int>primes = {2};
	int i=3;
	while (primes.size()<=10001)
		is_prime(primes, i++);

	std::cout<<primes.at(10001 - 1 /*starting at index 0*/) << std::endl;

	return 0;	
}
