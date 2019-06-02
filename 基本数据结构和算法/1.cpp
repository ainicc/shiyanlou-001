/*
#include <iostream>
using namespace std;
int main()
{
	int s,p,i,m,c,n,js,k,ii;
	cout<<"请输入一个个位数字不为5的实数,且p<100000:";
	cin>>p;
	s=1;
	do
	{
		k=1;
		i=s*p;
		m=0;
		n=0;
		js=1;
		c=0;
		do
		{
			if(i%10==1)
				m++;
			else if(i%10==0)
			{
				ii=i;
				do
				{
					ii=ii/10;
					if(ii%10==0)
						c++;
					else if(c>=1&&(ii%10!=0))
						{
							n=45454545;
							break;
					    }
					else if(c==11)
						js=0;
						break;
				}while(c);
				n--;
			}
			else
				js=0;
			n++;
			i=i/10;
		}while(js);
		if(n==m&&n!=0)
			{
				k=0;
				cout<<endl<<s<<"  "<<m;
		    }
		else
			s++;
	}while(k);
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
void cl(int a[],int q,int m);
int nasa(int a[],int m);
int main()
{
	int m,q=0;
	cout<<"请输入一个整数:";
	cin>>m;
	m=m*m*m;
	int a[100000];
	q=nasa(a,m);
	cl(a,q,m);
	return 0;
}
int nasa(int a[],int m)
{
	int l=1,b=1;
	
	a[0]=1;
	for(int i=3;i<=m;i++)
	{
		b=1;
		for(int k=2;k<=i-1;k++)
		{
			if(i%k==0)
			{
				
			    b=0;
				break;
			}
		}
		if(b!=0)
		{
			a[l]=i;
			l++;
		}
	}
	return l+2;
}
void cl(int a[],int q,int m)
{
	int w,e=0,r=0;
	for(int i=0;i<=q-1;i++)
	{
		w=0;
		for(int j=i;j<=q-1;j++)
		{
			w=a[j]+w;
			if(w==m)
			{
				r=j;
				break;
			}
		}
		if(w==m)
		{
			e=i;
			break;
		}
	}
	for(int mm=e;mm<=r;mm++)
	{
		cout<<a[mm]<<" ";
	}
}
*/
//递推算法走楼梯;
/*
#include <iostream>
using namespace std;
int main()
{
	
	int i,d,a=1,b=2,c=4;
	cout<<"请输入楼阶数:";
	cin>>i;
	if(i==1)
		d=a;
	else if(i==2)
		d=b;
	else if(i==3)
		d=c;
	else
		for(int w=4;w<=i;w++)
		{
			d=a+b+c;
			a=b;b=c;c=d;
		}
		cout<<endl<<"一共有"<<d<<"种走法";
}
*/
//用迭代法验证谷角猜想
/*
#include <iostream>
using namespace std;
int main()
{
	int n,w=1;
	cout<<"请输入一个正整数：";
	cin>>n;
	do
	{
		if(n%2==0)
		{
			n=n/2;
			cout<<n<<endl;
		}
		else
		{
			n=n*3+1;
			cout<<n<<endl;
		}
		if(n==1)
			w=0;
	}while(w);
return 0;
}
*/

//用迭代法计算埃及分数
/*
#include <iostream>
using namespace std;
int main()
{
	int a,b,w,h=1;
	float zhong;
	cout<<"请分别输入互质分数的分子和分母：";
	cin>>a;
	cin>>b;
	while(h)
	{
		for(int i=1;;i++)
		{
			if((a*i<b)&&(a*(i+1))>b)
				{
					w=i+1;
					break;
			    }
			if(a*i==b)
			{
				h=0;
				break;
			}
		}
		
		if(h==0)
			cout<<1<<"/"<<b/a;
		else
		{
			a=(a*w)-b;
		    b=w*b;
			cout<<1<<"/"<<w<<"+";
		}
	}
	return 0;
}
*/
//用迭代二分法求方程近似跟
/*
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int x1=0,x2=2,x3;
	do
	{
		x3=(x1+x2)/2;
		if(((x1*x1*x1-x1-1)*(x3*x3*x3-x3-1))>0)
			x1=x3;
		else
			x2=x3;
	}while(abs(x2-x1)>0.0001);
	cout<<"x*x*x-x-1的近似跟为"<<x1;
	return 0;
}
*/
//用迭代算法求猴子分椰子
//注意for循环的临界条件不要用在循环中会改变的变量；
//一定要注意在循环中哪些量是每循环一次都会、发生改变的；
//注意求余运算与求商运算
/*
#include <iostream>
using namespace std;
int main()
{
	int n=1,s,w,p,j;
	while(1)
	{
		s=0;
		w=0;
		j=n;
		for(int i=n;i<=j+5;i++)
		{
			p=i;
			w=n*5+1;
			if(w%4==0)
				n=w/4;
			else
			{
				n=j;
				break;
			}
				p=i;
		}
		if(p==j+5)
		{
			cout<<"至少有"<<w<<"个椰子";
		    break;
		}
		else
			n++;
	
	}
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int jw,jm,money,x=0;
	jw=5;
	jm=3;
	for(int i=0;i<=20;i++)
	{
		for(int n=0;n<=33;n++)
		{
			for(int l=0;l<=300;l=l+3)
			{
				money=i*jw+n*jm+l/3;
				if((i+n+l)==100&&money==100)
				{
					cout<<"鸡翁有:"<<i<<" "<<"鸡母有"<<n<<" "<<"鸡雏有"<<l<<endl;
					x++;
				}
			}
		}
	}
	cout<<"共有"<<x<<"种方法"<<endl;
}
*/
//穷举法解决逻辑犯罪问题,穷举每一个人的犯罪还是不犯罪，再利用条件控制进行输出;
/*
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	for(a=0;a<=1;a++)
	{
		for(b=0;b<=1;b++)
		{
			for(c=0;c<=1;c++)
			{
				for(d=0;d<=1;d++)
				{
					for(e=0;e<=1;e++)
					{
						for(f=0;f<=1;f++)
						{
						if(a==1||b==1)
						{
							if(a==0||d==0)
							{
								if((a==1||e==1)&&(e==1||f==1)&&(a==1||f==1))
								{
									if((b==1&&c==1)||(b==0&&c==0))
									{
										if((c==1&&d==0)||(c==0&&d==1))
										{
											if((d==0&&e==0)||d==1)
											{
												if(a==1)
													cout<<"a"<<endl;
												if(b==1)
													cout<<"b"<<endl;
												if(c==1)
													cout<<"c"<<endl;
												if(d==1)
													cout<<"d"<<endl;
												if(e==1)
													cout<<"e"<<endl;
												if(f==1)
													cout<<"f"<<endl;
												cout<<endl<<endl;
											}
										}
									}
								}
							}
						}
						}
					}
				}
			}
		}
	}
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				for(d=1;d<=5;d++)
				{
					for(e=1;e<=5;e++)
					{
						if((b==2&&a!=3)||(b!=2&&a==3))
						{
							if((b==2&&e!=4)||(b!=2&&e==4))
							{
								if((c==1&&d!=2)||(c!=1&&d==2))
								{
									if((c==5&&d!=3)||(c!=5&&d==3))
									{
										if((e==4&&a!=1)||(e!=4&&a==1))
										{
											if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
											{
											    cout<<"A="<<a<<endl;
											    cout<<"B="<<b<<endl;
											    cout<<"C="<<c<<endl;
											    cout<<"D="<<d<<endl;
											    cout<<"E="<<e<<endl;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
return 0;
}
*/
//用穷举法验证四方定理
/*
#include <iostream>
using namespace std;
int main()
{
	int q,w=0;
	cout<<"请输入一个自然数：";
	cin>>q;
	for(int a=0;a<=q/2;a++)
	{
		for(int b=0;b<=a;b++)
		{
			for(int c=0;c<=b;c++)
			{
				for(int d=0;d<=c;d++)
				{
					if((a*a+b*b+c*c+d*d)==q)
					{
						cout<<a<<"*"<<a<<"+"<<b<<"*"<<b<<"+"<<c<<"*"<<c<<"+"<<d<<"*"<<d<<"="<<q<<endl;
						break;
					}
				}
			}
		}
	}
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a,b,n=0,m=0;
	cout<<"请分别输入a和b:";
	cin>>a;
	cin>>b;
	for(int i=1;i<=a-1;i++)
	{
		if(a%i==0)
		{
			n=n+i;
		}
	}
	for(int i=1;i<=b-1;i++)
	{
		if(b%i==0)
		{
			m=m+i;
		}
	}
	if(m==a&&n==b)
		cout<<a<<" "<<b<<"是一对亲和数";
	else
		cout<<a<<" "<<b<<"不是一对亲和数";
return 0;
}
*/
/*
//如果想让某个几位数没重复的数字可以利用和的关系
//123456789其和等于45且1*2*3*4*5*6*7*8*9==362880就说明没重复的
//如果把其各个位数进行比较就太麻烦了；
//也可以用数组把9个数字全部赋给数组；然后再去检查数组的元素是否含有1-9的全部数字
//也可以利用数组进行计数；先把数组的各个元素值都设为零，再用元素当遍历值进行查找自加；
*/
//利用穷举法，，注意穷举法中的范围问题
/*
#include <iostream>
using namespace std;
int main()
{
	int m;
	for(int a=1;a<=9;a++)
		for(int b=1;b<=9;b++)
			for(int c=1;c<=9;c++)
				for(int d=1;d<=9;d++)
					for(int e=1;e<=9;e++)
						for(int f=1;f<=9;f++)
							for(int g=1;g<=9;g++)
								for(int h=1;h<=9;h++)
									for(int i=1;i<=9;i++)
									{
										m=1;
										if(((a+b+c+d+e+f+g+h+i)==45)&&((a*b*c*d*e*f*g*h*i)==362880))
										{
											for(int o=1;o<=b;o++)
												m=m*a;
											if(((m+(c*10+d)/(e*10+f)-(g*10+h)*i)==0)&&(c*10+d)%(e*10+f)==0)
												cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<endl;
										}
									}
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	float n,a=1.0;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		a=a*(2*n/(2*n-1))*(2*n/(2*n+1));
		n--;
	}
	cout<<a*2;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100];
	for(int i=0;i<=99;i++)
		a[i]=0;
	for(int i=1;i<=100;i++)
		for(int n=0;n<=99;n++)
			if((n+1)%i==0)
			{
				if(a[n]==0)
					a[n]=1;
				else
					a[n]=0;
			}
	for(int i=0;i<=99;i++)
		if(a[i]==1)
			cout<<i+1<<" ";
	return 0;
}
*/
//利用了for while while循环的嵌套使用来 计算一个数（以及小于它的数）的各位的使用次数
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10],n,m,js,y,l;
	for(int i=0;i<=9;i++)
		a[i]=0;
	cout<<"请输入本书的总页码:";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		y=1;
		l=i;
		while(y)
		{
			js=0;
			if(l%10!=0)
				a[l%10]++;
			else
			{
				m=l;
				while(1)
				{
					m=m/10;
					if(m%10==0)
						js=js+1;
					else
					{
						y=1;
						a[0]++;
						break;
					}
					if(js==20)
						{
							y=0;
						    break;
					    }
				}
			}
			l=l/10;
		}
		cout<<i<<endl;
	}
	for(int i=0;i<=9;i++)
		cout<<i<<"用了"<<a[i]<<"次"<<endl;
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10]={0};
	int n,t;
	cout<<"输入页码数：";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		t=i;
		while(t)
		{
			a[t%10]++;
			t=t/10;
		}
	}
	for(int i=0;i<=9;i++)
		cout<<i<<"用了"<<a[i]<<"次"<<endl;
	return 0;
}
*/
/*
#include <iostream>
#include <time.h>
using namespace std;
struct puke
{
	int num;
	char s;
};
int main()
{
	puke w[54],*p;
	p=w;
	for(int i=0;i<=52;i++)
	{
		p->num=i%13+1;
		p->s=i/13+3;
		p++;
	}
	(p+52)->num=14;
	(p+52)->s=' ';
	(p+53)->num=15;
	(p+53)->s=' ';
	int j;
	srand(time(0));
	for(int i=0;i<=53;i++)
	{
		puke ttt;
		j=rand()%54;
		ttt=w[i];
		w[i]=w[j];
		w[j]=ttt;
	}
	p=w;
	for(int i=0;i<54;i++)
	{
		cout<<p->s;
		if(p->num>=2&&p->num<=10)
			cout<<p->num<<" ";
		else
			switch(p->num)
		{
			case 1:cout<<'A';break;
			case 11:cout<<"J";break;
			case 12:cout<<"Q";break;
			case 13:cout<<"K";break;
			case 14:cout<<"s";break;
			case 15:cout<<"S";break;
		}
		cout<<endl;
	}
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10],b;
	cout<<"请连续输入十个整数：";
	for(int i=0;i<=9;i++)
		cin>>a[i];
	b=a[0];
	for(int i=1;i<=9;i++)
		a[i-1]=a[i];
	a[9]=b;
	for(int i=0;i<=9;i++)
		cout<<a[i]<<" ";
return 0;
}
*/
//注意有关数组的一些操作时可以考虑设两个变量双向查找，如果两个变量不在i<j时结束while 循环
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10],p,zhong;
	cout<<"请输入十个整数：";
	for(int i=0;i<=9;i++)
		cin>>a[i];
	cout<<endl<<"请输入需要左移的位数：";
	cin>>p;
	for(int i=1;i<=p;i++)
	{
		zhong=a[0];
		for(int o=1;o<=9;o++)
			a[o-1]=a[o];
		a[9]=zhong;
	}
	for(int i=0;i<=9;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10],zhong,w=0,u=9;
	for(int i=0;i<=9;i++)
		cin>>a[i];
	for(int i=1;i<=u;i++)
	{
		if(a[i]<a[w])
		{
			zhong=a[w];
			a[w]=a[i];
			a[i]=zhong;
			w=i;
		}
		else
		{
			zhong=a[u];
			a[u]=a[i];
			a[i]=zhong;
			u--;
			i--;
		}
	}
	for(int i=0;i<=9;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/
//插入法排序；
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10],zhong;
	cout<<"请输入十个整数：";
	for(int i=0;i<=9;i++)
		cin>>a[i];
	for(int i=0;i<=9;i++)
	{
		for(int n=0;n<=i-1;n++)
		{
			if(i>0)
			{
				if(a[i]<a[0])
				{
					zhong=a[i];
					for(int n=i-1;n>=0;n--)
					     a[n+1]=a[n];
					a[0]=zhong;
					break;
				}
				else if(a[n]<a[i]&&a[i]<a[n+1])
				{
					zhong=a[i];
					for(int m=i-1;m>=n+1;m--)
						a[m+1]=a[m];
					a[n+1]=zhong;
					break;
				}
			}
		}
	}
	for(int i=0;i<=9;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10],t,j;
	for(int i=0;i<=9;i++)
		cin>>a[i];
	for(int i=1;i<=9;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0&&t<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(int i=0;i<=9;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//选择法排序
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10],zhong;
	for(int i=0;i<=9;i++)
		cin>>a[i];
	for(int i=0;i<=8;i++)
	{
		for(int n=i+1;n<=9;n++)
		{
			if(a[n]<a[i])
			{
				zhong=a[i];
				a[i]=a[n];
				a[n]=zhong;
			}
		}
	}
	for(int i=0;i<=9;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//插入法与选择法的操作目标不同，选择法与插入法都是把序列分为有序序列和无序序列
//但选择法的操作目标为有序序列的最后一个数，插入法的操作目标为无序序列的第一个数；
//冒泡法
/*
//冒泡法的目标是有序序列的第一个元素，不过它和选择和插入不同，其有序序列在无需序列后面；
#include <iostream>
using namespace std;
int main()
{
	int a[10],zhong;
	for(int i=0;i<=9;i++)
		cin>>a[i];
	 for(int i=0;i<=8;i++)
	 {
		 for(int n=0;n<=8-i;n++)
		 {
			 if(a[n]>a[n+1])
			 {
				 zhong=a[n];
				 a[n]=a[n+1];
				 a[n+1]=zhong;
			 }
		 }
	 }
	 for(int i=0;i<=9;i++)
		 cout<<a[i]<<" ";
	 cout<<endl;
	 return 0;
}
*/
//用二分查找法来查找数组中的某一元素
//注意用二分查找法查找的数组必须是有顺序的数组;
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int x=0,y=9,cx;
	for(int i=0;i<=9;i++)
		cin>>a[i];
	cout<<"请输入你所要查找的数：";
	cin>>cx;
	while(x!=y)
	{
		if(a[(y+x)/2]<cx)
			x=((y+x)/2)+1;
		else if(a[(y+x)/2]>cx)
			y=((y+x)/2)-1;
		if(a[(x+y)/2]==cx)
		{
			cout<<"下标为:"<<(x+y)/2;
			break;
		}
	    if(x==y)
			cout<<"无此数";
	}
return 0;
}
*/
//查找一个序列的最大或最小元素时，可以把序列中任意一个元素先假设为最大或最小的元素
//然后用这个假设的与序列中每一个元素进行比较，如果满足条件进行交换；
/*
#include <iostream>
using namespace std;
int main()
{
	int a[10][10],m,n,max,x,y,min,q,w;
	cout<<"请分别输入你想操作的二维数组的行和列:";
	cin>>m>>n;
	cout<<"请为二维数组导入数据："<<endl;
	for(int i=0;i<=m-1;i++)
		for(int u=0;u<=n-1;u++)
			cin>>a[i][u];			
	for(int i=0;i<=m-1;i++)
	{
		max=a[i][0];
		x=i;
		y=0;
		for(int u=0;u<=n-2;u++)
		{
		    if(max<a[i][u+1])
			{
				max=a[i][u+1];
				x=i;
				y=u+1;
			}
		}
		min=a[x][y];
		q=x;
		for(int i=0;i<=m-2;i++)
		{
		    if(min>a[i+1][y])
			{
				min=a[i+1][y];
				q=i+1;
			}
		}
		if(q==x)
		{
			cout<<max<<" "<<a[x][y]<<endl<<min<<" "<<a[q][y];
			cout<<"此数组的鞍点为："<<"a"<<"["<<x<<"]"<<"["<<y<<"]"<<"="<<a[x][y];
			break;
		}
	}
	return 0;
}
*/
//查找数组中指定的元素
//利用右上角的元素与查找元素比较，从而不断缩小范围;
//注意利用这种方法的前提是数组每一行逐渐增大，每一列逐渐增大
/*
#include <iostream>
using namespace std;
int main()
{
	int a[4][4],x=0,y=3,cx;
	cout<<"请输入数组中的元素："<<endl;
	for(int i=0;i<=3;i++)
		for(int n=0;n<=3;n++)
			cin>>a[i][n];
	cout<<"请输入需要查询的数字：";
	cin>>cx;
	while(1)
	{
	     if(a[x][y]>cx)
			y--;
		 else if(a[x][y]<cx)
			x++;
		 else
			{
				cout<<"a"<<"["<<x<<"]"<<"["<<y<<"]"<<"="<<a[x][y];
				break;
			}
		 if(x>3||y<0)
		 {
			 cout<<"无此数"<<endl;
		     break;
		 }
	}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
class student
{
private:
	int num;
	float cj;
public:
	void input();
	student::student():num(0),cj(0){};        //普通成员函数，构造函数，析构函数，友元函数；
	                                          //友元函数不属于任何类；所以在定义它的时候和普通函数一样，不需要作用域限制符。
	~student(){};
	friend void max(student *p);
};
void student::input()
{
	cin>>num>>cj;
}
void max(student *p)
{
	int m=p->cj,x;
	for(int i=1;i<=4;i++)
	{
		if(m<(p+i)->cj)
		{
			m=(p+i)->cj;
			x=i;
		}
	}
	cout<<"五名学生中成绩最高的是："<<(p+x)->num;
}
int main()
{
	student a[5];
	cout<<"请分别输入五个学生的学号与成绩："<<endl;
	for(int i=0;i<=4;i++)
		a[i].input();
	max(a);
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int n,k,len1,x=0,w,q;
	cout<<"请分别输入原木的数目，小段木头的数目，以及原木的长度：";
	cin>>n>>k>>len1;
	if(n>=k)
		cout<<"小段木头的长度为:"<<len1<<"cm"<<endl;
	else
	{
		if(k%n!=0)
			x=1;
		else
			x=0;
		 x=x+k/n;
		 do
		 {
			 w=len1/x;
			 q=len1%x;
			 len1--;
		  }while(q);
		  cout<<"小段木头的长度为:"<<w<<"cm"<<endl;
	}
	return 0;
}
*/
//用二分法进行木材加工处理
/*
#include <iostream>
using namespace std;
int main()
{
	int n,k,mid,len[100000],right=0,num;
	cout<<"请输入分别输入原木的数目和小木段的数目：";
	cin>>n>>k;
	for(int i=0;i<=n-1;i++)
	{
		cin>>len[i];
		if(right<len[i])
			right=len[i];
	}
	int left=0;
	while(left+1<right)
	{
		mid=(left+right)/2;
		num=0;
		for(int i=0;i<n;i++)
		{
			if(num>=k)
				break;
			num=num+len[i]/mid;
		}
		if(num>=k)
			left=mid;
		else
			right=mid;
	}
	cout<<"小木段的最大长度为："<<left<<endl;
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100],n,h=0,max=0,g=0,x=0,y=0;
	cout<<"输入数列中有几个元素：";
	cin>>n;
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=0;i<=n-1;i++)  //先默认把所有的元素总和当做最大值
		max=max+a[i];
	for(int i=0;i<=n-1;i++)   //从左往右扫描，扫描完一趟之后在继续把左起点右移一个，再继续扫描；
	{
		h=0;
		for(int m=i;m<=n-1;m++)
		{
			h=a[m]+h;            //只要在扫描过程中有比原最大值大的就把它设为最大值，并记录下这个最大值的左起点与右终点
			if(h>max)            //然后再继续往后扫描；
			{
				x=i;
				y=m;
				max=h;
			}
			else if(h==max)      //如果在扫描过程中有与最大值相等的，那就看他的右值与左值的差（为了比较其谁包含的元素多）
			{                    //如果这个新和的元素个数比原来的和元素个数多，则把新和的左值与右值记录下来；然后继续扫描；
				if(m-i>y-x)
					{
						x=i;
						y=m;
				    }
			}
		}
	}
	cout<<"最大连续字段和为："<<max<<" "<<"共有元素"<<y-x+1<<"个";
	for(int i=x;i<=y;i++)
		cout<<a[i]<<" ";
return 0;
}
*/
//奇数阶魔法方阵
/*
#include <iostream>
using namespace std;
int main()
{
	int q[100][100]={0},m,n,x,y,a,b;
	cout<<"请输入魔法方阵是的行和列(m和n都为奇数)：";
	cin>>m>>n;
	y=m/2;
	x=0;
	q[x][y]=1;
	for(int i=2;i<=m*m;i++)
	{
		if(x==0)
		{
			if(y==m-1)
				x=1;
			else
			{
				a=m-1;
			    b=y+1;
			    if(q[a][b]==0)
				{
					x=a;
					y=b;
				}
				else
					x++;
			}
		}
		else if(x!=0&&y==m-1)
		{
			a=x-1;
			b=0;
			if(q[a][b]==0)
			{
				x=a;
				y=b;
			}
			else
				x++;
		}
		else
		{
			a=x-1;
			b=y+1;
			if(q[a][b]==0)
			{
				x=a;
				y=b;
			}
			else
				x++;
		}
		q[x][y]=i;
	}
	for(int i=0;i<=m-1;i++)
		for(int o=0;o<=n-1;o++)
		{
			cout<<q[i][o]<<" ";
			if(o==n-1)
				cout<<endl;
		}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100],m,n,k=1,zhong;
	cout<<"请输入双偶数魔法方阵的行和列(行和列均为偶数)：";
	cin>>m>>n;
	for(int i=0;i<=m-1;i++)
		for(int l=0;l<=m-1;l++)
		{
			a[i][l]=k;
			k++;
		}
	for(int x=1;x<=m-2;x++)
		for(int y=0;y<=m/2-1;y++)
		{
			zhong=a[x][y];
			a[x][y]=a[x][m-1-y];
			a[x][m-1-y]=zhong;
		}
	for(int x=0;x<=m/2-1;x++)
		for(int y=1;y<=m-2;y++)
		{
			zhong=a[x][y];
			a[x][y]=a[m-1-x][y];
			a[m-1-x][y]=zhong;
		}
	for(int i=0;i<=m-1;i++)
		 for(int l=0;l<=m-1;l++)
		    {
			   cout<<a[i][l]<<" ";
			   if(l==m-1)
				   cout<<endl;
	        }
return 0; 
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int q[100][100],n,x,y;
	cout<<"请输入需要构造的蛇形方阵的阶数:";
	cin>>n;
	int z=n*n;
	for(x=0;x<=n-1;x++)
	{
		if((x+2)%2==0)
		{
		     for(y=n-1;y>=0;y--)
			 {
				 q[x][y]=z;
				 z--;
			 }
		}
		else
		{
			for(y=0;y<=n-1;y++)
			{
				q[x][y]=z;
				z--;
			}
		}
	}
	for(int i=0;i<=n-1;i++)
		for(int w=0;w<=n-1;w++)
		{
			cout<<q[i][w]<<" ";
			if(w==n-1)
				cout<<endl;
		}
return 0;
}
*/
//斜线型方阵                                                 错误的错误的错误的错误的错误的错误的错误的
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100]={0},n,w=1,h=2;
	cout<<"请输入你想得到的蛇形魔法方阵的阶数：";
	cin>>n;
	int x=n-1,y=0;
	a[x][y]=1;
	for(int i=1;i<=n;i++)
	{
		for(int q=1;q<=w;q++)
		{
			if(q==w)
			{
				if(w%2!=0)
				{
				    x=x-1;
				    a[x][y]=h;
				    h++;
				    w=w+1;
				}
				else
				{
					y=y+1;
					a[x][y]=h;
					h++;
					w++;
				}
			}
			else
			{
				for(int i=1;i<=w-2;i++)
				{
				    if(w%2!=0)
				    {
					    x--;
					    y--;
					    a[x][y]=h;
					    h++;
						if(i==w-2)
							w++;
				    }
				}
				for(int i=1;i<=w-2;i++)
				{
					if(w%2==0)
					{
						x++;
						y++;
						a[x][y]=h;
						h++;
						if(i==w-2)
							w++;
					}
				}
			}
		}
	}
	cout<<"dfgdfg";
	for(int i=0;i<=n-1;i++)
		for(int w=0;w<=n-1;w++)
		{
			cout<<a[i][w]<<" ";
			cout<<endl;
			if(w==n-1)
				cout<<endl;
		}
		
	return 0;
}
*/
//回旋方阵
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100],n,w=4,x=0,y=0,e=1,kk,first=e;
	cout<<"请输入你索要生成的回旋方阵的阶数";
	cin>>n;
	kk=n;
	for(int i=1;i<=(kk+1)/2;i++)
	{
			if(n==1)
			{
				a[x][y]=e;
				break;
			}
			else
			{
				e++;
			    for(int i=1;i<=n-1;i++)
			    {
				    x++;
				    a[x][y]=e;
				    e++;
			    }
			    for(int i=1;i<=n-1;i++)
			    {
				    y++;
				    a[x][y]=e;
				    e++;
			    }
			    for(int i=1;i<=n-1;i++)
			    {
				    x--;
				    a[x][y]=e;
				    e++;
			    }
			    for(int i=1;i<=n-1;i++)
			    {
					if(i==n-1)
					{
						a[x][y-1]=e-4*(n-1);
						x++;
					}
					else
					{
				        y--;
				        a[x][y]=e;
				        e++;
					}
			    }
			    n=n-2;
		}
	}
	for(int i=0;i<=kk-1;i++)
		for(int w=0;w<=kk-1;w++)
		{
			cout<<a[i][w]<<" ";
			if(w==kk-1)
				cout<<endl;
		}
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100],n,x,y,e=1,dd,w;
	cout<<"请输入你所要构造的从内到外回旋方阵的阶数:";
	cin>>n;
	dd=n;
	w=2;
	if(n%2==0)
	{
		for(int i=1;i<=dd/2;i++)
		{
			x=n/2-1;
			if(n==dd)
				y=n/2;
			else
				y++;
				for(int i=1;i<=w-1;i++)
				{
					y--;
					a[x][y]=e;
					e++;
				}
				for(int i=1;i<=w-1;i++)
				{
					x++;
					a[x][y]=e;
					e++;
				}
				for(int i=1;i<=w-1;i++)
				{
					y++;
					a[x][y]=e;
					e++;
				}
				for(int i=1;i<=w-1;i++)
				{
					x--;
					a[x][y]=e;
					e++;
				}
			n=n-2;
			w=w+2;
		}
	}
	for(int i=0;i<=dd-1;i++)
		for(int n=0;n<=dd-1;n++)
		{
			cout<<a[i][n]<<"  ";
			if(n==dd-1)
				cout<<endl;
		}
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100]={0},n,num=0,x=-1,y=0;
	cout<<"请输入所需要构造的回旋方阵的阶数:";
	cin>>n;
	while(num<n*n)
	{
		while(a[x+1][y]==0&&(x+1)<n)
			a[++x][y]=++num;
		while(a[x][y+1]==0&&(y+1)<n)
			a[x][++y]=++num;
		while(a[x-1][y]==0&&(x-1)>=0)
			a[--x][y]=++num;
		while(a[x][y-1]==0&&(y-1)>=0)
			a[x][--y]=++num;
	}
	for(int i=0;i<=n-1;i++)
		for(int s=0;s<=n-1;s++)
		{
			cout<<a[i][s]<<" ";
			if(s==n-1)
				cout<<endl;
		}
return 0;
}
*/
//简短折叠方阵
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100]={0},x=-1,y=0,n,m=0,e=1;
	cout<<"请输入简短折叠方阵的阶数：";
	cin>>n;
	while(e<n*n)
	{
		x=0;
		y=m;
		a[x][y]=e;
		e++;
		while(x+1<=m)
			a[++x][y]=e++;
		while(y-1>=0)
			a[x][--y]=e++;
		m++;
	}
	for(int i=0;i<=n-1;i++)
		for(int m=0;m<=n-1;m++)
		{
			cout<<a[i][m]<<"  ";
			if(m==n-1)
				cout<<endl;
		}
		return 0;
}
*/
//回转折叠方阵

/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100],x=0,y=0,e=2,n,m=1;
	cout<<"请输入你所要造的折叠方阵的阶数:";
	cin>>n;
	a[x][y]=1;
	while(e<n*n)
	{
		if(m%2!=0)
		{
			x=0;
			y=m;
			a[x][y]=e;
			e++;
			while(x+1<=m)
				a[++x][y]=e++;
			while(y-1>=0)
				a[x][--y]=e++;
			m++;
		}
		else
		{
			x=m;
			y=0;
			a[x][y]=e;
			e++;
			while(y+1<=m)
				a[x][++y]=e++;
			while(x-1>=0)
				a[--x][y]=e++;
			m++;
		}
	}
	for(int i=0;i<=n-1;i++)
		for(int m=0;m<=n-1;m++)
		{
			cout<<a[i][m]<<"  ";
			if(m==n-1)
				cout<<endl;
		}
		return 0;
}
*/
//环形对称方阵
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100],n,x=1,y=0;
	cout<<"请输入要构建一个几阶的环形对称方阵：";
	cin>>n;
	int m=n-2;
	for(int i=1;i<=n/2;i++)
	{
		x=i;
		a[x-1][y]=0;
		a[n-x][y]=0;
		for(int l=1;l<=m;l++)
		{
			a[x][y]=i;
			a[y][x]=i;
			x++;
		}
		y++;
		m=m-2;
	}
	y=n-1;
	m=n-2;
	for(int i=1;i<=n/2;i++)
	{
		x=i;
		a[x-1][y]=0;
		a[n-x][y]=0;
		for(int l=1;l<=m;l++)
		{
			a[x][y]=i;
			a[y][x]=i;
			x++;
		}
		y--;
		m=m-2;
	}
	a[n/2][n/2]=0;
	for(int i=0;i<=n-1;i++)
		for(int m=0;m<=n-1;m++)
		{
			cout<<a[i][m]<<"  ";
			if(m==n-1)
				cout<<endl;
		}
return 0;
}
*/
//三角形对称方阵
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100][100],x=1,y=0,n,f;
	cout<<"请输入你想要构建的三角形对称方阵:";
	cin>>n;
	int m=n-2;
	for(int i=1;i<=n/2;i++)
	{
		x=i;
		f=0;
		a[x-1][y]=0;
		a[n-x][y]=0;
		for(int l=1;l<=m;l++)
		{
			if(l<=m/2+1)
			{
				f++;
			    a[x][y]=f;
			    a[y][x]=f;
			}
			else
			{
				f--;
				a[x][y]=f;
				a[y][x]=f;
			}
			x++;
		}
		y++;
		m=m-2;
	}
	y=n-1;
	m=n-2;
	for(int i=1;i<=n/2;i++)
	{
		x=i;
		f=0;
		a[x-1][y]=0;
		a[n-x][y]=0;
		for(int l=1;l<=m;l++)
		{
			if(l<=m/2+1)
			{
				f++;
			    a[x][y]=f;
			    a[y][x]=f;
			}
			else
			{
				f--;
				a[x][y]=f;
				a[y][x]=f;
			}
			x++;
		}
		y--;
		m=m-2;
	}
	a[n/2][n/2]=0;
	for(int i=0;i<=n-1;i++)
		for(int m=0;m<=n-1;m++)
		{
			cout<<a[i][m]<<"  ";
			if(m==n-1)
				cout<<endl;
		}
return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[100][100]={0},x=0,y=0,n,c=1;
	cout<<"请输入想输出多少行杨辉三角;";
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		a[i][0]=1;
		a[i][c-1]=1;
		for(int j=1;j<=c-2;j++)
		{
			if(a[i][j]==0)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		c++;
	}
	for(int i=0;i<=n-1;i++)
		for(int k=0;k<=n-1;k++)
		{
			if(a[i][k]!=0)
				cout<<setw(5)<<a[i][k];
			if(k==n-1)
				cout<<endl;
		}
return 0;
}
*/
//线性表的插入操作
/*
#include <iostream>
using namespace std;
struct student 
{
	int a[100];
	int length;
};
int main()
{
	student a;
	int n;
	int nn;
	int q;
	for(int i=0;i<=99;i++)
		a.a[i]=0;
	a.length=0;
	cout<<"请输入你想要在线性表中增加几个元素:";
	cin>>n;
	cout<<"请输入你所要增加的元素:";
	for(int i=0;i<=n-1;i++)
	{
		cin>>a.a[i];
		a.length++;
	}
	cout<<"请输入你想要把元素插入到第几个位置:";
	while(1)
	{
		cin>>nn;
		if(nn>a.length)
			cout<<"超出检索范围,请重新输入!";
		else 
			break;
	}
	cout<<"请输入你所要插入的元素:";
	cin>>q;
	for(int i=a.length;i>=nn;i--)
		a.a[i]=a.a[i-1];
	a.a[nn-1]=q;
	a.length++;
	cout<<"线性表插入元素之后的情况为:";
	for(int i=0;i<=a.length-1;i++)
		cout<<a.a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//线性表的删除操作
//删除线性表中的负数
/*
#include <iostream>
using namespace std;
struct  student
{
	int a[100];
	int length;
};
int main()
{
	student a={{-2,-5,5,6,9,8,-2,-3,3,47,55,-2},12};
	int bj=1;
	while(bj)
	{
		for(int i=0;i<=a.length-1;i++)
		{
			if(a.a[i]<0)
			{
				for(int n=i;n<=a.length-1;n++)
					a.a[n]=a.a[n+1];
				a.length--;
				bj=1;
				break;
			}
			else
				bj=0;
		}
	}
	cout<<"删除完负数之后线性表的情况为:";
	for(int i=0;i<=a.length-1;i++)
		cout<<a.a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//线性表删除指定个数的元素
/*
#include <iostream>
using namespace std;
struct num
{
	int a[100];
	int length;
};
int main()
{
	int n,m;
	num a={{1,5,9,12,45,88,95,888,521,445,213},11};
	cout<<"请输入起始元素n的位置(n>=1):";
	cin>>n;
	cout<<"请输入删除元素的个数:";
	while(1)
	{
		cin>>m;
		if(m+n-1>a.length)
			cout<<"删除元素超过索引范围,请重新输入!"<<endl;
		else
			break;
	}
	while(1)
	{
		for(int i=n-1;i<=a.length-2;i++)
		    a.a[i]=a.a[i+1];
		a.length--;
		if(a.length==11-m)
			break;
	}
	cout<<"删除元素之后线性表的情况为:";
	for(int i=0;i<=a.length-1;i++)
		cout<<a.a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//顺序储存结构的线性表(顺序表)
//多余元素的删除操作,表中无重复元素
/*
#include <iostream>
using namespace std;
struct num
{
	int a[100];
	int length;
};
int main()
{
	num a={{3,3,5,5,5,6,6,8,9,9,9,9,10,12,12},15};
	for(int i=0;i<=a.length-1;i++)
	{
		for(int n=0;n<=i-1;n++)
		{
			if(a.a[n]==a.a[i])
			{
				for(int y=n;y<=a.length-1;y++)
					a.a[y]=a.a[y+1];
				a.length--;
				i--;
				break;
			}
		}
	}
	cout<<"此线性表删除完多余元素之后的情况为:";
	for(int i=0;i<=a.length-1;i++)
		cout<<a.a[i]<<" ";
	return 0;
}
*/
//关于线性表中重复元素的去除可以用新表和旧表的思路操作同一个表
//这种做法空间复杂度更低
/*
#include <iostream>
using namespace std;
struct num
{
	int a[100];
	int lenght;
};
int main()
{
	num a={{3,3,5,5,5,6,6,8,9,9,9,9,10,12,12},15};
	int k=0;
	for(int i=0;i<=a.lenght-2;i++)
	{
		if(a.a[i]!=a.a[i+1])
			a.a[k++]=a.a[i];
	}
	a.a[k++]=a.a[14];
	a.lenght=k;
	cout<<"线性表删除完多余元素之后的情况为:";
	for(int i=0;i<=a.lenght-1;i++)
		cout<<a.a[i]<<" ";
	return 0;
}
*/
//高效的完成指定元素的删除工作
//因为元素只扫描一遍所以时间复杂度为一次方
/*
#include <iostream>
using namespace std;
struct num
{
	int a[100];
	int length;
};
int main()
{
	num a={{2,5,6,2,2,2,4,8,8,45,14,16,59,45},14};
	int n;
	cout<<"请输入你所要删除的元素:";
	cin>>n;
	for(int i=0;i<=a.length-1;i++)
	{
		if(n==a.a[i])
		{
			a.a[i]=a.a[a.length-1];
			i--;
			a.length--;
		}
	}
	cout<<"顺序储存结构的线性表(顺序表)删除完指定元素后的情况为:";
	for(int i=0;i<=a.length-1;i++)
		cout<<a.a[i]<<" ";
	return 0;
}
*/
//非递减式顺序储存结构的线性表的合并
/*
#include <iostream>
using namespace std;
struct num
{
	int a[100];
	int length;
};
int main()
{
	num a,b;
	int n,i,j,k;
	cout<<"请输入第一个线性表的元素个数:";
	cin>>n;
	i=n-1;
	cout<<"请输入第一个线性表的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a.a[i];
	a.length=n;
	cout<<"请输入第二个线性表的元素个数:";
	cin>>n;
	j=n-1;
	cout<<"请输入第二个线性表的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>b.a[i];
	b.length=n-1;
	k=i+j+1;
	a.length=k+1;
	while(i>=0&&j>=0)
	{
		if(a.a[i]>=b.a[j])
			a.a[k--]=a.a[i--];
		else
			a.a[k--]=b.a[j--];
	}
	while(j>=0)
		a.a[k--]=b.a[j--];
	cout<<"两个非递减式顺序储存结构的线性表(顺序表)合并后的情况为:";
	for(int i=0;i<=a.length-1;i++)
		cout<<a.a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//递增顺序表的交集
/*
#include <iostream>
using namespace std;
struct num
{
	int a[100];
	int lenght;
};
int main()
{
	num a,b,c;
	int n,m,k=0,l=0;
	cout<<"请输入第一个递增线性表元素的个数:";
	cin>>n;
	a.lenght=n;
	cout<<"请输入第一个线性表的元素:";
	for(int i=0;i<=a.lenght-1;i++)
		cin>>a.a[i];
	cout<<"请输入第二个递增线性表元素的个数:";
	cin>>m;
	b.lenght=m;
	cout<<"请输入第二个线性表的元素:";
	for(int i=0;i<=b.lenght-1;i++)
		cin>>b.a[i];
	for(int i=0;i<=a.lenght-1;i++)
		for(int y=l;y<=b.lenght-1;y++)
		{
			if(a.a[i]==b.a[y])
			{
				c.a[k++]=a.a[i];
				l=y+1;
				break;
			}
		};
	c.lenght=k;
	cout<<"这两个线性表的交集为:";
	for(int i=0;i<=c.lenght-1;i++)
		cout<<c.a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//线性表的拆分
/*
#include <iostream>
using namespace std;
struct num
{
	int a[100];
	int lenght;
};
int main()
{
	num a,b,c;
	int n,k=0,l=0;
	cout<<"请输入线性表A中元素的个数:";
	cin>>n;
	a.lenght=n;
	cout<<"请输入线性表A中的元素:";
	for(int i=0;i<=a.lenght-1;i++)
	{
		cin>>a.a[i];
		if(a.a[i]>=0)
			b.a[k++]=a.a[i];
		else
			c.a[l++]=a.a[i];
	}
	b.lenght=k;
	c.lenght=l;
	cout<<"线性表b中的元素为:";
	for(int i=0;i<=b.lenght-1;i++)
		cout<<b.a[i]<<" ";
	cout<<"线性表c中的元素为:";
	for(int i=0;i<=c.lenght-1;i++)
		cout<<c.a[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//砝码称重
/*
#include <iostream>
using namespace std;
int main()
{
	int w[6],ff[1001],num=0;
	ff[0]=0;
	cout<<"请分别输入1g,2g,3g,4g,10g,20g砝码的个数:";
	for(int i=0;i<=5;i++)
		cin>>w[i];
	for(int a=0;a<=w[0];a++)
		for(int b=0;b<=w[1];b++)
			for(int c=0;c<=w[2];c++)
				for(int d=0;d<=w[3];d++)
					for(int e=0;e<=w[4];e++)
						for(int f=0;f<=w[5];f++)
						{
							for(int t=1;t<=1000;t++)
								if(a+2*b+3*c+4*d+10*e+20*f==t)
								{
									ff[t]=1;
									break;
								}
						};
	for(int i=1;i<=1000;i++)
		if(ff[i]==1)
			num++;
	cout<<"一共能够称量出"<<num<<"种重量";
	return 0;
}
*/
//输出最离群的分数
/*
#include <iostream>
using namespace std;
int main()
{
	int n,bj;
	float k=0,a[100],y,max=0;
	cout<<"请输入评委的数目:";
	cin>>n;
	cout<<"请输入所有评委的评分:";
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
		k=k+a[i];
	}
	k=k/n;
	for(int i=0;i<=n-1;i++)
	{
		y=k-a[i];
		if(y<0)
			y=0-y;
		if(y>max)
		{
			max=y;
			bj=i;
		}
	}
	cout<<"最离群的分数为:"<<a[bj]<<endl;
	return 0;
}
*/
//选手排名次，
//因为如果分数一样名次一样,所以在判断下一个最高分的名次的时候要与上一个做高分比较，如果相等则名次一样，不等则名次加一
//因此要设两个最大值，第一个最大值用来获取数组中的现在所要操作的最大值(每次都不一样),第二个最大值是保存上一次操作的最大值
//还要设两个名次,一个名次用来实现相同分数同等名次的功能，一个用来计数，实现分数不同名次等于前面人数加一(正常逻辑名次).
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100],n,max1=-1,max2=101,bo;
	int b[100],k1=0,k2=0;
	cout<<"请输入选手的数目:";
	cin>>n;
	cout<<"请输入各个选手的分数:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=0;i<=n-1;i++)
	{
		max1=0-1;
		for(int y=0;y<=n-1;y++)
		{
			if(a[y]>max1)
			{
				max1=a[y];
				bo=y;
			}
		}
		a[bo]=0;
		if(max1==max2)
		{
			b[bo]=k1;
			k2++;
		}
		else if(max1<max2)
		{
			k2++;
			b[bo]=k2;
			k1=k2;
		}
		max2=max1;
	}
	cout<<"各个选手的名次为:";
	for(int i=0;i<=n-1;i++)
		cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}
*/
//回文数的计算
/*
#include <iostream>
using namespace std;
int main()
{
	int w,b=0;
	cin>>w;
	while(w>0)
	{
		b=b*10+w%10;
		w=w/10;
	}
	if(w==b)
		cout<<"此数为回文数";
	else
		cout<<"此数不是回文数";
	return 0;
}
*/
//确定数制
//注意在不知道一个数字位数的情况下，如果解决问题需要用到位数则可以用while循环来辅助
/*
#include <iostream>
using namespace std;
int jz(int p,int q,int r,int w);
int shi(int n,int w);
int main()
{
	int a[15]={0};
	int p,q,r,bj=0;
	cout<<"请输入三个整数:";
	cin>>p>>q>>r;
	for(int i=0;i<=14;i++)
		a[i]=jz(p,q,r,i+2);
	for(int i=0;i<=14;i++)
	{
		if(a[i]!=0)
		{
			cout<<i+2<<"进制满足条件!";
			bj=1;
			break;
		}
	}
	if(bj==0)
		cout<<"没有符合条件的进制!";
	return 0;
}
int jz(int p,int q,int r,int w)
{
	p=shi(p,w);
	q=shi(q,w);
	r=shi(r,w);
	if(p*q==r&&p!=-1&&q!=-1&&r!=-1)
		return 1;
	else
		return 0;
}
int shi(int n,int w)
{
	int h=n%10,z,j=1;
	if(h>=w)
		h=0-1;
	else
	{
	    int b=n/10;
	    while(b>0)
	    {
		    z=1;
		    for(int i=1;i<=j;i++)
			    z=z*w;
		    h=h+z*(b%10);
			if(b%10>=w)
			{
				h=0-1;
				break;
			}
		    b=b/10;
		    j++;
	    }
	}
	return h;
}
*/ 
/*
#include <iostream>
using namespace std;
int main()
{
	int a[20],h=0,con=1,w=1;
	for(int i=1;i<=19;i++)
		if(i%2!=0)
			a[i]=con++;
	for(int i=0;i>=-2;i--)
	{
		a[2]=i;
		for(int i=0;i>=-2;i--)
		{
			a[4]=i;
			for(int i=0;i>=-2;i--)
			{
				a[6]=i;
				for(int i=0;i>=-2;i--)
		        {
			        a[8]=i;
					for(int i=0;i>=-2;i--)
						{
							a[10]=i;
							for(int i=0;i>=-2;i--)
								{
									a[12]=i;
									for(int i=0;i>=-2;i--)
									{
										a[14]=i;
										for(int i=0;i>=-2;i--)
										{
											a[16]=i;
											for(int i=0;i>=-2;i--)
												{
													a[18]=i;
													h=0;
													for(int i=1;i<=17;i+2)
													{
														if(a[i+1]==0)
															h=h+a[i]*10+a[i+2];
														else if(a[i+1]==-1)
															h=h+a[i+2];
														else if(a[i+1]==-2)
															h=h-a[i+2];
													}
													if(h==100)
													{
														for(int i=0;i<=19;i++)
														{
															if(a[i]==0)
																cout<<"";
															else if(a[i]==-1)
																cout<<"+";
															else if(a[i]==-2)
																cout<<"-";
															else
																cout<<a[i];
														}
														cout<<endl;
													}
											}
										}
									}
							}
					}
				}
			}
		}
	}
}
*/
//函数的递归调用
//递归求阶乘
/*
#include <iostream>
using namespace std;
int jc(int n);
int main()
{
	int m,n;
	cout<<"请输入一个整数:";
	cin>>n;
	m=jc(n);
	cout<<n<<"的阶乘为:"<<m<<endl;
	return 0;
}
int jc(int n)
{
	if(n==1)
		return 1;
	else
		return jc(n-1)*n;
}
*/
//汉诺塔问题
/*
#include <iostream>
using namespace std;
int hnt(int n);
int main()
{
	int n,m;
	cout<<"请输入第一个柱子上有几个圆盘:";
	cin>>n;
	m=hnt(n);
	cout<<"将第一根柱子上的圆盘转移到第三根柱子上需要:"<<m<<"次";
	return 0;
}
int hnt(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 3;
	else
		return hnt(n-1)*2+1;
}
*/
//用递归模拟汉诺塔的过程
/*
#include <iostream>
using namespace std;
void hnt(int n,char a,char b,char c);
int main()
{
	int n;
	cout<<"请输入第一个柱子上的圆盘的数目:";
	cin>>n;
	hnt(n,'A','B','C');
	return 0;
}
void hnt(int n,char a,char b,char c)
{
	if(n==1)
		cout<<a<<"->"<<c;
	else if(n==2)
		cout<<a<<"->"<<b<<endl<<a<<"->"<<c<<endl<<b<<"->"<<c;
	else
	{
		hnt(n-1,'A','C','B');
		cout<<endl;
		hnt(1,'A','B','C');
		cout<<endl;
		hnt(n-1,'B','A','C');
	}
}
*/
//快速排序
//递归进行快速查找,分成子序列
/*
#include <iostream>
using namespace std;
void px(int a[],int n,int i,int j);
int main()
{
	int a[100],n;
	cout<<"请输入排序数的个数:";
	cin>>n;
	cout<<"请输入排序的元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	px(a,n,0,n-1);
	cout<<"快速排序后的数组为:";
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
void px(int a[],int n,int i,int j)
{
	int ii=i,jj=j;
	int zhong,jz=a[i],z=0;
	if(n<=1)
		i=0;
	else
	{
	while(i<j)
	{
		if(a[i]==jz)
		{
			z=i;
			if(a[i]>a[j])
			{
				zhong=a[i];
				a[i]=a[j];
				a[j]=zhong;
			}
			else
				j--;
		}
		else if(a[j]==jz)
		{
			z=j;
			if(a[i]>a[j])
			{
				zhong=a[i];
				a[i]=a[j];
				a[j]=zhong;
			}
			else
				i++;
		}
	}
	px(a,z-ii,ii,z-1);
	px(a,jj-z,z+1,jj);
	}
}
*/
//利用快速排序的思路去查找第K大的数
//只需在递归调用的时候看其比基准数的排序名次大还是小
//如果大则把后一段子序列进行调用，小则把前一段子序列进行调用,如果相等则为此基准数
/*
#include <iostream>
using namespace std;
void px(int a[],int n,int i,int j,int m);
int main()
{
	int a[100],n,m;
	cout<<"请输入元素的个数:";
	cin>>n;
	cout<<"请输入各个元素的值:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	cout<<"请输入你所要查找第几大的元素:";
	cin>>m;
	px(a,n,0,n-1,m);
	return 0;
}
void px(int a[],int n,int i,int j,int m)
{
	int ii=i,jj=j,zhong,jz=a[i],z=0;
	if(n<=1)
		cout<<"无此数";
	else
	{
		while(i<j)
		{
			if(jz==a[i])
			{
				z=i;
				if(a[i]>a[j])
				{
					zhong=a[i];
					a[i]=a[j];
					a[j]=zhong;
				}
				else
					j--;
			}
			else if(jz==a[j])
			{
				z=j;
				if(a[i]>a[j])
				{
					zhong=a[i];
					a[i]=a[j];
					a[j]=zhong;
				}
				else
					i++;
			}
		}
		if(z+1==m)
			cout<<"第"<<m<<"大的数为"<<a[z];
		else if(z+1>m)
			px(a,z-ii,ii,z-1,m);
		else if(z+1<m)	
		    px(a,jj-z,z+1,jj,m);
	}
}
*/
//归并排序算法  
//利用辅助数组
/*
#include <iostream>
using namespace std;
void gb(int a[],int low,int hight);
void gbb(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"请输入所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入需要排序的元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gb(a,0,n-1);
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
void gb(int a[],int low,int hight)
{
	int mid;
	if(low<hight)
	{
		mid=(low+hight)/2;
		gb(a,low,mid);
		gb(a,mid+1,hight);
		gbb(a,low,hight);
	}
}
void gbb(int a[],int low,int hight)
{
	int h=low,i=low,j=(low+hight)/2+1;
	int b[100];
	while(i<=(low+hight)/2&&j<=hight)
	{
		if(a[i]<a[j])
			b[h++]=a[i++];
		else if(a[j]<a[i])
			b[h++]=a[j++];
	}
	while(i<=(low+hight)/2)
		b[h++]=a[i++];
	while(j<=hight)
		b[h++]=a[j++];
	for(int i=low;i<=hight;i++)
		a[i]=b[i];
}
*/
//当判断是否满足多个条件时可以利用多个条件与运算





//指针
/*
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"请输入三位数的整数:";
	cin>>n;
	char *a[]={"one","two","three","four","five","six","seven","eight","nine"};
	char *b[]={"ten","leven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char *c[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	int q,w,r;
	q=n/100;
	w=n/10%10;
	r=n%10;
	if(w>=2)
	{
		cout<<a[q-1]<<" "<<"hundred"<<" "<<"and"<<c[w-2]<<" "<<a[r-1]<<endl;
	}
	else if(w<2)
		cout<<a[q-1]<<" "<<"and"<<b[r]<<endl;
	return 0;
}
*/
//字符指针数组
//数组的没一个元素都为一个地址是存放字符串的首地址
//在输出时只需要输出一个数组元素就可以把其存放的字符打印出来;
//用字符数组不能这莫存字符串,其只能存字符，而字符指针数组可以其存字符串时存的是字符串的第一个字符的地址，打印输出时是自动把整个字符串都打印出来


//链表的公共后缀
//两个链表一定是一个长一个短，分别遍历一下链表的每一个元素计算出链表的长度,
//长链表比短链表长n;则先让长链表往后移动n,之后在让两个链表一起移动并且每移动一次都会比较一次链表的地址值是否相等
//如果相等则返回那个地址值(当然这个函数的返回值是一个地址，则函数是一个指针函数)，以此来判断查找的共同后缀是否正确
/*
#include <iostream>
using namespace std;
struct num
{
	int n;
	num *next;
};
void make(num **w);
void link(num *w1,num *w2,num *w3);
num *find(num *w1,num *w2,num *w3);
int main()
{
	num *w1=NULL,*w2=NULL,*w3=NULL,*j;
	make(&w1);
	make(&w2);
	make(&w3);
	link(w1,w2,w3);
	j=find(w1,w2,w3);
	cout<<j->n<<endl;
	return 0;
}
void make(num **w)
{
	int n;
	num *p,*m;
	cout<<"请输入要创建几个节点:";
	cin>>n;
	p=new num;
	*w=p;
	cout<<"请输入结点的信息:";
	cin>>(*p).n;
	(*p).next=NULL;
	for(int i=2;i<=n;i++)
	{
		m=new num;
		(*p).next=m;
		cin>>(*m).n;
		(*m).next=NULL;
		p=m;
	}
}
void link(num *w1,num *w2,num *w3)
{
	num *gg;
	while(w1!=NULL)
	{
		gg=w1;
		w1=w1->next;
	}
	gg->next=w3;
	while(w2!=NULL)
	{
		gg=w2;
		w2=w2->next;
	}
	gg->next=w3;
}
num *find(num *w1,num *w2,num *w3)
{
	int n1=0,n2=0,bj=0;
	num *head1=w1,*head2=w2;
	while(w1!=NULL)
	{
		n1++;
		w1=w1->next;
	}
	while(w2!=NULL)
	{
		n2++;
		w2=w2->next;
	}
	if(n1>n2)
	{
		for(int i=1;i<=n1-n2;i++)
			head1=head1->next;
		while(head1!=NULL&&head2!=NULL)
		{
			if(head1==head2)
			{
				return head1;
				bj=1;
				break;
			}
			else
			{
				head1=head1->next;
				head2=head2->next;
			}
		}
	}
	else if(n1<n2)
	{
		for(int i=1;i<=n2-n1;i++)
			head2=head2->next;
		while(head1!=NULL&&head2!=NULL)
		{
			if(head1==head2)
			{
				return head1;
				bj=1;
				break;
			}
			else
			{
				head1=head1->next;
				head2=head2->next;
			}
		}
	}
	if(bj!=1)
		return NULL;
}
*/
//链表的保留公共数据
/*
#include <iostream>
using namespace std;
struct num
{
	int n;
	num *next;
};
void make(num **w);
void px(num **w1,num *w2,num *w3);
int main()
{
	num *w1,*w2,*w3;
	make(&w1);
	make(&w2);
	make(&w3);
	px(&w1,w2,w3);
	num *w11=w1;
	while(w11!=NULL)
	{
		cout<<w11->n<<" ";
		w11=w11->next;
	}
}
		
			
void make(num **w)
{
	int n;
	num *p,*m;
	cout<<"请输入要创建几个节点:";
	cin>>n;
	p=new num;
	*w=p;
	cout<<"请输入结点的信息:";
	cin>>(*p).n;
	(*p).next=NULL;
	for(int i=2;i<=n;i++)
	{
		m=new num;
		(*p).next=m;
		cin>>(*m).n;
		(*m).next=NULL;
		p=m;
	}
}
void px(num **w1,num *w2,num *w3)
{
	num *la,*lb,*lc,*u,*p;
	la=*w1;
	lb=w2;
	lc=w3;
	*w1=NULL;
	p=NULL;
	if(la&&lb&&lc)
	{
		while(la&&lb)
		{
			if(la->n<lb->n)
			{
				u=la;
				la=la->next;
				delete u;
			}
			else if(la->n>lb->n)
				lb=lb->next;
			else
			{
				while(lc->n<la->n)
					lc=lc->next;
				if(lc)
				{
					if(lc->n>la->n)
					{
						u=la;
						la=la->next;
						delete u;
						lb=lb->next;
					}
					else
					{
						if(*w1==NULL)
						{
							*w1=la;
							p=la;
							p->next=NULL;
							la=la->next;
						}
						else if(p->n==la->n)
						{
							u=la;
							la=la->next;
						    delete u;
						}
						else
						{
							p->next=la;
							la=la->next;
							p=p->next;
							p->next=NULL;
						}
						lb=lb->next;
						lc=lc->next;
					}
				}
				else
					break;
			}
		}
	}
	while(la!=NULL)
	{
		u=la;
		la=la->next;
		delete u;
	}
}
*/
/*
#include <iostream>
using namespace std;
struct num
{
	int n;
	num *next;
};
void make(num **w);
void zf(num *w1,num **w2,num **w3);
int main()
{
	num *w1,*w2,*w3;
	make(&w1);
	zf(w1,&w2,&w3);
	num *w22=w2,*w33=w3;
	while(w22!=NULL)
	{
		cout<<w22->n<<" ";
		w22=w22->next;
	}
	while(w33!=NULL)
	{
		cout<<w33->n<<" ";
		w33=w33->next;
	}
	cout<<endl;
	return 0;
}
void make(num **w)
{
	int n;
	num *p,*m;
	cout<<"请输入要创建几个节点:";
	cin>>n;
	p=new num;
	*w=p;
	cout<<"请输入结点的信息:";
	cin>>(*p).n;
	(*p).next=NULL;
	for(int i=2;i<=n;i++)
	{
		m=new num;
		(*p).next=m;
		cin>>(*m).n;
		(*m).next=NULL;
		p=m;
	}
}
void zf(num *w1,num **w2,num **w3)
{
	num *p1,*m1,*p2,*m2;
	int s1=0,s2=0;
	while(w1!=NULL)
	{
		if(w1->n<0)
		{
			if(s1==0)
			{
			    p1=new num;
				*w2=p1;
				p1->n=w1->n;
				p1->next=NULL;
				s1=1;
			}
			else
			{
				m1=new num;
				p1->next=m1;
				m1->n=w1->n;
				m1->next=NULL;
				p1=m1;
			}
		}
		else if(w1->n>0)
		{
			if(s2==0)
			{
			    p2=new num;
				*w3=p2;
				p2->n=w1->n;
				p2->next=NULL;
				s2=1;
			}
			else
			{
				m2=new num;
				p2->next=m2;
				m2->n=w1->n;
				m2->next=NULL;
				p2=m2;
			}
		}
		w1=w1->next;
	}
}
*/
//把链表拆分
//利用头插法的思路
/*
#include <iostream>
using namespace std;
struct num
{
	int n;
	num *next;
};
void cl(num **w1,num **w2,num **w3);
void make(num **w);
int main()
{
	num *w1,*w2,*w3;
	make(&w1);
	w2=NULL;
	w3=NULL;
	cl(&w1,&w2,&w3);
	num *w22=w2,*w33=w3;
	while(w22!=NULL)
	{
		cout<<w22->n<<" ";
		w22=w22->next;
	}
	while(w33!=NULL)
	{
		cout<<w33->n<<" ";
		w33=w33->next;
	}
	cout<<endl;
	return 0;
}
void cl(num **w1,num **w2,num **w3)
{
	num *p=*w1,*r;
	*w1=NULL;
	while(p!=NULL)
	{
		r=p->next;              //用r来缓存p的下一个地址;,因为下面的操作利用头插法会改变p的下一个指向，所以需要缓存一下以便p继续指向下一个地址
		if(p->n<0)
		{
			p->next=*w2;
			*w2=p;
		}
		else if(p->n>0)
		{
			p->next=*w3;
			*w3=p;
		}
		else
		{
			p->next=(*w1);
			(*w1)=p;
		}
		p=r;
	}
}
void make(num **w)
{
	int n;
	num *p,*m;
	cout<<"请输入要创建几个节点:";
	cin>>n;
	p=new num;
	*w=p;
	cout<<"请输入结点的信息:";
	cin>>(*p).n;
	(*p).next=NULL;
	for(int i=2;i<=n;i++)
	{
		m=new num;
		(*p).next=m;
		cin>>(*m).n;
		(*m).next=NULL;
		p=m;
	}
}
*/
//链表的交集和并集
//因为其要求还是递增的所以只能用头插法
/*
#include <iostream>
using namespace std;
struct num
{
	int n;
	num *next;
};
void make(num **w);
void bg(num *w1,num *w2,num **w3);
int main()
{
	num *w1,*w2,*w3;
	w3=NULL;
	make(&w1);
	make(&w2);
	bg(w1,w2,&w3);
	num *w33=w3;
	while(w33!=NULL)
	{
		cout<<w3->n<<" ";
		w3=w3->next;
	}
	return 0;
}
void bg(num *w1,num *w2,num **w3)
{
	num *r1,*r2,*p;
	int js=0;
	while(w1!=NULL&&w2!=NULL)
	{
		r1=w1->next;
		r2=w2->next;
		if(w1->n>w2->n)
		{
			if(js==0)
			{
				w2->next=NULL;
				*w3=w2;
				p=w2;
				js=1;
			}
			else if(js==1)
			{
				p->next=w2;
				p=w2;
				p->next=NULL;
			}
			w2=r2;
		}
		else if(w1->n<w2->n)
		{
			if(js==0)
			{
				*w3=w1;
				w1->next=NULL;
				p=w1;
				js=1;
			}
			else if(js==1)
			{
				p->next=w1;
				p=w1;
				p->next=NULL;
			}
			w1=r1;
		}
		else
		{
			if(js==0)
			{
				*w3=w1;
				w1->next=NULL;
				p=w1;
				js=1;
			}
			else if(js==1)
			{
				p->next=w1;
				p=w1;
				p->next=NULL;
			}
			w1=r1;
			w2=r2;
		}
	}
	while(w1!=NULL)
	{
		r1=w1->next;
		p->next=w1;
		p=w1;
		p->next=NULL;
		w1=r1;
	}
	while(w2!=NULL)
	{
		r2=w2->next;
		p->next=w2;
		p=w2;
		p->next=NULL;
		w2=r2;
	}
		
}
void make(num **w)
{
	int n;
	num *p,*m;
	cout<<"请输入要创建几个节点:";
	cin>>n;
	p=new num;
	*w=p;
	cout<<"请输入结点的信息:";
	cin>>(*p).n;
	(*p).next=NULL;
	for(int i=2;i<=n;i++)
	{
		m=new num;
		(*p).next=m;
		cin>>(*m).n;
		(*m).next=NULL;
		p=m;
	}
}
*/
//交集一样，如果相等则把导入一个节点，否则谁小谁后移动，while循环直到有一个链表遍历完
//围圈喊数出人
/*
#include <iostream>
using namespace std;
int main()
{
	int num=0,n,k=0,i=1;
	int a[1000];
	cout<<"请输入多少个人";
	cin>>n;
	for(int i=1;i<=n;i++)
		a[i]=1;
	while(k<n-1)
	{
		if(a[i]!=0)
			num++;
		if(num==3)
		{
			a[i]=0;
			num=0;
			k++;
		}
		i++;
		if(i==n+1)
			i=1;
	}
	for(int i=1;i<=n;i++)
		if(a[i]!=0)
			cout<<i;
	return 0;
}
*/
//回溯法的应用
/*四皇后问题
#include <iostream>
using namespace std;
int main()
{
	int a[4][4],bj=0;
	int a1=-1,a2,a3,a4;
	while(bj<4)
	{
		if(a1>3)
			break;
		bj=0;
		for(int i=0;i<=3;i++)
			for(int n=0;n<=3;n++)
				a[i][n]=0;
		a1++;
		a[0][a1]=1;
		bj++;
		for(int i=0;i<=3;i++)
			a[i][a1]=1;
		for(int i=0;i<=3-a1;i++)
			a[i+1][a1+1]=1;
		for(int i=0;i<=3;i++)
			if(a[1][i]!=1)
			{
					a2=i;
					bj++;
			}
		for(int i=0;i<=3;i++)
			a[i][a2]=1;
		int o=1;
		for(int i=a2;i<=2;i++)
			a[o++][i+1]=1;
		for(int i=0;i<=3;i++)
			if(a[2][i]!=1)
			{
				a3=i;
				bj++;
			}
		a[3][a3]=1;
		if(a3<=2)
			a[3][a3+1]=1;
		for(int i=0;i<=1;i++)
			if(a[3][i]!=1)
			{
				a4=i;
				bj++;
			}
	}
	if(bj==4)
		cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<endl;
	else
		cout<<"没有符合条件的位置!";
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int n=1;n<=5;n++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=5;i>=1;i--)
	{
		for(int n=1;n<=i;n++)
	        cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=1;i<=5;i++)
	{
		for(int n=1;n<=i;n++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=5;i>=1;i--)
	{
		for(int o=1;o<=5-i;o++)
			cout<<" ";
		for(int n=1;n<=i;n++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=1;i<=5;i++)
	{
		for(int o=1;o<=5-i;o++)			
			cout<<" ";
		for(int n=1;n<=i;n++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=1;i<=5;i++)
	{
		if(i<=3)
		{
			for(int n=1;n<=i;n++)
				cout<<"*";
			cout<<endl;
		}
		else
		{
			for(int n=1;n<=6-i;n++)
				cout<<"*";
			cout<<endl;
		}
	}
	cout<<endl<<endl;
	for(int i=1;i<=5;i++)
	{
		if(i<=3)
		{
			for(int o=1;o<=3-i;o++)
				cout<<" ";
			for(int n=1;n<=i;n++)
				cout<<"*";
			cout<<endl;
		}
		else
		{
			for(int o=1;o<=i-3;o++)
				cout<<" ";
			for(int n=1;n<=6-i;n++)
				cout<<"*";
			cout<<endl;
		}
	}
	cout<<endl<<endl;
	for(int i=1;i<=5;i++)
	{
		for(int n=1;n<=5-i;n++)
			cout<<" ";
		for(int o=1;o<=(i*2)-1;o++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=1;i<=5;i++)
	{
		for(int n=1;n<=i-1;n++)
			cout<<" ";
		for(int o=1;o<=(6-i)*2-1;o++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl;
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	char a[]="we are student";
	char *p=a;
	while((*p)!='\0')
	{
		if(*p!=' ')
			cout<<*p;
		p++;
	}
	return 0;
}
*/
//字符串去除开头和末尾的空格，并且把中间连续的空格保留一个
/*
#include <iostream>
using namespace std;
int main()
{
	char a[]="  we     are     happy     ";
	char *p1=a;
	char *p2=a;
	char *p3;
	int pp=0;
	cout<<a<<endl;
	while(*p1==' ')
		p1++;
	p3=p1;
	while(*p1!='\0')
	{
		if(*p1==' '&&*p3==' ')
		{
				p3=p1;
				p1++;
		}
		else
		{
			if(pp==1)
				*p2=*p3;
			p3=p1;
			p1++;
			if(pp==1)
			    p2++;
			pp=1;
		}
	}
	*p2='\0';
	cout<<a<<endl;
	cout<<"we are happy";
	return 0;
}
*/
//10000自我数的输出
//还有一种方法利用一个自我数数可以生成最近的一个非自我数.
/*
#include <iostream>
using namespace std;
int main()
{
	int pp,s=0;
	for(int i=1;i<=10000;i++)
	{
		for(int n=1;n<=i-1;n++)
		{
			pp=n;
			s=0;
			while(pp!=0)
			{
				s=s+pp%10;
				pp=pp/10;
			}
			s=s+n;
			if(s==i)
				break;
		}
		if(s!=i)
			cout<<i<<" ";
	}
	return 0;
}
*/
//自我数的链式生成
/*
#include <iostream>
using namespace std;
int main()
{
	int n,w=1,pp,s=0,nn=0;
	cout<<"输出一个非自我数:";
	cin>>n;
	cout<<n;
	while(w)
	{
		for(int i=1;i<=n-1;i++)
		{
			pp=i;
			s=0;
			while(pp!=0)
			{
				s=s+pp%10;
				pp=pp/10;
			}
			s=s+i;
			if(s==n)
			{
				nn=n;
				cout<<"<-"<<i;
				n=i;
				break;
			}
		}
		if(s!=nn)
			w=0;
	}
	return 0;
}
*/
//错排问题
/*
#include <iostream>
using namespace std;
int nasa(int n);
int main()
{
	int n,m;
	cout<<"请输入有几个人参与错排:";
	cin>>n;
	m=nasa(n);
	cout<<m;
	return 0;
}
int nasa(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return (n-1)*(nasa(n-1)+nasa(n-2));
}
*/


//文件的相关操作


//基于c的文件操作
//对文件的操作分为两种方式,即对流式文件操作和对I/O文件的操作

//第一
//对流式文件的操作(这种操作方式有一种重要的结构FILE)对文件的操作都要通过这种结构的指针来操作
//fopen("指定的打开的文件名","以何种状态打开")打开文件流
//其返回一个FILE 类型的指针
//fclose(文件指针)关闭文件流
//为什么一定要关闭文件(因为操作文件时存在一个缓冲区),在写入数据时数据先保存在缓冲区，当关闭在文件时缓冲区中的数据才真正保存到文件中
//EOF(end of file)文件结束的标志  值为-1，有时很多文件操作失败时也会返回EOF
//fputc('x',文件指针)  向流中写入一个字符，写入失败则返回EOF
//fgetc('x',文件指针)  从流中获取一个字符，获取失败则返回EOF
//fseek(文件指针,nL,num)当n=0,num等于0则把读写位置移动到文件开头,
//                          1则移动到文件中间，2则移动到文件尾部
//                      当n!=0,num等于1，则把读写位置从当前位置向后移动n个字节
//fputs("x",文件指针)   向流中写入一个字符串
//fgets(const char*s,n,文件指针)  从流中获得一行字符或指定个数的字符,
//                          从文件的一行中获得的n个字符,如果n足够大则会包括\n,
//                          获取成功时会返回s的指针,失败时返回NULL
//fprint(fp,"%d",x)按格式输入到流  用法与printf()一样，只不过不是输入到控制台而是输入到流                          
//scanf(fp,"%d",&x)按格式输出到流  用法与scanf()一样,只不过不是从控制台获得输出而是从流中获得输出
//feof()检测文件是否结束  结束返回非零值，没结束返回零值



//第二
//直接对I/O文件进行操作（而通过流对文件进行操作是利用缓冲区来进行的）
//流式文件是通过围绕文件指针来操作的，而直接对I/O文件进行操作是围绕一个文件的"句柄"来进行的
//句柄其实是一个整数系统用来识别一个文件的唯一标识,
//围绕句柄对文件进行的操作函数在头文件io.h中定义

//open(文件名,打开方式)  打开一个文件并返回它的句柄,打开方式有(windows系统)
//                    1.O_RDONLY只读模式
//                    2.O_WRONLY只写模式
//                    3.O_RDWR读写模式
//                    4.O_BINARY二进制模式
//                    5.O_TEXT文本模式
//                    对于多个要求可以用 | 来连接
//close(文件句柄) 关闭一个文件
//lseek(文件句柄,nL,基准位置) 把读写位置定位到指定位置，此函数返回当前读写位置
//                           n为移动的量，基准位置有 1.SEEK_SET文件首部
//                                                   2.SEEK_CUR文件当前位置
//                                                   3.SEEK_END文件尾部
//read(文件句柄,void *buf,n)从文件中读取n个字节的数据并保存到 buf 中，返回实际读出的字节数
//write(文件句柄,void *buf,n)从buf中向文件写入n个字节的数据,返回实际写入的字节数
//eof(文件句柄) 用法与feof()一样，用来检测文件是否结束，结束返回1
//filelength(文件句柄)返回文件的长度，与lseek(文件句柄,0L,SEEK_END)一样
//rename(旧文件名,新文件名)对文件进行重命名 ，成功返回0



/*
int main()
{
	FILE *fp;
	char name[20];
	int len;
	fp=fopen("E:\\tsgsjk\\user.txt","r");
	while(fgets(name,20,fp)!=NULL)
	{
		len=strlen(name);
		name[len-1]='\0';
		cout<<name<<endl;
	}
	fclose(fp);
	return 0;
}
*/
