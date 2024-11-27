#include <stdio.h>

int main(){
	int thang;
	double tienBD, laiSuat, tienLai = 0, tongTien = 0;
	
	printf( "\nNhap so tien ban dau: " );
	scanf("%lf", &tienBD);
	printf( "\nNhap so lai suat: " );
	scanf("%lf", &laiSuat);
	printf( "\nNhap so thang(1 - 1200): ");
	scanf("%d", &thang);
	
	if ( tienBD < 0 || thang < 0 || thang > 1200 || laiSuat < 0 ){
		printf( "\nThong tin nhap vao k hop le! " );
		return 1;
	}
	
	tongTien = tienBD;
	
	for ( int i =1; i<= thang; i++){
		tienLai = (laiSuat*tongTien)/100 ;
		tongTien += tienLai;    
	}
	
	printf( "\nSo tien lai: %.4f", tongTien - tienBD );
	printf( "\nTong tien nhan duoc sau %d thang: %.4f", thang, tongTien );
	
	return 0;
}
