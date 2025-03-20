   #include<stdio.h>
   int main(){
    int n, choice,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter 1 for Ascending order or 2 for Descending order: ");
    scanf("%d", &choice);

    for (i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if ((choice == 1 && arr[i] > arr[j]) || (choice == 2 && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //16010124155
    printf("Sorted array: \n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
   }
