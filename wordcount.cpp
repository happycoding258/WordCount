#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main (int argc, char* argv[])
{
	FILE *fp;
	int count =0;
	char str[1000];
	if(!strcmp(argv[1],"c")){
		if( (fp=fopen(argv[2],"r")) == NULL ){
			puts("Fail to open file!");
			exit(0);
		}
	
		while(fgets(str,1000, fp) != NULL){
			count += strlen(str);
		}	

			printf("×Ö·ûÊý£º%d",count);
			fclose(fp);
	}

	return 0;
}
