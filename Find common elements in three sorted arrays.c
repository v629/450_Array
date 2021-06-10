#include <stdio.h>

/* Prints common elements of three sorted array */
void printCommonElements(int array1[], int array2[], int array3[], int s1, int s2, int s3) {
    int i, j, k;
    /* Initialize i, j and k to point to the smallest
     element of array1, array2, and array3 respectively */
    i = j = k = 0;
    /* Iterate until any one array ends */
    while (i < s1 && j < s2 && k < s3) {
        /* Compare current element of all three arrays */
        if(array1[i] == array2[j] && array2[j] == array3[k]) {
     /* found one common element */
            printf("%d ", array1[i]);
     /* Increment all three pointers */
            i++;
            j++;
            k++;
 } else if ((array1[i] <= array2[j]) && (array1[i] <= array3[k])){
     /* array1[i] is smallest, increment i*/
            i++;
        } else if ((array2[j] <= array3[k]) && (array2[j] <= array1[i])){
            /* array2[j] is smallest, increment j*/
            j++;
        } else {
            /* array3[k] is smallest, increment k*/
            k++;
        }
    }
}

int main() {
    int array1[7] = {1, 5, 10, 15, 20, 25, 30};
    int array2[8] = {3, 4, 5, 10, 15, 25, 30, 38};
    int array3[9] = {0, 2, 5, 13, 15, 16, 17, 25, 32};

    printCommonElements(array1, array2, array3, 7, 8, 9);

    return 0;
}
