#include <stdio.h>
#include <stdlib.h>


int minelemanbul(int dizi[], int n) {
	
	int min;//en kucuk eleman
	int i;
	
	min=dizi[0];
	
	for(i=0;i<n;i++)
	{
		if(dizi[i]<min)
		{
			min=dizi[i];
		}
		
	}
	
	
	return min;
}
