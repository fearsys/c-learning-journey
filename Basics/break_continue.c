#include <stdio.h>

int main () {

    // break is used to stop the loop
    for(int i = 1; i <= 10; i++) {
        printf("%d\n", i); // This prints all numbers
    }
    // lets use break now
    printf("---------------------------------------\n");
      for(int i = 1; i <= 10; i++) {
        if (i == 4) {
            break; // Break the loop when you detect that value of i is 4. so 4 will never be printed 
        }
        printf("%d\n", i); 
    }
    // lets use continue now. we can see it as a skip button 
    printf("---------------------------------------------\n");
      for(int i = 1; i <= 10; i++) {
        if (i == 4) {
            continue; // skip the 4 and then move on to next part 
        }
        printf("%d\n", i); 
    }

    return 0;

}