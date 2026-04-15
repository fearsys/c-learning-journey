#include <stdio.h>

typedef enum {
    SUCCESS, FAILURE, PENDING
}STATUS;

void statusCode(STATUS status);

int main () {

    STATUS status = SUCCESS;
    statusCode(status);

    return 0;

}

void statusCode(STATUS status) {
    switch (status) {
        case SUCCESS : 
        printf("Success\n");
        break;
        case FAILURE : 
        printf("Failure\n");
        break;
        case PENDING :
        printf("Pending\n");
        break;
        default :
        printf("Error 404\n");
    }
}