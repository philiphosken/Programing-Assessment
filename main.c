#include <stdio.h>

//encryp(int m, int k, int x)

int main()
{
char alphatxt[] = "TEST"; //The Text that is going to become encrypted is going to be typed here//
int i; //Counter
int N = 4; //Number of Values in the Array
int k = 4; //KEY or the number of charcters shifted in the rotation cypher

//error message needed here if k is bigger or smaller then 246 and -26

for (i = 0 ; i < N ; ++i){
    
    //if the ASCII is > Z (90) then -26 and add k
    printf("%c", alphatxt[i] + k);
    
    
}


return 0;

}

//encryp(int m, int k, int x){
//    x = (m + k) % 26;
//}
