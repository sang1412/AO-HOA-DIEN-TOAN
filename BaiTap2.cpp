#include <stdio.h>
int kiem_tra_so_chinh_phuong(int n) {
  int can_bac_hai = (int)sqrt(n);
  return can_bac_hai * can_bac_hai == n;
}
int dem_so_chinh_phuong(int n) {
  int so_luong = 0;
  for (int i = 1; i <= n; i++) {
    if (kiem_tra_so_chinh_phuong(i)) {
      so_luong++;
    }
  }
  return so_luong;
}
int main() {
  int n=50;
 

  int so_luong_so_chinh_phuong = dem_so_chinh_phuong(n);

  printf("Có %d số chính phương nhỏ hơn %d\n", so_luong_so_chinh_phuong, n);

  for (int i = 1; i <= n; i++) {
    if (kiem_tra_so_chinh_phuong(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}
