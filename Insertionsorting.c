#include <stdio.h>
//Insertion Sorting
void sort(int numbers[], int n) 
{
    for (int i=1; i<n; i++) 
    {
        int x = numbers[i];
        int j = i-1;
        while (j >= 0 && numbers[j] > x) 
        {
            numbers[j + 1] = numbers[j];
            j = j-1;
        }
        numbers[j+1] = x;
    }
}
//   median 
float sortAndFindMedian(int numbers[], int n)
{
    sort(numbers, n);
    // n is even, median is the average of middle values
    if (n % 2 == 0) {
        return (numbers[n/2 - 1] + numbers[n/2])/2;
    }
    // If n is odd, median= middle value
    else {
        return numbers[n/2];
    }
}

int main() 
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter the elements: ");
    for (int i = 0; i<n ; i++) 
    {
        scanf("%d", &numbers[i]);
    }
    float median = sortAndFindMedian(numbers, n);
    printf("The median of the given numbers is: %.2f\n", median);
    return 0;
}
