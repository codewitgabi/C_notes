#include <stdio.h>

enum Days
{
	Sun = 0,
	Mon = 1,
	Tue = 3,
	Wed = 4,
	Thu = 5,
	Fri = 6,
	Sat = 7
};

int main()
{
	enum Days today = Sat;

	if (today == Sat || today == Sun)
	{
		printf("It is a weekend!! You have to rest\n");
	}
	else 
	{
		printf("It is a worktime!!\n");
	}

	return 0;
}