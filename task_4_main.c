/**
A material array of temperatures for two weeks is given.
a) display the names of days on which the temperature was above the average for the week;
b) create a second array in which to place the temperatures of the days in which it is
fell below average, while maintaining the positions of the original array.
Fill the remaining cells with zeros.
c) calculate the maximum number of adjacent zeros from the second array
(item "b"). (4 TASK)
***/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{

    int weatherTemps[14] = 
    {80, 22, 100, 233, 45, 87, 90, 45, 87, 90, 123, 45, 87, 90};
    int tempsArray[14];

    int i, j, weekOneAVG, weekTwoAVG, count = 14, SUM=0;

    //Displaying array elements
    for(i=0; i<7; i++) {
        SUM += weatherTemps[i];
    }
    weekOneAVG = SUM/7;
    //printf("%d", SUM);
    SUM=0;
    
    for(i=7; i<14; i++) {
        SUM += weatherTemps[i];
    }
    weekTwoAVG = SUM/7;
    
    //printf("%d", SUM);
    printf("week one average %d \n", weekOneAVG);
    printf("week two average %d \n", weekTwoAVG);
    printf("\n");
    printf("List of two week temps above the week average:\n");
    
    for(i=0; i<14; i++) {
        tempsArray[i] = 0;
        if((weatherTemps[i] > weekOneAVG) && (i<7)){
            
            count--;
            tempsArray[i] = weatherTemps[i];
            
            switch (i) 
            { 
                case 0: printf("Monday: %d \n", weatherTemps[i]); 
                continue;
                case 1: printf("Tuesday: %d \n", weatherTemps[i]); 
                continue;
                case 2: printf("Wednesday: %d \n", weatherTemps[i]); 
                continue;
                case 3: printf("Thursday: %d \n", weatherTemps[i]); 
                continue;
                case 4: printf("Friday: %d \n", weatherTemps[i]); 
                continue;
                case 5: printf("Saturday: %d \n", weatherTemps[i]); 
                continue;
                case 6: printf("Sunday: %d \n", weatherTemps[i]);
                continue;
                case 7: printf("2nd Monday: %d \n", weatherTemps[i]); 
                continue;
                case 8: printf("2nd Tuesday: %d \n", weatherTemps[i]); 
                continue;
                case 9: printf("2nd Wednesday: %d \n", weatherTemps[i]); 
                continue;
                case 10: printf("2nd Thursday: %d \n", weatherTemps[i]); 
                continue;
                case 11: printf("2nd Friday: %d \n", weatherTemps[i]); 
                continue;
                case 12: printf("2nd Saturday: %d \n", weatherTemps[i]); 
                continue;
                case 13: printf("2nd Sunday: %d \n", weatherTemps[i]); 
                continue;
                default: continue; 
            } 
        }
        
        if((weatherTemps[i] > weekTwoAVG) && (i>6)){
            
            count--;
            tempsArray[i] = weatherTemps[i];
            
            switch (i) 
            { 
                case 0: printf("Monday: %d \n", weatherTemps[i]); 
                continue;
                case 1: printf("Tuesday: %d \n", weatherTemps[i]); 
                continue;
                case 2: printf("Wednesday: %d \n", weatherTemps[i]); 
                continue;
                case 3: printf("Thursday: %d \n", weatherTemps[i]); 
                continue;
                case 4: printf("Friday: %d \n", weatherTemps[i]); 
                continue;
                case 5: printf("Saturday: %d \n", weatherTemps[i]); 
                continue;
                case 6: printf("Sunday: %d \n", weatherTemps[i]);
                continue;
                case 7: printf("Monday: %d \n", weatherTemps[i]); 
                continue;
                case 8: printf("Tuesday: %d \n", weatherTemps[i]); 
                continue;
                case 9: printf("Wednesday: %d \n", weatherTemps[i]); 
                continue;
                case 10: printf("Thursday: %d \n", weatherTemps[i]); 
                continue;
                case 11: printf("Friday: %d \n", weatherTemps[i]); 
                continue;
                case 12: printf("Saturday: %d \n", weatherTemps[i]); 
                continue;
                case 13: printf("Sunday: %d \n", weatherTemps[i]); 
                continue;
                default: continue; 
            } 
        }
    }
    
    printf("Number of Zeros in second Array: %d \n", count);

    return 0;
}