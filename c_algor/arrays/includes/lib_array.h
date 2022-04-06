#ifndef	ARRAY_H_
#define	ARRAY_H_
#include <unistd.h>
/* SEARCH */
int		binarysearch(int arr[], int size, int value);
int		subarray_max(int *arr, size_t size);

/* MANIPULATION */
void	reverse(int *arr, int from, int to);
void	rotate(int *arr, size_t size, int n);
#endif




