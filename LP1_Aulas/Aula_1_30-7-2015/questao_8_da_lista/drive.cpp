#include <iostream>

int main()
{
	int v[] = {1,2,-3,3,-4,4,5};
	auto sz = sizeof(v) / sizeof(int);
	int slow = -1, fast = 0;

	for(int i(0); i < sz-1; /* Empty */)
	{
		if(v[i] > 0)
		{
			fast
			i++;
		}
		else
		{
			for(int j(i);i < sz; i++)
			{
				
			}
			auto aux = vet[i];
			vet[i] = vet[ i + 1];
			vet[i+1] = aux;
		}
	}
	return 0;
}


1,2,-3,4,5,-6-7,8

1,2,4,-3