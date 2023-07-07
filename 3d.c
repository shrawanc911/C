// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {

// 	// This pointer will hold the
// 	// base address of the block created
// 	int* ptr;
// 	int n, i;

// 	// Get the number of elements for the array
// 	printf("Enter number of elements:");
// 	scanf("%d",&n);
// 	// printf("Entered number of elements: %d\n", n);

// 	// Dynamically allocate memory using malloc()
// 	ptr = (int*)malloc(n * sizeof(int));

// 	// Check if the memory has been successfully
// 	// allocated by malloc or not
// 	if (ptr == NULL) {
// 		printf("Memory not allocated.\n");
// 		exit(0);
// 	}
// 	else {

// 		// Memory has been successfully allocated
// 		printf("Memory successfully allocated using malloc.\n");

// 		// Get the elements of the array
// 		for (i = 0; i < n; ++i) {
// 			ptr[i] = i + 1;
// 		}

// 		// Print the elements of the array
// 		printf("The elements of the array are: ");
// 		for (i = 0; i < n; ++i) {
// 			printf("%d, ", ptr[i]);
// 		}
// 	}

// 	return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	// n = 5;
	printf("Enter number of elements: ");
    scanf("%d",&n);

	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(n, sizeof(int));

	// Check if the memory has been successfully
	// allocated by calloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using calloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&ptr[i]);
        }
        for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
        ptr= realloc(ptr, 10*sizeof(int));
        printf("\nMemory successfully reallocated\n");
        for (i = 0; i < 10; ++i) {
			printf("%d, ", ptr[i]);
		}
        
	}

	return 0;
}

