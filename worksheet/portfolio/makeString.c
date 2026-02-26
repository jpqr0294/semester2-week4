
/*
Name: Finley Schofield
Student ID: JPQR0294
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[128] = {0};
    // process the command-line data using appropriate string functions
    for (int k=1; k<argc; k++) {
        strcat(buffer, argv[k]);
        if (k < argc - 1) {
            strcat(buffer, "-");
        }
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}