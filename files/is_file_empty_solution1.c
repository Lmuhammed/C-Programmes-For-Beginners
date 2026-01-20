#include <stdio.h>
#include <sys/stat.h>

int main() {
	
	char *file_name="file.txt";
    FILE *file = fopen(file_name, "r");
    struct stat file_status;
    if (stat(file_name,&file_status) < 0)
    return -1;
    if(file_status.st_size == 0){
	printf("File empty");
     }
    // Close the file
    fclose(file);

    return 0;
}
