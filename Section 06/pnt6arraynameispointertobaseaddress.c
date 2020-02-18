//   WAP that illustrates the fact that "An array name is pointer to base address."

#include <stdio.h>
int main()
{
	int arr[]={100,200,900};
	printf("Base address = %u\n",arr);
	printf("Address of second element arr[1] = %u\n",arr+1);
	printf("Address of third element arr[2] = %u\n",arr+2);
	printf("Value of the first element = %d\n",*arr);
    printf("Value of the second element = %d\n",*(arr+1));
    printf("Value of the third element = %d\n",*(arr+2));
}
