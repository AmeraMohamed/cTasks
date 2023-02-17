#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int sum=0;
    float avg;

    for (int i=0;i<5;i++){
        printf("%d\n", arr[i]);
        sum+=arr[i];
    }
    printf("sumOfArrayElement:%d\n",sum);
    fflush(stdout);
    avg=sum/5;
    printf("average = %f\n",avg);

}