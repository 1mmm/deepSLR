//��������
#include<iostream>
#include<cstdio>
#include <cstdlib> 
#include<cstring> 
#include <time.h> 
using namespace std;
int main(){
	int x;
    srand( (unsigned)time( NULL ) );
	freopen("data\\acctrainleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	} 
	freopen("data\\acctrainright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	} 
	freopen("data\\acctestleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\acctestright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	 
	freopen("data\\emgtrainleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=8;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	} 
		freopen("data\\emgtrainright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=8;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	} 
	freopen("data\\emgtestleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=8;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	} 
	freopen("data\\emgtestright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=8;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	} 
	
	freopen("data\\gyrtestleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\gyrtestright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\gyrtrainleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\gyrtrainright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\oltrainleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\oltrainright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\oltestleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\oltestright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=3;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}	
	freopen("data\\oritrainleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=4;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\oritrainright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=4;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\oritestleft.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=4;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}
	freopen("data\\oritestright.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%200+200;
		for (int k=1;k<=x;k++)
		{
			for (int j=1;j<=4;j++) printf("%d ",rand()%20);
			printf("\n");
		}
		printf("\n");
	}				
	freopen("data\\y_train.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%5+4;
		for (int k=1;k<=x;k++)
			printf("%d ",rand()%20);
		printf("\n");
	} 
	freopen("data\\y_test.txt","w",stdout);
	for (int i=1;i<=100;i++)
	{
		x=rand()%5+4;
		for (int k=1;k<=x;k++)
			printf("%d ",rand()%20);
		printf("\n");
	} 
	fclose(stdout);
}
