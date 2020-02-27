#include<stdlib.h> 
#include<stdio.h> 
#include<iostream>
#include <fstream>
using namespace std;

void RandomArray(int(&array)[30000], int size)
{
    for (int i = 0; i < size; i++) array[i] = 1 + rand() % 100000;
}


int BruteForce(int *A,int n)
{
	int max_sum = A[0];
	int sum;
	for(int i=0;i<n;i++)
	{
		sum = 0;
		for(int j=i;j<n;j++)
		{
			sum+=A[j];
			if(sum>max_sum)
				max_sum =  sum;
		}
	}
	return max_sum;
}

int main()
{
    int A[30000];
    int n = sizeof(A)/sizeof(A[0]);
    RandomArray(A, 30000);
    
    cout<<BruteForce(A,n);


    return 0;
}
