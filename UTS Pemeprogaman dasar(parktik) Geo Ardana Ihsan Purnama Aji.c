#include <stdio.h>
#include <stdlib.h>


int main(){

  int menu;
  float a,b,c;

  {
    printf("=================================================\n");
    printf("[]============ UTS PEMPROGRAMAN DASAR =========[]\n");
    printf("[]                                             []\n");
    printf("[]                                             []\n");
    printf("[]======== Geo Ardana Ihsan Purnama Aji =======[]\n");
    printf("[]                                             []\n");
    printf("[]                                             []\n");
    printf("[]============== RUMUS PHYTAGORAS =============[]\n");
    printf("=================================================\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("=================================================\n");
    printf("[]--------------- Menu Phytagoras -------------[]\n");
    printf("[]                                             []\n");
    printf("[]=============================================[]\n");
    printf("[]1. Mencari sisi miring (c)                   []\n");
    printf("[]=============================================[]\n");
    printf("[]2. Mencari sisi alas (a)                     []\n");
    printf("[]=============================================[]\n");
    printf("[]3. Mencari sisi tegak (b)                    []\n");
    printf("[]=============================================[]\n");
    printf("[]4. Keluar program                            []\n");
    printf("[]=============================================[]\n");
    printf("=================================================\n");
    printf("\n");
    printf("\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Pilih nomor menu: ");
    scanf("%d",&menu);

    if(menu == 1){
      printf("Masukkan nilai a: ");
      scanf("%f",&a);
      printf("Masukkan nilai b: ");
      scanf("%f",&b);
      c=sqrt((a*a)+(b*b));
      printf("Nilai sisi miring adalah %.2f\n",c);
    } else if (menu == 2){
      printf("Masukkan nilai b: ");
      scanf("%f",&b);
      printf("Masukkan nilai c: ");
      scanf("%f",&c);
      a=sqrt((c*c)-(b*b));
      printf("Nilai sisi alas adalah %.2f\n",a);
    } else if (menu == 3){
      printf("Masukkan nilai a: ");
      scanf("%f",&a);
      printf("Masukkan nilai c: ");
      scanf("%f",&c);
      b=sqrt((c*c)-(a*a));
      printf("Nilai sisi tegak adalah %.2f\n",b);
    } else if(menu == 4){
      exit (0);
    } else {
      printf("Menu yang anda input salah");
    }
  }
  return 0;
}
