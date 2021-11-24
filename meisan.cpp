#include<stdio.h>
#include<math.h>
int main()
 {
	int i,s,j;
	long n,k,m,e=1;
	scanf("%ld",&m);
	n=log2(m+1);
	for(k=2;k<=n;k++)
	{   
	    int flag=1,flog=1;
		for(i=2;i<=k/2;i++)
		{
			if(k%i==0)
			{
				flag=0;
				break;
			}
			 
		}
	    if(flag)
		  {
		    for(j=1;j<=k;j++)
		    {
		    	e=e*2;
		    }
		    e=e-1;
			for(s=2;s<=e/2;s++)
			{
				if(e%s==0)
				{
					flog=0;
					break;
				}
			}
       	}
		  if(flog&&e<=m)
		  printf("%ld\n",e);
			
		}
		return 0;
	}


