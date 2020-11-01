#include <iostream>

int main()
{
	for (int i=0; i<1000/3; i++){
		for (int j=i; j<1000/2; j++){
			for (int k=j; k<1000; k++){
				if ((k>j) && (j > i))
					if (i+j+k==1000) if (i*i + j*j == k*k)  {std::cout << i << " " << j << " " << k << std::endl; std::cout << i*j*k << std::endl; break;} else { continue;}
			}
		}
	}



return 0;
}
