#include <stdio.h>
int main ()
{
    int arr[100] ,maximum,maximum2 , n, i ;
    printf ("enter the number :  ");
    scanf ("%d" ,&n);

    printf ("Enter the integer",n);
            for (i=0 ; i<n ; i++)
                scanf ("%d",& arr [i]);

    maximum = arr[0] ;
    maximum2 = arr[0] ;

    for (i = 0; i < n; i++)
{
	if(arr[i] > maximum)
	{
		maximum2 = maximum;
		maximum = arr[i];
	}
	else if(arr[i] > maximum2 && arr[i] < maximum)
	{
		maximum2 = arr[i];
	}
}
        printf("2nd Maximum is %d . \n" ,maximum2 );

}


