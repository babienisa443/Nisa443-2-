#include<stdio.h>
#include<string.h>
int main(){
	FILE*fp;
	fp=fopen("mytestfile.txt","w");
	int i;
	struct player{
		char name[50];
		int level;
		int score;
		
	};
	player p[5];
	for(i=0;i<5;i++){
	
	printf("name  : ");
	scanf("%s",&p[i].name);
	printf("level : ");
	scanf("%d",&p[i].level);
	printf("score : ");
	scanf("%d",&p[i].score);	
	
	}
	for(i=0;i<5;i++){
		fprintf(fp,"name=%s\n",p[i].name);
		fprintf(fp,"name=%d\n",p[i].level);
		fprintf(fp,"name=%d\n",p[i].score);
		
	}
	fclose(fp);
	return 0;
	
}
