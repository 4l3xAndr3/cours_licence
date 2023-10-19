#include <stdio.h>
#include <stdlib.h>

int main () {

    int  var = 123;
    int *p = NULL; 
    /*Good practice: set the initial value of a pointer to NULL */

    /*Init*/
    printf("Address of var : %p\n", &var);      
    printf("Address of p : %p\n", &p);
    printf("Address pointed to by p: %p\n", p);

   
    /*Allocation*/
    printf("---*p = 123 with p initilized to NULL ---\n");
    if (p) {
        *p = 123; /* Segmentation fault here without the test*/
    } else {
        p = malloc(sizeof(int));
        *p = 456;
    }
    printf("Value of *p                             : %d\n", *p);
    printf("Value of p                              : %p\n", p);
    printf("Value of &p                             : %p\n", &p);
    

    /*Assignment*/
    printf("---p = 123 ---\n");
    p = 123;                                    /* Will get a warning by gcc  */
    printf("Address pointed to by p after p = 123   : %p\n", p); /* Ouput: 0x7b (base16) = 123 */
    
    printf("---p = &var ---\n");
    p = &var;                                   /* Now p is pointing to var   */
    printf("Address pointed to by p after p = &var  : %p\n", p); 
    printf("Address of var variable                 : %p\n", &var);
    printf("Value of *p                             : %d\n", *p);
    printf("Value of p                              : %p\n", p);
    printf("Value of &p                             : %p\n", &p);

    printf("---*p = 321 ---\n");
    *p = 321;
    printf("Value of *p                             : %d\n", *p);
    printf("Value of var                            : %d\n", var);
    
    return 0;
}
