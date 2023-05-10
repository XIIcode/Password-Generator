#include <stdio.h>
#include <stdlib.h>
void get_password()
{
    char* array1;
    char* array2;
    array1 = (char*)malloc(sizeof(char)*10);
    array2 = (char*)malloc(sizeof(char)*10);
    //first encryption.
    for(int i = 0 ; i < 10 ; i++)
    {
        *(array1 + i) = rand() %(rand()%129+97);
    }
    // printf("Password is : %s\n", array1);
    //for getting the dynamically generated for encryption 1
    char dynamic [8];
    for(int i = 0 ; i <6 ; i++)
    {
        dynamic[i] = *(array1 + (i + 12));
    }
    // printf("Dynamic Password is : %s\n", dynamic);
    //Array 2.
    for(int i = 0 ; i < 10 ; i++)
    {
        *(array2 + i) = rand() %(rand()%129+97);
    }
    char dynamic2 [9];
    for(int i = 0 ; i <6 ; i++)
    {
        dynamic2[i] = *(array2 + (i + 18));
    }
    printf("Strong Password is : %p%s",array2,dynamic2);
    printf("%s",dynamic);
    printf("%d",(int*)array1);
    free(array1);
    free(array2); 
}