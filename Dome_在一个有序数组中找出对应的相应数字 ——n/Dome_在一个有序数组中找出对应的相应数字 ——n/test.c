//���ö��ַ�����

//   arry[]   ={1,2,3,4,5,6,7,8,9,10};  �ҵ���7 �� 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arry[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arry) / sizeof(arry[0]);
	//��ʼ�� ���±�   ���±�  �м��
	int low = 0;
	int high = sz - 1;
	int mind;
	int k = 7;//Ѱ��Ŀ��

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
			printf("�ҵ���%d �����±�Ϊ%d\n", k, mind);
			break;
		}

	}
	printf("Done!\n");
	system("pause");
	return 0;
	
	

}