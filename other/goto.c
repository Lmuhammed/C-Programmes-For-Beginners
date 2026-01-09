#include <stdio.h>

int main() {
    int magic_number=123,counter=1;
    for (int i=0;i<1000;i++) {
    for (int j=0;j<1000;j++) {
        counter++;
	if((i+j) == magic_number)
         /*goto had a bad reputation but in this case it can be usefull to break fron nested loops */
	goto done;

    }
    }
    done:
    printf("Magic number founded at %dth attempt \n",counter);
    return 0;
}
