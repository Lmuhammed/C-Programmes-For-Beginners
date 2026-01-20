#include <stdio.h>
int main() {
    char *file_name="file.txt";
    FILE *file = fopen(file_name, "r");
	perror("File error :");//print error message using errno

    fseek(file,0,SEEK_END);
    int offset=ftell(file);
    if(offset == -1){//check if ftell failed and errno set 
	perror("File error ");//print error message using errno
        return -1;
    }else if (offset == 0){
	printf("The file is empty\n");
    }
    fclose(file);

    return 0;
}
