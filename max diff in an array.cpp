//maximum difference in an array
#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a >= b)? a : b;
}

int min(int a, int b)
{
    return (a <= b)? a : b;
}

//naive solution
int max_diff_in_array(int a[], int n)
{
    int i, j, res;
    res = a[1] - a[0];
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
            res = max(res, a[j] - a[i]);
    }
    return res;
}

//EFFICIENT SOLUTION - O(n)
//take a[0] as the min value. res will store the max difference
//traverse through the array. keep track of the min element we have come
//across so far. subtract that from a[j]. if this is > res, update res.
int max_diff_in_array(int a[], int n)
{
    int res = a[1] - a[0];
    int min_val = a[0];
    for(int j = 1; j < n; j++)
    {
        res = max(res, a[j] - min_val);
        min_val = min(min_val, a[j]);
    }
    return res;
}

int main() {
    
    int arr[10] = {2, 3, 10, 6, 4, 8, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Maximum difference in the array: "<<max_diff_in_array(arr, size);
	return 0;
}
