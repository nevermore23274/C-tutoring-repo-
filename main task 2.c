/******************************************************************************
A rectangular matrix is given. Find the maximum of the elements on the main diagonal.
Swap the minimum for column n, where n is entered from the keyboard (SECOND TASK)

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    int myArray[3][3] = {
    { 2, 1, 0}, // row 0
    {-1, -2, -3}, // row 1
    {10, 12, 13} // row 2
    };
    
    int i, j = 0, maxVal = 0, minVal = 0, userInput;
    
    //location maxVal
    int x,y;
    //location minVal
    int p,t;
    
    
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &userInput);

    // displays output
    printf("You entered: %d", userInput);
    printf("\n");
    
    //Displaying find max value in array
    printf("Diagonal elements:\n");
    for(i=0; i<3; i++) {
        if(maxVal < myArray[i][j]){
                maxVal = myArray[i][j];
                x=i;
                y=j;
            }
        printf("%d ", myArray[i][j]);
        printf("\n");
        j++;
    }
    // user column maximum
    printf("Max array value: %d", maxVal);
    
    for(i=0; i<3; i++) {
        if(minVal > myArray[i][userInput]){
            minVal = myArray[i][userInput];
            p=i;
            t=userInput;
        }
    }
    
    printf("\n");
	
    // user column minimum
    printf("minimum value in user selected column: %d", minVal);
    printf("\n");
    
    //Swap
    myArray[x][y] = minVal;
    myArray[p][t] = maxVal;
    
    //Displaying array elements
    printf("Two Dimensional array elements:\n");
    for(i=0; i<3; i++) {
        for(j=0;j<3;j++) {
            printf("%d ", myArray[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    
    return 0;
}
