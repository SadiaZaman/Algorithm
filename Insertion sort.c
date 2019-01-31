#include <stdio.h>
int main ()
{
    int   ar[25] ,n, temp, i , j;

    printf("How many numbers element: ");
    scanf("%d",& n);

    printf("Enter %d elements: ", n);

     for(i=0 ; i<n ; i++)
        scanf("%d" ,& ar[i]);

    for(i=1;i<n;i++)
	{
		temp = ar[i];
		j=i-1;
		while(temp<ar[j] && j>=0)

        {
			ar[j+1] = ar[j];
			--j;
		}
		ar[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d ,",ar[i]);
    return 0;
}
