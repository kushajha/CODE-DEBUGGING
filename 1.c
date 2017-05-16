#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int ark[27]={0};


void display()
{
        int i=0,in=0;
        char ch;
        for(i=0;i<26;i++){
                //ark[i]=0;
                if(ark[i]==1)
                        printf("%c",(char)(97+i));
                if(ark[i]>1)
                        printf("%c%d",(char)(97+i),ark[i]);
        }
        printf("\n");
        for(i=0;i<27;i++)ark[i]=0;
}

void chk(char *str)
{
        int i;
        char ch;
        for(i=0;i<strlen(str);i++){
                ch=str[i];
                ark[(int)ch-97]++;
                /*switch(ch)
                {
                        case 'a':ark[0]++;
                        break;
                        case 'b':ark[1]++;
                        break;
                        case 'c':ark[2]++;
                        break;
                        case 'd':ark[3]++;
                        break;
                        case 'e':ark[4]++;
                        break;
                        case 'f':ark[5]++;
                        break;
                        case 'g':ark[6]++;
                        break;
                        case 'h':ark[7]++;
                        break;
                        case 'i':ark[8]++;
                        break;
                        case 'j':ark[9]++;
                        break;
                        case 'k':ark[10]++;
                        break;
                        case 'l':ark[11]++;
                        break;
                        case 'm':ark[12]++;
                        break;
                        case 'n':ark[13]++;
                        break;
                        case 'o':ark[14]++;
                        break;
                        case 'p':ark[15]++;
                        break;
                        case 'q':ark[16]++;
                        break;
                        case 'r':ark[17]++;
                        break;
                        case 's':ark[18]++;
                        break;
                        case 't':ark[19]++;
                        break;
                        case 'u':ark[20]++;
                        break;
                        case 'v':ark[21]++;
                        break;
                        case 'w':ark[22]++;
                        break;
                        case 'x':ark[23]++;
                        break;
                        case 'y':ark[24]++;
                        break;
                        case 'z':ark[25]++;
                        break;
                }*/
                
        }
        display();
}

int main()
{
        int t=0;
        char *str;
        scanf("%d",&t);
        while(t--)
        {
                str=(char*)malloc(sizeof(char)*50);
                scanf("%s",str);
                printf("\n%s\n",str);
                chk(str);
                
                free(str);
                
        }
        return 0;
}
