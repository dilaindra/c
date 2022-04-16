#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char kata[255];
	scanf(" %[^\n]", &kata);
	int i;
	int panjang;
	
	panjang =strlen(kata);
	
	for(i=0; i<panjang; i++){
		if(i == 0){
			kata[i] = toupper(kata[i]);
		}
		while(kata[i] != ' '){
			i++;
		}
		if(kata[i] == ' '){
			kata[i+1] = toupper(kata[i+1]);
		}
	}
	
	printf("%s", kata);
	return 0;
}
