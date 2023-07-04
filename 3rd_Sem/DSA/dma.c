#include<stdio.h>
#include<stdlib.h>
//C program to illustrate allocation & reallocation of
//memory dynamically.
int main()
{
int* ptr;
int n, i,a,b;
printf("Enter number of elements:\n");
scanf("%d",&n);
ptr = (int*)malloc(n*sizeof(int));
if (ptr == NULL) {
printf("Memory not allocated.\n");
exit(0);
}
else {
		printf("Memory successfully allocated using malloc.\n");
		printf("Enter the elements:");
	for (i = 0; i < n; ++i) {
	scanf("%d",&a);
	ptr[i] = a;
	}
	printf("\nThe elements of the array are: ");
	for (i = 0; i < n; ++i) {
	printf("%d\t ", ptr[i]);
	}
	printf("\nEnter size to be reallocated:");
	scanf("%d",&n);
	printf("\n\nEnter the new size of the array: %d\n", n);
	ptr = realloc(ptr, n * sizeof(int));
	printf("Memory successfully re-allocated using realloc.\n");
	printf("Enter new elements:");
	for (i = a; i < n; ++i) {
		scanf("%d",&b);
		ptr[i] = b;
	}
	printf("The elements of the array are: ");
	for (i = 0; i < n; ++i) {
		printf("%d\t ", ptr[i]);
	}
	free(ptr);
}

return 0;
}
