//nhap sv, ghi ra file. doc sv tu file va hien thi
#include <stdio.h>
typedef struct
{
	int ngay,thang,nam;
} date;
typedef struct  
{
	char mahv[10];
	char hoten[50];
	date ns;
	int gt;
	char quequan[30];
	char lop[10];
} hoc_vien;
hoc_vien nhaphv()
{
	hoc_vien temp; 
	fflush(stdin);
	printf("Nhap ma hoc vien:");gets(temp.mahv);
	printf("Nhap ho ten:");gets(temp.hoten);
	printf("Nhap ngay sinh (dd mm yyyy):");scanf("%d%d%d",&temp.ns.ngay,&temp.ns.thang,&temp.ns.nam);
	printf("Nhap gioi tinh (0-nu,1-nam):");scanf("%d",&temp.gt);
	fflush(stdin);
	printf("Nhap que quan:");gets(temp.quequan);
	printf("Nhap lop:");gets(temp.lop);
	return temp;  //tra ve kq ham la temp	
}
void ghitep(hoc_vien a)  //ghi 1 hoc vien
{
	
}
void ghids(hoc_vien *a)  //ghi 1 ds cac hoc vien
{
	//lam ham nay
}
void inhv(hoc_vien a)
{
	printf("\nMa hoc vien: %s",a.mahv);
	printf("\nHo ten: %s",a.hoten);
	printf("\nNgay sinh: %d/%d/%d",a.ns.ngay,a.ns.thang,a.ns.nam);
	printf("\nGioi tinh: %s",(a.gt!=0?"Nam":"Nu"));
	printf("\nQue quan: %s",a.quequan);
	printf("\nLop: %s",a.lop);
}

main()
{
	hoc_vien a,ds[50];
	int i,n;	
	printf("\nNhap so hoc vien:");scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\nNhap thong tin hoc vien thu %d:\n",i);
		ds[i]=nhaphv();  
	}
	ghids(ds);
	
}
