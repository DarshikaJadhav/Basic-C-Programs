#include <stdio.h>

int main(void) {
    int i,a, x,r,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&x);
        sum=0;
        while(x>0)
        {
            r=x%10;
            sum+=r;
            x=x/10;
            
            
            
        }
        printf("%d\n",sum);
    }
	// your code goes here
	return 0;
}
//By sriharsha
