#include <stdio.h>

int main()
{
	const int DEPTH = 10;
	int cd = 0;

	int nums[3] = {0,1,0};

	while (cd <= DEPTH)
	{
		nums[2] = nums[0] + nums[1];
		nums[0] = nums[1];
		nums[1] = nums[2];

		cd++;
	}
}
