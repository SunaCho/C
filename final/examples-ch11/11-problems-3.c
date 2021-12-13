#include <stdio.h>

void show(int arr[], int size) {
    printf("[ ");
    for (int i=0; i<size; i++)
        printf("%d ",arr[i]);
    printf("]\n");
 }

int search(int arr[], int size, int key) {
    int i;
    for (i=0;i<size;i++) {
        if (key==arr[i])
            return i;
    }
    return -1;
 }

int main(void) {
    int key, index, size;
    int trial= 1;
    int arr[]={50,10,20,40,15};

    size=sizeof(arr)/sizeof(int);
    show(arr,size);
    while(1) {
        scanf("%d", &key);
        index=search(arr,size,key);
        if (index==-1) {
            printf("실패\n");
            trial+=1;

        }

        else {
            printf("%d index\n", index);
            printf("%d회", trial);
            break;
        }
    }
    return 0;
}