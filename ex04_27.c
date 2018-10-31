#include<stdio.h>

int roll(int a,int b,int c,int d)
{
    int group[3]= {b,c,d};
    int i;
    for(i=0; i<3; i++)
    {
        if(group[i]==a)
        {
            return 1;
            break;
        }
    }
    if(i==3)
    {
        return 0;
    }
}

void main()
{
    int a,b,c,counter=0;
    int d[3];
    int ja,jb,jc;
    int localcounter;
    for(a=1; a<=500; a++)
    {
            ja=0;
            jb=0;
            jc=0;


        for(b=1,localcounter=0; b<=500; b++)
        {
            for(c=1; c<=500; c++)
            {
                if(a+b>c||a+c>b||c+b>a)
                {
                    if(a*a+b*b==c*c)
                    {
                        if(localcounter!=0)
                        {
                            ja=roll(a,d[0],d[1],d[2]);
                            jb=roll(b,d[0],d[1],d[2]);
                            jc=roll(c,d[0],d[1],d[2]);
                        }
                        if(ja==1&&jb==1&&jc==1)
                        {
                            continue;
                        }
                        counter++;
                        localcounter++;
                        printf("%d %d %d\n",a,b,c);
                        d[0]=a;
                        d[1]=b;
                        d[2]=c;
                    }
                }
            }
        }
    }
    printf("A total of %d triples were found.",counter);
    return;
}
