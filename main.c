#include <stdio.h>

//encryp(int m, int k, int x)

int main()
{
char alpha[] = "TEST"; ///The Text that is going to become encrypted is going to be typed here///
int i;
int N = 4;
int k = -1;

for (i = 0 ; i < N ; ++i){
    printf("%c", alpha[i] + k);
    
    
}


return 0;

}

//encryp(int m, int k, int x){
//    x = (m + k) % 26;
//}
