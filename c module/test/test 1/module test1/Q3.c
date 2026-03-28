#include<stdio.h>
typedef struct Music {
	int song_id;
	char title[50];
	char artist[50];
	int min;
	int sec;


} Music;
void add(Music*, int*,int* );
void display(Music*,int* );
void main() {
	int size =2;
	Music m[size];
	int count=0;
	while(1) {
		printf("1.Add Song\n");
		printf("2.Display Songs\n");
		printf("3.Exit\n");
		int ch;
		printf("Enter choice :");
		scanf("%d",&ch);
		if(ch==1)
			add(m,&size,&count);
		else if(ch==2)
			display(m,&count);
		else
			break;
	}

}
void add(Music* m, int* size,int* count) {

	if(*count>=*size) {
		printf("Array is full");

	} else {

		printf("***********Enter the songs details :***********\n");
		printf("Enter Song ID :");
		scanf("%d",&m[*count].song_id);
		printf("Enter Title");
		scanf("%s",m[*count].title);
		printf("Enter artist:");
		scanf("%s",m[*count].artist);
		printf("Enter duration(min:sec) :");
		scanf("%d%d",&m[*count].min,&m[*count].sec);
		(*count)++;

	}

}
void display(Music* m,int* count) {
	if(*count==0) {
		printf("No songs available\n");
	} else {
		printf("***************Playlist :********************\n");
		for(int i=0; i<*count; i++) {
			printf("Song Id: %d\n",m[i].song_id);
			printf("Song Title : %s\n",m[i].title);
			printf("song artist : %s\n",m[i].artist);
			printf("Song Duration :%d min : %d sec\n\n",m[i].min,m[i].sec);

		}
	}
}



