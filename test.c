#include<stdio.h>
#include<string.h>
#include<windows.h>
//��Դ�ļ����ڱ�����ϰ����ϰ��Ĵ���ע���ˣ��󲿷ֿ��ã�

//int main()
//{
// int a;
// int b;
// for(a=0,b=0;a=1;a++,b++)
//  printf("a");
// 
//}
//int main()
//{
//    int a;//��Сдת��
//	a=getchar();
//	a=a-32;
//	putchar(a);
//}



//int main()//����n�Ľ׳�
//{
//	int n=0;
//	int m=0;
//	int ret=1;
//		scanf("%d",&n);
//		for(m=1;m<=n;m++)
//		{
//			ret=ret * m;
//
//		}
//		printf("%d",ret);
//}


//int main()//����1��10�Ľ׳�֮��
//{
//	int n=1;
//	int m=0;
//	int ret=1;
//	int sum=0;
//		for(m=1;m<=10;m++)
//		{
//			for(;n<=m;n++){
//			ret=ret * n;
//			
//			}
//			sum=sum+ret;
//		}
//		printf("%d",sum);
//		return 0;
//}



//int main() �����α����ĳ���������һ����ǰȡ��
//{
// int a=20;
//	 int b= 3;
//	 int c;
//	 c= a/b;
//	 printf("%d",c);
//}



//int main()//���������������е��±꣬ʹ����ȡ�з��ӿ��˳�������ٶ�
//{
//int arr[10]={1,2,3,4,5,6,7,8,9,10};//�������飬����������������ܲ��ȶ�Ҳ��Ҫð�ݷ���������
//int a=0;
//int sz=sizeof(arr)/sizeof(arr[14]);
//int left =0;
//int right= sz -1;
//int mid=(left+right)/2;
//printf("������һ�����������������е��±�\n");
////printf("���������������Ӧ���������޴���\n");
//scanf("%d",&a);
//for(;left<=right;mid=(left+right)/2)
//	if(a<arr[mid])
//    {
//	    right=mid-1;
//    }
//	else if(a>arr[mid])
//	{
//		left=mid+1;
//	}
//	//else if (a==arr[0]||a==arr[10])//Ϊ���ܲ�ѯ����������������Э�����������Ż���
//	else
//	{
//		printf("�ҵ����±�Ϊ%d",mid);
//		break;
//	}
//	if(left>right)
//		printf("�޴���");
//
//}//�о������ӷ��QAQ

//�����������迼���±����⣬�ַ������ַ�������Ҫ���������\n��������±�ı�����
//int main ()//�����滻
//{
// int i;//���Ʊ���
// char arr1[]="welcome the world!";
// char arr2[]="##################";
// int sz=sizeof(arr1);
// int left=0;
// int right= strlen(arr1)-1;;
//	 for(i=0;i<=sz/2;i++)
//	 {
//		 arr2[left]=arr1[left];
//	     arr2[right]=arr1[right];
//		 printf("%s\n",arr2);
//		 Sleep(1000);//ͣ��1�� ��1000���룩��Ҫ����ͷ�ļ�include<windows.h>
//		 system("cls");//ִ��ϵͳ����ĺ���-cls �����Ļ
//		 left++;
//		 right--;
//	 }
//	 return 0;
//}
//int main()//ģ���û���¼����
//{
//     int i = 0;//���Ʊ���
//	 int arr[1]={816521};
//	 int password=0;
//	 printf("�������������");
//	for(i=0;i<3;i++)
//	{
//		scanf("%d",&password);
//		if(password==arr[0])
//		{
//			printf("������ȷ");
//			break;
//		}
//		else
//		{
//			printf("�����������������");
//		}
//		
//
//	}
//	if(i==3)
//		printf("���볬������");
//    return 0;
//}//�����ɵ�һ��


//int main()//��ܴ��룬ʧ���е�ʧ��
//{
//	int a;
//	int b;
//	int c;
//	int i;
//	scanf("%d%d%d",&a,&b,&c);
//    if(b>a){ 
//	 int tmp;
//	 tmp =a;
//     a=b;
//	 b = tmp;}
//	else if(c>a){
//	int tmp;
//	tmp = a;
//	a=c;
//	c=tmp;}
//	else if(c>b){
//	int tmp;
//	tmp = b;
//	b=c;
//	c=tmp;}
//	else{
//    int tmp;
//	tmp =b;
//	c=b;
//	b=tmp;
//	}
//	printf("%d%d%d",a,b,c);
//		       	
//}
//int main()//������ı���
//{
//	int a;
//	for(a=3;a<100;a++)
//		if(a%3==0)
//	printf("%d\n",a);
//		else
//        Sleep(300);
//}
int main()//�������������Լ��
{
 int a;
 int b;
 int r=0;
 scanf("%d",&a);
 scanf("%d",&b);
 for(;a%b;)
 {
 int tam;//������ʱ����
 r=a%b;
 tam=b;
 a=tam;
 b=r;
 }
 printf("%d",r);
}