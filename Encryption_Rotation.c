#include <stdio.h>

int main()
{

int k = 1; //KEY = the number of charcters shifted in the rotation cypher to generate coded message 


    FILE *message;
    FILE *coded;
    
    message = fopen("message.txt", "r");
    coded = fopen("coded.txt", "w");
    
    while (feof(message) == 0){
        char phi;
        fscanf(message, "%c", &phi);
      
          
    if (phi == 32){
     fprintf(coded, "%c", phi); //Just prints the space
     printf("%c", phi);
    
    }else if((phi + k) > 90){ // If it exceeds 'Z' after k is added, then simply take 26 away then add k
        fprintf(coded, "%c", phi - 26 + k); 
        printf("%c", phi - 26 + k);
        
    } else if ( (phi + k) < 65 ){ //If it exceeds 'Z' after k is added, then simply add 26 away then add k
        fprintf(coded, "%c", phi + 26 + k);
        printf("%c", phi + 26 + k);
            
    } else { fprintf(coded, "%c", phi + k);// if within the bounds of ASCII 'A' and 'Z' just add k
   printf("%c", phi + k);
   }
}
    }
  


