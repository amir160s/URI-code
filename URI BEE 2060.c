#include <stdio.h>

int main() {

    int N,i,j,two=0,three=0,four=0,five=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&j);
        if(j%2==0)
        {
            two++;
        }
        if(j%3==0)
        {
            three++;
        }
        if(j%4==0)
        {
            four++;
        }
        if(j%5==0)
        {
            five++;
        }
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",two,three,four,five);

    return 0;
}
