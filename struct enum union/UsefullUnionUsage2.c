#include <stdio.h>
#include <stdbool.h>

struct character {// thanks jacob sorber 
    char * name;
    bool isRobot;
   union {
        char *GovID;
        char *appVersion;
};
};

int main() {
    struct character c1;
    c1.name="steve";
    c1.isRobot = false;
   c1.GovID = "ID10";

    return 0;
}
