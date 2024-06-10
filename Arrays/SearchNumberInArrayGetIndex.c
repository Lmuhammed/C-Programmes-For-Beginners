#include<stdio.h>
#include<stdbool.h>

int main(void){
    int num[5]={13,5,66,663,88};
    int i,target,idexOfTarget,found;

    printf("Enter a number to get it index in array if it found : \n");
    scanf("%d",&target);
    
    for(i=0; i < sizeof(num)/sizeof(num[0]); i++){ //size of all array 'elemets / size one array to get array elements number dynammically
        if(num[i] == target){
            idexOfTarget=i;
            found=1;
            break;

        }
        }

        if(found == 1){
            printf("The number %d found in array , index : %d \n",target,idexOfTarget);
        }else{
            printf("The number %d not found in  array \n",target);
        }
    
    
    
    return 0;
}   