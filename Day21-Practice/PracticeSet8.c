#include<stdio.h>
#include<stdlib.h>
int main(){
    // int i, j = 3;
    // float k = 7;
    // i = (int)(k) % j;
    // printf("%d", i );



    // for(int i = 1; ;){
    //   if ( i<10) { 
    //     printf("%d",i);
    //     i++;
    //   }
    // }

    // int x, y, z;

    // x = 2;
    // y = 4
    // z = x++ + ++y;
    // printf("%d",z);

    // int a,b;
    // b = 625;
    // for(int a = 1;a<4;){
    //     b = b/5;
    //     printf("%d",b);
    //     a = a+b;

    // }

    // printf("%d",a);



int m = 2, c=1
int a,b;
int limit = 10;
while(c<limit)
{
for (int n = 1;n<=m;++n)
{
a = m *m -n * n;
b = 2 * m * n;
c = m* m + n * n;
if(c>limit)
break;
printf("%dd %d %d\n",a,b,c);
}
m++;
}

    return 0;
}



