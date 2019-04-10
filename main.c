#include <stdio.h>

int main()
{
char alphatxt[] = "TESTING ONE TWO"; //Text that is to become encrypted
int N = 15; //Number of Values in the Array above
int i = 0; //Counter Index in order to read alter and reprint each element in the array
int k = 4; //KEY = the number of charcters shifted in the rotation cypher

if (k > 26 || k < -26){ //if the value of k was 26 or greater, it would either remain unchanged or thered be an equivelent key between -25 and 25
    printf("%d is an invalid value for k. Select an interger between -25 and 25", k); //Prints an error message if tis is the case
} else //If k is a valid number then continue to for loop


for (i = 0 ; i < N ; ++i){
    int phi = alphatxt[i]; //phi = place holding integer. This whill store each number ASCII number in the array to the variable 'phi'
    
    if (phi == 32){
     printf("%c", phi); //Just prints the space
    
    }else if((phi + k) > 90){ // If it exceeds 'Z' after k is added, then simply take 26 away then add k
        printf("%c", phi - 26 + k); //shift to characters after 'Z' loop back to 'A'
        
    } else if ( (phi + k) < 65 ){ //If it exceeds 'Z' after k is added, then simply add 26 away then add k
        printf("%c", phi + 26 + k);
            
    } else printf("%c", phi + k);// if within the bounds of ASCII 'A' and 'Z' just add k
}
      return 0;
}
