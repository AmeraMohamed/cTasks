#include<stdio.h>
#include<string.h>
int main(){
    char arr1[50];
    char arr2[50];
    char arr3[100];
    printf("enter the first string:");
    scanf("%s", arr1); 
    printf("enter the second string:");
    scanf("%s", arr2); 
    strcat(arr3,arr1);
    strcat(arr3,arr2);
    int len = strcspn(arr3, "\n");  
    arr3[len] = '\0';         
    printf(" conncatination is: %s\r\n", arr3);
    
}