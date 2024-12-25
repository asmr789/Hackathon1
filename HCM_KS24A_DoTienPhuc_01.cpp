#include <stdio.h>
#include<math.h>
#define MAX_ROW 100

int main(){
	int arr[MAX_ROW];
	int n=0,choice,max=0,min=0,sum=0,found=0,value,pos;
	while(1){
	printf("------Menu------\n");
	printf("1.Nhap so gia tri phan tu cho mang \n");
	printf("2.In ra gia tri cac phan tu trong mang theo dang arr[0],arr[1]=5\n");
	printf("3.Tim gia tri nho nhat va lon nhat trong mang\n");
	printf("4.In ra tong cua tat ca cac phan tu\n");
	printf("5.Them mot phan tu vao cuoi mang,phan tu them vao mang phai do nguoi dung nhap vao\n");
	printf("6.Xoa phan tu tai mot vi tri cu the(nguoi dung nhap vi tri)\n");
	printf("7.Sap xep mang theo thu tu giam dan(bubble sort)\n");
	printf("8.Cho nguoi dung nhap vao mot phan tu,tim kiem xem phan tu do co ton tai trong mang hay khong(lineear sort)\n");
	printf("9.In ra toan bo so nguyen to trong mang\n");
	printf("   a.Neu khong co so nguyen to nao thi hien thi ra la khong co so nguyen to nao trong mang\n");
	printf("   b.Neu co so nguyen to trong mang thi hien thi toan bo so nguyen to do\n");
	printf("10.Sap xep mang theo thu tu tang dan(Slection sort)\n");
	printf("11.Thoat \n");
	printf("Nhap so chuc nang ban muon lam: \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Nhap so hang cho array: ");
			scanf("%d",&n);
			for(int i=0;i<n;i++){
			printf("Nhap gia tri cho array[%d]: ",i);
			scanf("%d",&arr[i]);
			}
			break;
		case 2:
			printf("Mang co gia tri la: \n");
			for(int i=0;i<n;i++){
			printf("Array[%d]: %d\n",i,arr[i]);
		}
		break;
		case 3:
			max = min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;
		case 4:
			for(int i=0;i<n;i++){
				sum+=arr[i];
			}
			printf("Tong cua cac phan tu trong mang la: %d\n",sum);
			break;
		case 5:
			printf("Nhap gia tri can them vao cuoi mang: ");
                scanf("%d", &value);
                if (n < MAX_ROW) {
                    arr[n++] = value;
                } else {
                    printf("Mang da day\n");
                }
                break;
			break;
		case 6:
			printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong dung\n");
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa \n");
                }
                break;
		case 7:
			for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
			}
		}
		printf("Sap xep mang theo thu tu giam dan:\n");
		for (int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}	
		printf("\n");
			break;
		case 8:
			printf("Nhap phan tu muon tim: ");
			scanf("%d",&found);
			for(int i=0;i<n;i++){
				if( arr[i] == found ){
					printf("Phan tu %d nam o vi tri %d trong mang \n",found,i);
				}
			}
                break;
		case 9: 
		 for(int i=0;i<=sqrt(n);i++){
        if (n % i == 0){
        	printf("Cac so nguyen to trong mang la: \n");
        	printf("%d",n);
		}
		else{
			printf("Mang khong co so nguyen to\n");
		}
    }
                break;
		case 10:
			for(int i=0;i<n-1;i++){
				for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep theo thu tu tang dan: \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	break;
	case 11:
		break;
	default:
	printf("Chuc nang khong co trong mang vui long nhap lai!"); 
	} if (choice == 11){
	printf("Thoat chuong trinh");
	break;
	}

}
	return 0;
}
  