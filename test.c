#include<stdio.h>
#include<string.h>
#include<windows.h>
//此源文件用于本人练习，练习后的代码注释了，大部分可用，

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
//    int a;//大小写转换
//	a=getchar();
//	a=a-32;
//	putchar(a);
//}



//int main()//计算n的阶乘
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


//int main()//计算1至10的阶乘之和
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



//int main() 在整形变量的除法计算中一律向前取整
//{
// int a=20;
//	 int b= 3;
//	 int c;
//	 c= a/b;
//	 printf("%d",c);
//}



//int main()//查找数字在数组中的下标，使用了取中法加快了程序查找速度
//{
//int arr[10]={1,2,3,4,5,6,7,8,9,10};//有序数组，如果是无序数组则功能不稳定也许要冒泡发法先排序？
//int a=0;
//int sz=sizeof(arr)/sizeof(arr[14]);
//int left =0;
//int right= sz -1;
//int mid=(left+right)/2;
//printf("请输入一个数来查找在数组中的下标\n");
////printf("如果输入后程序无响应则数组中无此数\n");
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
//	//else if (a==arr[0]||a==arr[10])//为了能查询数组两端做出的妥协，（代码已优化）
//	else
//	{
//		printf("找到了下标为%d",mid);
//		break;
//	}
//	if(left>right)
//		printf("无此数");
//
//}//感觉程序好臃肿QAQ

//整形数组无需考虑下标问题，字符串和字符数组需要考虑数组的\n所引起的下标改变问题
//int main ()//数组替换
//{
// int i;//控制变量
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
//		 Sleep(1000);//停留1秒 （1000毫秒）需要加上头文件include<windows.h>
//		 system("cls");//执行系统命令的函数-cls 清空屏幕
//		 left++;
//		 right--;
//	 }
//	 return 0;
//}
//int main()//模拟用户登录场景
//{
//     int i = 0;//控制变量
//	 int arr[1]={816521};
//	 int password=0;
//	 printf("请输入你的密码");
//	for(i=0;i<3;i++)
//	{
//		scanf("%d",&password);
//		if(password==arr[0])
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			printf("密码错误请重新输入");
//		}
//		
//
//	}
//	if(i==3)
//		printf("输入超过三次");
//    return 0;
//}//最轻松的一集


//int main()//大奋代码，失败中的失败
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
//int main()//输出三的倍数
//{
//	int a;
//	for(a=3;a<100;a++)
//		if(a%3==0)
//	printf("%d\n",a);
//		else
//        Sleep(300);
//}
int main()//求两个数的最大公约数
{
 int a;
 int b;
 int r=0;
 scanf("%d",&a);
 scanf("%d",&b);
 for(;a%b;)
 {
 int tam;//建立临时变量
 r=a%b;
 tam=b;
 a=tam;
 b=r;
 }
 printf("%d",r);
}