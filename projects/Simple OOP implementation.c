#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    void (*set)(struct Student *,int);
    int (*get)(struct Student *);

};

void setId(struct Student *obj ,int id){
obj->id=id;
}

int getId(struct Student *obj){
return obj->id;
}


int main() {

    struct Student std1;
    std1.set=setId;
    std1.get=getId;
    std1.set(&std1,125);
    printf("The studbt id is : %d \n",std1.get(&std1));

    return 0;
}

