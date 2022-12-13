#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
    ptr = fopen("message.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }

    int arr[22];
    int num = 0;
 
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        arr[num] = ch;
        num++;
        printf("%c", ch);
    }
    fclose(ptr);


    for(int i = 0; i < 22; i++)
    {
        printf("%d", arr[i]);
    }


    return 0;
}