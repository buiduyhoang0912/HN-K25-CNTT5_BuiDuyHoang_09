#include<stdio.h>
int main(){
	int n=0,a[100],chon;
	do{
		printf("1. Nhap so luong phan tu va gia tri tung phan tu cho mang\n");
		printf("2. In ra cac phan tu trong mang\n");
		printf("3. Tinh tong cua tat ca so am va so duong trong mang\n");
		printf("4. In ra cac phan tu chia het cho 3 trong mang\n");
		printf("5. Them moi mot phan tu vao vi tri cu the\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan\n");
		printf("8. Kiem tra su ton tai cua phan tu trong mang\n");
		printf("9. In ra cac phan tu trong khoang [a,b]\n");
		printf("10. Dao nguoc vi tri cac phan tu trong mang\n");
		printf("Nhap lua chon cua ban :");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Nhap so luong phan tu :");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("Nhap vao phan tu a[%d] :",i);
					scanf("%d",&a[i]);
				}
				break;
			case 2:
				printf("Cac phan tu cua mang la :");
				for(int i=0;i<n;i++){
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			case 3:{
				int c=0,d=0;
				for(int i=0;i<n;i++){
					if(a[i]>0){
						c+=a[i];
					}else{
						d+=a[i];
					}
				}printf("Tong cac so duong la : %d\n",c);
				printf("tong cac so am la : %d\n",d);
				break;
			}
			case 4:
				printf("cac phan tu chia het cho 3 trong mang la :");
					for(int i=0;i<n;i++){
						if(a[i]%3==0){
							printf("%d ",a[i]);
						}
					}printf("\n");
					break;
			case 5:{
				int pos,x;
				printf("Nhap vi tri muon them :");
				scanf("%d",&pos);
				if(pos<0 || pos > n){
					printf("Vi tri khong hop le !");
					break;
				}else{
					printf("Nhap gia tri muon chon :");
					scanf("%d",&x);
					for(int i=n;i>pos;i--){
						a[i]=a[i-1];
					}n++;
					a[pos]=x;
				}printf("Mang sau khi them la :");
				for(int i=0;i<n;i++){
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			}
			case 6:{
				int pos;
				printf("Nhap vi tri muon xoa :");
				scanf("%d",&pos);
				if(pos<0 || pos > n){
					printf("vi tri khong hop le !");
					break;
				}else{
					for(int i=pos;i<n;i++){
					a[i]=a[i+1];
				}n--;
			}printf("Mang sau khi xoa la :");
			for(int i=0;i<n;i++){
				printf("%d ",a[i]);
			}
				printf("\n");
				break;
			}
			case 7 :{
				for(int i=0;i<n-1;i++){
					int max = i;
					for(int j= i+1;j<n;j++){
						if(a[max]<a[j]) max = j;
					} int temp = a[i];
					a[i] = a[max];
					a[max] = temp;
				}printf("Mang sau khi sap xep la :");
				for(int i=0;i<n;i++){
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			}
		    case 8:{
		    	int left =0,right=n-1,mid,number,check = -1;
		    	printf("Nhap gia tri muon tim :");
		    	scanf("%d",&number);
		    	while(left <= right){
		    		mid = (left + right)/2;
		    		if(a[mid] = number){
		    			check = mid;
		    			printf("Tim thay %d tai vi tri %d",number,check);
		    			break ;
					}else if(a[mid]<number){
						left = mid + 1;
					}else{
						right = mid - 1;
					}
				}if(check == -1) printf("Khong tim thay gia tri trong mang !");
				printf("\n");
				break;
			}
			case 9 :{
				int n,m;
				printf("Nhap gia tri a :");
				scanf("%d",&n);
				printf("Nhap gia tri b :");
				scanf("%d",&m);
				if(n>m){
					printf("a phai be hon b");
				}else{
					printf("cac phan tu tu a den b la :");
					for(int i = n ; i<= m ;i++){
						printf("%d ",a[i]);
					}
				}
				printf("\n");
				break;
			}
			case 10 :
				for(int i=n-1;i>0;i--){
					printf("%d ",a[i]);
				}
				break;
				printf("\n");
			case 11:
				printf("Ket thuc chuong trinh !\n");
				break;
			default:
				printf("Lua chon khong thoa man !");
		}
	}while(chon != 11);
	return 0;
}
