#include <stdio.h>
int main(){
	int arr[100];      
    int n;
	int value;    
    int choice;
    int position;
    int check;
    int found;
    do{
    	printf("\nMENU\n");
    	printf("1. Nhap so phan tu va gia tri cho mang\n");
    	printf("2. In gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong cac so hoan hao co trong mang\n");
    	printf("4. Tim gia tri lon thu 2 trong mang\n");
    	printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
    	printf("6. Xoa phan tu tai mot vi tri cu the\n");
    	printf("7. Sap xep mang theo thu tu tang dan\n");
    	printf("8. Nhap vào mot phan tu xem phan tu do co ton tai trong mang hay khong\n");
    	printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan dung truoc, so le dung sau\n");
    	printf("10.Dao nguoc thu tu cua cac phan tu co trong mang\n");
    	printf("11. Thoat\n");
    	printf("Lua chon cua ban: ");
    	scanf("%d", &choice);
    	switch(choice) {
    		case 1:
    		    printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                if (n < 0 || n > 100) {
                    printf("So phan tu khong hop le");
                    break;
                }
                for (int i = 0; i < n; i++) {
                    printf("arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
    		case 2:
    			if (n==0){
    				printf("Mang rong\n");
    			}else{
    			printf("Gia tri cac phan tu trong mang: \n");
    			for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d,", i, arr[i]);
                }
                printf("\n");
                }
                break;
            case 5: 
                if (n==0){
    				printf("Mang rong\n");
    			}else{
                printf("Nhap gia tri phan tu moi: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them (0 - %d): ", n);
                scanf("%d", &position);
                if (position < 0 || position > n) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = n; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = value;
                n++;
                }
                printf("Them vao phan tu thanh cong\n");
                break;
            case 6: 
            	if (n==0){
    				printf("Mang rong, khong co phan tu de xoa.\n");
    			}else{
                printf("Nhap vi tri can xoa (0 - %d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = position; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                }
                printf("Xoa phan tu thanh cong\n");
                break;
            case 11:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    } while (choice != 11);

    return 0;
}
            
            	
            
        
    

            	
            	
                
                
                
            
            	
                
		    
		     
            
            	
                
    			
    			
    			 
    			
    			
    			
    	
    	
