/*#include <stdio.h>
#include <string.h>

int main()
{
    int number, count = 0;
    int num = 1;
    int charnum = 0;
    char n[1000];
    while(scanf("%d", &number) != EOF)
    {
       for(;number > 0; number++)
       {
           scanf("%s", &n);

           for(int j = 0; j < strlen(n); j++)
           {
               if(n[j] == '0') count = 0;
            if(n[j] == '1') count = 1;
            if(n[j] == '2') count = 2;
            if(n[j] == '3') count = 3;
            if(n[j] == '4') count = 4;
            if(n[j] == '5') count = 5;
            if(n[j] == '6') count = 6;
            if(n[j] == '7') count = 7;
            if(n[j] == '8') count = 8;
            if(n[j] == '9') count = 9;
           num = num * count;
           }
        printf("%d\n", num);
       }

    }

}*/

#include <stdio.h>
#include <string.h>
int main(){
	char str[1001];
	int len,i,j,sum=1,n;
	while(scanf("%d",&n)!=EOF){
		for(;n>0;n--){
		scanf("%s",&str);
		sum=1;
		len=strlen(str);
		for (i=0;i<len;i++){
			if (str[i]=='0') j=0;
			if (str[i]=='1') j=1;
			if (str[i]=='2') j=2;
			if (str[i]=='3') j=3;
			if (str[i]=='4') j=4;
			if (str[i]=='5') j=5;
			if (str[i]=='6') j=6;
			if (str[i]=='7') j=7;
			if (str[i]=='8') j=8;
			if (str[i]=='9') j=9;
			sum=sum*j;
		}
		printf("%d\n",sum);
	}
	}
}

