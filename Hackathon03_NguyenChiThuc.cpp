#include<stdio.h>

int main(){
	int n;
	int arr[100];
	int choice;
	int currentLenght;
	while(1)
	{
		printf("\n------------MENU-----------\n");
		printf("1.Nhap phan tu va gia tri cho mang\n");
		printf("2.In ra gia tri cac phan tu\n");
		printf("3.So cac so nguyen to trong mang\n");
		printf("4.Gia tri nho thu hai trong mang\n");
		printf("5.Them mot phan tu ngau nhien vao mang\n");
		printf("6.Xoa 1 phan tu\n");
		printf("7.Sap xep phan tu theo thu tu giam dan\n");
		printf("8.Kiem tra phan tu co ton tai trong mang hay khong\n");
		printf("9.Xoa toan bo phan tu trung lap va hien thi toan bo phan tu doc nhat trong mang\n");
		printf("10.Dao nguoc vi tri cac phan tu trong mang\n");
		printf("11.Thoat\n");
		printf("Moi ban chon chuc nang: ");
		scanf("%d", &choice);
		
		if(choice == 11){
			printf("Ket thuc chuong trinh");
			break;
		}
		
		switch(choice){
			case 1:
			printf("Moi nhap so phan tu cua mang: ");
			scanf("%d", &n);
			for(int i =0; i<n; i++){
				printf("Nhap phan tu: ", i+i);
				scanf("%d", &arr[i]);
			}
			break;
			case 2:
			printf("Cac phan tu trong mang la: \n");
			for(int i=0; i<n; i++){
				printf("Phan tu thu arr[%d] trong mang = %d", i, arr[i]);
				printf("\n");
			}
			break;
			case 3:
				printf("Cac phan tu la so nguyen to: ");
				currentLenght = n;
            for (int i = 0; i < currentLenght; ++i){
                int prime = 0;
                for (int j = 2; j * j <= arr[i]; ++j){
                    if (arr[i] % j == 0)
                        prime = 1;
                }
                if (!prime && arr[i] > 1){
                    printf("%d ", arr[i]);
                }
            }
				break;
			case 4:
				int temp;
				for(int i=0; i<n; i++){
					
				}
				break;
			case 5:
				int newValue;
				int position;
				printf("Nhap phan tu muon them vao: ");
				scanf("%d", &newValue);
				printf("Nhap vi tri muon them (0 - %d): ", n - 1);
				scanf("%d", &position);
				if(position<0||position >= n){
					printf("Vi tri khong hop le");
				}
				break;	
				case 6:
				int deletePosition;
				printf("Nhap vi tri phan tu muon xoa: ");
				scanf("%d", &deletePosition);
				if(deletePosition<0||deletePosition>=n){
					printf("Khong hop le");
					break;
				}
				for(int i=deletePosition; i<n;i++){
					arr[i]=arr[i+1];
				}
				n--;
			case 7:
			
					break;	
			case 8:
					
					break;
			case 9:
					break;
			case 10:
					break;
		default:
			printf("Lua chon khong hop le");
			break;			
		}
		
	}
	
	
}
