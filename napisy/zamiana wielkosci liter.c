#include <stdio.h>
#include <string.h>
int main(){
	char tab[] = "AlA mA kOTa";
	
	int i = 0;
	for(i = 0; i<100; i++){
		if(tab[i]>='A' && tab[i]<='Z')
			tab[i] = tab[i] + 32;
		else if(tab[i]>='a' && tab[i]<='z')
			tab[i] = tab[i] - 32;
	}	
	
	fputs(tab, stdout);
	
	return 0;
	
}
