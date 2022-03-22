#include <stdio.h>
#include <string>


int main()
{
	int nums[] = { 2,3,1,1,1,3,1,2,1,5 };
	int maxPos = 0, end = 0, step = 0, n = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < n - 1; i++)
	{
		if (maxPos >= i)
		{
			maxPos = std::max(maxPos, i + nums[i]);
			if (i == end) 
			{
				end = maxPos;
				step++;
			}
		}
	}
	printf("%d", step);
	return 0;
}