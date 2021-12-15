/*
 * main.cpp
 *
 *  Created on: 2021年11月10日
 *      Author: cdkf04
 */

#include"method.h"
int main(void)
{

	int row,column;
	float transverse[] = {3,3.2,3.4,3.6,3.8,4.0,
	4.2,4.4,4.6,4.8,5.0};
	float vertical[] = {0,3.5,3.4,3.3,3.2,3.1,3.0,
	2.9,2.8,2.7,2.6,2.5};
//	int number;
//	int a[3];
//	cout<<"请输入起止，结束，取值间隔，请用空格隔开："<<endl;
	cout<<"请输入行数："<<endl;
	cin>>row;
//	cout<<a[2]<<endl;
	cout<<"请输入列数："<<endl;
	cin>>column;
	float arr[row][column];
//	number = random();
//	cout<<number<<" ";

	srand((unsigned int)time(NULL)); // @suppress("Function cannot be resolved")

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{

			for(int n= 0;n<1;n++)
			{
				int num = rand()%10+1;//1-10随机数
				num>5?arr[i][j] = 1:arr[i][j] = 0;

				arr[0][j] = transverse[j];
				arr[i][column-1] = vertical[i];
				cout<<arr[i][j]<<"	";

				num = 0;
			}

		}
		cout<<endl;
	}

}


