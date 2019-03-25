```c
# include <stdio.h>
int main() {
        int x=0, s1, s2, toplam;

        printf("### Toplama Islemi ###\n");
        while(x < 10) {
                printf("Birinci sayi: ");
                scanf("%d",&s1);
        
                printf("Ikinci sayi: ");
                scanf("%d",&s2);

                printf("\nToplam = %d\n\n",s1+s2);
                x ++;
        }
}
```