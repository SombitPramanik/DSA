#include <stdio.h>
#include <string.h>

int main(){
    // Syntax for defining an array: Type OF Array Name[ArraySize] = {arrayElements, arrayElements2}
    int IntegerArray[3] = {1,2,3};
    char OneDCharacterArray[15] = {"Hello World"};
    
    // Syntax for defining a 2D array: Type OF Array Name[ArraySize1][ArraySize2] = {arrayElements, arrayElements2}
    // Explanation: [This is the number of 1D arrays stored in the 2D array][This is the size of each 1D array that will be stored in the 2D array]
    char TwoDCharacterArray[3][10] = {"10SizeWord","Element2","Element3"};

    // To print the entire 1D array stored in the first position of the 2D array
    printf("%s\n",TwoDCharacterArray[0]);

    // Access Element in Array :
    // To access Elements in the Array we have to use a loop, or we can use the Index of the Element
    // Loop Method :
    // iterates until the Max Length of the Array
    for(int i =0; i<3 ;i++){
        printf("%d\n",IntegerArray[i]);
    }

    
}