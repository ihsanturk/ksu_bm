// Dongu Cesitleri //

  /* * while
     * for
     * do-while   

    ######### While Dongusu #########
     
     while(kosul) {
          ---[kodlar]---
          ---[kodlar]---
     }

    #################################
    */

// Sayac kontrollu dongu //

# include <stdio.h>
int main() {
	int x, artis, bitis;
	x = 0;
	bitis = 10;
	artis = 2;

	while(x < bitis) {
	      printf("x = %d/10. (x %d arttiriliyor)\n", x, artis);
	      x += artis; 
	}
}
