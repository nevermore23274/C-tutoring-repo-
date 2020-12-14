/******************************************************************************
In each line of a two-dimensional array, swap the first zero 
element and the last negative one. If there are no such elements
, a corresponding message should be displayed.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    int myArray[2][10] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // row 0
    {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10} // row 1
    };
    
    int i, j, negVal, zeroVal;
    
    //Displaying array elements
    printf("Two Dimensional array elements:\n");
    for(i=0; i<2; i++) {
        for(j=0;j<10;j++) {
            printf("%d ", myArray[i][j]);
            if(j==9){
                printf("\n");
            }
        }
    }
    
    for(i=0; i<1; i++) {
        for(j=0;j<10;j++) {
            
            if(myArray[i][j] != 0 || myArray[i+1][j] > 0){
                printf("BAD VAL FOUND SKIPPING\n");
                continue;
            }
            
            printf("%d ", myArray[i][j]);
            //printf("\n");
            
            zeroVal = myArray[i][j];
            negVal = myArray[i+1][j];
		    printf("SWAP VAL");
		    //printf("\n");
		    
		    myArray[i][j] = negVal;
		    myArray[i+1][j] = zeroVal;
			printf("%d ", myArray[i][j]);
			printf("\n");
			
      }
   }
   
    //Displaying array elements
    printf("Two Dimensional array elements:\n");
    for(i=0; i<2; i++) {
        for(j=0;j<10;j++) {
            printf("%d ", myArray[i][j]);
            if(j==9){
                printf("\n");
            }
        }
    }

    return 0;
}