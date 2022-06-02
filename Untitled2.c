#include<stdio.h>
struct team
{
    char nm[20];
    float point;
    char result[5];
};
int main ()
{
    struct team t[10];
    int i,j,s=0;
    for(i=0;i<10;i++)
    {
    	printf("\nEnter team name ");
        gets(t[i].nm);
        printf("\nEnter point ");
        scanf("%f",&t[i].point);
        fflush(stdin);
        for(j=0;j<5;j++)
        {
        	printf("\nfor win W,for loss L ");
            scanf("%c",&t[i].result[j]);
            fflush(stdin);
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            if(t[i].result[j]=='L' && t[i].result[j+1]=='L')
            {
                printf("\n%s",t[i].nm);
                break;
            }
        }
    }
    for(i=0;i<10;i++)
    {
    	s=s+t[i].point;
	}
	float av=s/5;
	printf("\n average=%d",av);
	int n;
	printf("\nEnter no of consucative Loss ");
	scanf("%d",&n);
	int flag,k;
	 for(i=0;i<10;i++)
    {
    	flag=0;
        for(j=0;j<5;j++)
        {
        	for(k=0;k<n;k++)
        	{
				if(t[i].result[j+k]=='L' )
                {
                	flag=1;
			    }  
				else
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
			    printf("\n%s",t[i].nm);
                break;            
			}
	    }
    }
   
	return 0;
}

