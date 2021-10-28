//利用二分法查找

//   arry[]   ={1,2,3,4,5,6,7,8,9,10};  找等于7 的 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arry[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arry) / sizeof(arry[0]);
	//初始化 左下标   右下标  中间的
	int low = 0;
	int high = sz - 1;
	int mind;
	int k = 7;//寻找目标

	while (low<=high)

	{
		mind = (low + high) / 2;
		if (arry[mind]>k)
		{
			high = mind - 1;
		}
		else if (arry[mind] < k)
		{
			low = mind + 1;
		}
		else
		{
			printf("找到了%d 并且下标为%d\n", k, mind);
			break;
		}

	}
	printf("Done!\n");
	system("pause");
	return 0;
	
	

}