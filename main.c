#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
#define _ERROR_INFO this program has been to the %d, stop the program, press OK quit.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	qust:
	    printf("精确全能计算器BETA1，预览版,完全由Mrang2009开发\n");
		printf("\t\t功能表\n");
		printf("\t 1.加减乘除\n");
		printf("\t 2.圆的面积周长\n");
		printf("\t 3.正弦数\n");
		printf("\t 4.解普通方程*\n");
		printf("\t 关于程序&防止盗版"); 
		printf("\t");
		printf("请选择：");
		scanf("%d",&a);
	if (a == 1){
		float a,b;

		char c;

		printf("输入表达式如a+(* -  /)b:\n");

		scanf("%f%c%f",&a,&c,&b);

		switch(c)

		{

		case'+':printf("%f\n",a+b);break;

		case'-':printf("%f\n",a-b);break;

		case'*':printf("%f\n",a*b);break;

		case'/':printf("%f\n",a/b);break;

		}
		

 

	/*some qustion...*/
	goto qust;
		
	 	
	
	}
	if (a == 3){
		float c,d,r;
		printf("请输入角度：");
		scanf("%f",&c);
		d=PI/180*c;
		r=sin(d);
		printf("sin(%f)=%f",c,r);
		goto qust;
		
	}
	if (a == 2){
		float ban;
		float mian;
		float zhou;
		printf("请输入圆形半径：");
		scanf("%f",&ban);
		mian=PI*ban*ban;
		zhou=2*PI*ban;
		printf("半长为%f的圆周长是%f，面积是%f。\n",ban,mian,zhou);
		goto qust;
	}
		
		
	
	 
}
