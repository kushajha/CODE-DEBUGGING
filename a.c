#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int ctr=0;
int c[104];
int power(int x,int y)
{
        int t=1;
        while(y--)
                t*=x;
        return t;
}
int check2(char *str)
{
    int i=0,t=0;
    long int a=0;
    for(i=0;i<strlen(str);i++)
    {
        t=(int)(str[i]-'0');
        a+=t*power(10,strlen(str)-i-1);
    }
    //printf("%d\n",a);
    if(a%21==0)
        return 0;
    else
        return 1;
}


int check(char *str)
{
     //ctr=0;
    int i=0,j=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='2'&&str[i+1]=='1')
            return 0;
    }
    return 1;
}

int main()
{
    int t,x;
    scanf("%d",&t);
    x=t;
    while(t--)
    {
        char *str;
        str=(char*)malloc(sizeof(char)*9);
        scanf("%s",str);
        c[ctr++]=check(str)*check2(str);
        
        free(str);
    }
    t=0;
    while(x>t)
    {
        if(c[t]==0)
            printf("The streak is broken!\n");
        if(c[t]==1)
            printf("The streak lives still in our heart!\n");
            
            t++;
    }
    return 0;
}

