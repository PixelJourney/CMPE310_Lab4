#include <stdio.h>
extern int sum_array(int *array, int count);

int main () {

    int array [60];
    int i;
    int sum;
    int count;
    int s;

    FILE* file;
    file = fopen("data.txt", "r");
    
    fscanf(file, "%d",&count);

    for (i=0; i<count;i++){
        fscanf(file,"%d",&array[i]);
    }
    s = sum_array(array,count);
    printf("%d",s);
    fclose(file);

    return 0;
}