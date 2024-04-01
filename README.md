#include<stdio.h>
#include<conio.h>

#define MAXSIZE 1000		//Khai bao HANG SO

//Viet ham Nhap mang 1 chieu chua cac so nguyen
void NhapMang1Chieu(int a[], int &n)
{
	do
	{
		printf("Nhap so phan tu mang:");
		scanf("%d", &n);

	} while (n <= 0);

	for (int i = 0; i < n; i++)
	{
		printf("Gia tri phan tu a[%d]=", i);
		scanf("%d", &a[i]);
	}
}

//Viet ham Xuat mang 1 chieu chua cac so nguyen
void XuatMang1Chieu(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%4d", a[i]);
}


//Chuong trinh chinh
void main()
{
	int A[MAXSIZE];
	int N;
	NhapMang1Chieu(A, N);
	printf("\n Cac phan tu cua Mang da nhap la:");
	XuatMang1Chieu(A, N);

	getch();
}
