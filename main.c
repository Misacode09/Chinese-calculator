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
	    printf("��ȷȫ�ܼ�����BETA1��Ԥ����,��ȫ��Mrang2009����\n");
		printf("\t\t���ܱ�\n");
		printf("\t 1.�Ӽ��˳�\n");
		printf("\t 2.Բ������ܳ�\n");
		printf("\t 3.������\n");
		printf("\t 4.����ͨ����*\n");
		printf("\t ���ڳ���&��ֹ����"); 
		printf("\t");
		printf("��ѡ��");
		scanf("%d",&a);
	if (a == 1){
		float a,b;

		char c;

		printf("������ʽ��a+(* -  /)b:\n");

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
		printf("������Ƕȣ�");
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
		printf("������Բ�ΰ뾶��");
		scanf("%f",&ban);
		mian=PI*ban*ban;
		zhou=2*PI*ban;
		printf("�볤Ϊ%f��Բ�ܳ���%f�������%f��\n",ban,mian,zhou);
		goto qust;
	}
		
		
	
	 
}
