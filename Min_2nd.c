#include <stdio.h>
int main ()
{
    int arr[100] ,minimum,minimum2 , n, i ;
    printf ("enter the number :  ");
    scanf ("%d" ,&n);

    printf ("Enter the integer",n);
            for (i=0 ; i<n ; i++)
                scanf ("%d",& arr [i]);

    minimum= arr[0] ;
    minimum2 = arr[0] ;

    for (i = 0; i < n; i++)
{
	if(arr[i] < minimum)
	{
		minimum2 = minimum;
		minimum = arr[i];
	}
	else if(arr[i] < minimum2 && arr[i] > minimum)
	{
		minimum2 = arr[i];
		 location = i+1;
	}
}
        printf("2nd minimum is %d . \n" ,minimum2 );

}


