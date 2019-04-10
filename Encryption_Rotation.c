#include <stdio.h>

int main()
{

int k = 1; //KEY = the number of charcters shifted in the rotation cypher to generate coded message 


    FILE *in;
    FILE *out;
    
    in = fopen("in.txt", "r");
    out = fopen("out.txt", "w");
    
    while (feof(in) == 0){
        char phi;
        fscanf(in, "%c", &phi);
      
          
    if (phi == 32){
     fprintf(out, "%c", phi); //Just prints the space
     printf("%c", phi);
    
    }else if((phi + k) > 90){ // If it exceeds 'Z' after k is added, then simply take 26 away then add k
        fprintf(out, "%c", phi - 26 + k); 
        printf("%c", phi - 26 + k);
        
    } else if ( (phi + k) < 65 ){ //If it exceeds 'Z' after k is added, then simply add 26 away then add k
        fprintf(out, "%c", phi + 26 + k);
        printf("%c", phi + 26 + k);
            
    } else { fprintf(out, "%c", phi + k);// if within the bounds of ASCII 'A' and 'Z' just add k
   printf("%c", phi + k);
   }
}
    }
  


