#include <stdio.h>

//encryp(int m, int k, int x)

int main()
{
char alphatxt[] = "IMGAY"; //The Text that is going to become encrypted is going to be typed here//
int i; //Counter
int N = 5; //Number of Values in the Array
int k = -1; //KEY or the number of charcters shifted in the rotation cypher

//error message needed if k is bigger or smaller then 24 and -26

for (i = 0 ; i < N ; ++i){
    int phi = alphatxt[i]; //place holding integer
    
    if ((phi + k) > 90){
        printf("%c", phi - 26 + k);
        
    } else if ( (phi + k) < 65 ){
        printf("%c", phi + 26 + k);
            
    } else printf("%c", phi + k);
}
      return 0;

}

//encryp(int m, int k, int x){
//    x = (m + k) % 26;
//}
