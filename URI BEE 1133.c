#include <stdio.h>

int main() {

    int X,Y,i,temp;
    scanf("%d%d",&X,&Y);
    if(X>Y)
    {
        temp=Y;
        Y=X;
        X=temp;
    }
    X++;
    for(i=X;i<Y;i++)
    {
        if(i/5!=0)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }

    return 0;
}
