#include <stdio.h>

void inBoi7HaiChuSo() {
  for (int i = 10; i <= 99; i++) {
    if (i % 7 == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  inBoi7HaiChuSo();
  return 0;
}
