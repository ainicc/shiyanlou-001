//选择排序，直接选择排序
//选择排序是不稳定的排序
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=0;i<=n-2;i++)
	{
		int min=a[i];
		int j=i;
		for(int m=i;m<=n-1;m++)
			if(a[m]<min)
			{
				min=a[m];
				j=m;
			}
		a[j]=a[i];
		a[i]=min;
	}
	cout<<"选择排序后的元素为:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/
//归并排序是选择排序
//归并排序是分治法的一种体现，运用递归思想,有序表的合并
//即想然每一个子序列有序再让子序列间有序达到整体有序
/*
#include <iostream>
using namespace std;
void gb(int a[],int low,int hight);
void gab(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"请输入所要排序的元素的数目:";
	cin>>n;
	cout<<"请输入所要参与排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gb(a,0,n-1);
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
void gb(int a[],int low,int hight)
{
	int mid;
	if(low<hight)                  //判断序列的上下界是否一样,一样则说明其分到一个元素不能再分了
	{
		mid=(low+hight)/2;          //把序列再拆分成小区间
		gb(a,low,mid);              //再对前一部分序列进行归并
		gb(a,mid+1,hight);           //对后一部分序列进行归并
		gab(a,low,hight);            //当前后部分都归并完之后再对整体进行有序表的合并
	}
}
void gab(int a[],int low,int hight)
{
	int zhong=(low+hight)/2,b=zhong+1,j1=low,j2=low;
	int p[100];
	while(j1<=zhong&&b<=hight)                //有序表的合并,分别设一个指针指向序列1的首元素，另一个指针指向序列2的首元素，再设一个指向辅助序列的第一个元素
	{                                         //当两个序列中有一个序列遍历完就结束循环
		if(a[j1]<a[b])
			p[j2++]=a[j1++];
		else if(a[j1]>a[b])
			p[j2++]=a[b++];
		else
		{
			p[j2++]=a[b++];
			p[j2++]=a[j1++];
		}
	}
	while(j1<=zhong)                          //判断哪个序列没有遍历完,把其剩余的元素按顺序加入到辅助序列中
		p[j2++]=a[j1++];
	while(b<=hight)
		p[j2++]=a[b++];
	for(int i=low;i<=hight;i++)             //再把辅助序列中的元素都返回到原序列中
		a[i]=p[i];
}
*/
//交换排序
//冒泡排序
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100],elem;
	cout<<"请输入你所要排序的元素的个数";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=n-1;i>=1;i--)
	{
		for(int n=0;n<=i-1;n++)
		{
			if(a[n]>a[n+1])
			{
				elem=a[n+1];
				a[n+1]=a[n];
				a[n]=elem;
			}
		}
	}
	cout<<"排序后的元素为:";
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/
//快速排序（是一种交换排序)
//快速排序也采用的是递归思想
//分别把每一个序列的设一个基准然后经过交换后前面的序列都小于基准后面的数都大于基准
//之后在分别对前后两个序列再进行上述操作，结束条件为其序列的上下界相等
//快速排序与归并排序的思想相似都是递归,但快速排序是整体向部分收敛，归并是部分向整体扩散
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gad(a,0,n-1);
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
void gad(int a[],int low,int hight)
{
	int jz=a[low],elem,bj=0;
	int low1=low,hight1=hight;
	while(low<hight)
	{
		if(a[hight]<jz)
		{
			a[low]=a[hight];
			a[hight]=jz;
			low++;
		}
		else if(a[low]>jz)
		{
			a[hight]=a[low];
			a[low]=jz;
			hight--;
		}
		else
		{
			if(a[hight]==jz)
				low++;
			else if(a[low]==jz)
				hight--;
		}
		bj=1;
	}
	a[low]=jz;
	if(bj==1)
	{
		gad(a,low1,low-1);
		gad(a,low+1,hight1);
	}
}
*/
//快速排序采用另一种如果前一个被交换了则下一次从后面查询
//                  如果后一个被交换了则下一次从前面查询
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gad(a,0,n-1);
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
void gad(int a[],int low,int hight)
{
	int jz=a[low],low1=low,hight1=hight,b=0;
	while(low<hight)
	{
		if(a[low]==jz)
		{
			if(a[hight]<jz)
			{
				a[low++]=a[hight];
				a[hight++]=jz;
			}
			hight--;
		}
		else if(a[hight]==jz)
		{
			if(a[low]>jz)
			{
				a[hight--]=a[low];
				a[low--]=jz;
			}
			low++;
		}
		b=1;
	}
	if(b==1)
	{
		gad(a,low1,low-1);
		gad(a,low+1,hight1);
	}
}
*/

//基数排序
//按高位优先排序进行排序
/*
#include <iostream>
using namespace std;
struct student     //学生有三个成员(三个关键字优先级依次减小)
{
	int num;
	int clas;
	int studentid;
};

void gad(student s1[],int low,int hight,int n);
int main()
{
	int n,w,e=0,x=0;
	student s1[100];               
	cout<<"请输入所要参与排序的学生的个数:";
	cin>>n;
	cout<<"分别依次输入各个学生的排名 班号 学号:"<<endl;
	for(int i=0;i<=n-1;i++)
		cin>>s1[i].clas>>s1[i].num>>s1[i].studentid;
	gad(s1,0,n-1,1);
	for(int i=0;i<=n-1;i++)
	{
		if(e==0)
		{
			w=s1[i].clas;
			x=i;
			e++;
		}
		else
		{ 
			if(w==s1[i].clas)
				e++;
			else if(w!=s1[i].clas&&e>1)
			{
				gad(s1,x,x+e-1,2);           //即将其有重复的开头到结束的上下界传过去
				cout<<"ok"<<endl;
				int x1=0,e1=0,w1;
				for(int i=x;i<=x+e-1;i++)
	            {
		            if(e1==0)
		            { 
			            w1=s1[i].num;
			            x1=i;
		 	            e1++;
					}
					else
					{ 
						if(w1==s1[i].num)
							e1++;
						else if(w1!=s1[i].num&&e1>1)
						{
							gad(s1,x1,x1+e1-1,3);     //当第二个关键字参与排序后看其第三个关键字是否能再次排序
							cout<<"ko"<<endl;
							w1=s1[i].num;
							x1=i;
							e1=1;
						}
						else if(w1!=s1[i].num&&e1==1)
						{
							w1=s1[i].num;
							x1=i;
							e1=1;
						}
						if(i==x+e-1&&e1>1)              //防止关键字一样的都排在了最后
							gad(s1,x1,x1+e1-1,3);
					}
				}
				w=s1[i].clas;
				x=i;
				e=1;
			}
			else if(w!=s1[i].clas&&e==1)
			{
				w=s1[i].clas;
				x=i;
				e=1;
			}
			if(i==n-1&&e>1)
			{
				gad(s1,x,x+e-1,2);                      //防止第二个关键字一样的排在了最后
				int x1=0,e1=0,w1;
				for(int i=x;i<=x+e-1;i++)
	            {
		            if(e1==0)
		            { 
			            w1=s1[i].num;
			            x1=i;
		 	            e1++;
					}
					else
					{ 
						if(w1==s1[i].num)
							e1++;
						else if(w1!=s1[i].num&&e1>1)
						{
							gad(s1,x1,x1+e1-1,3);
							cout<<"ko"<<endl;
							w1=s1[i].num;
							x1=i;
							e1=1;
						}
						else if(w1!=s1[i].num&&e1==1)
						{
							w1=s1[i].num;
							x1=i;
							e1=1;
						}
						if(i==x+e-1&&e1>1)
							gad(s1,x1,x1+e1-1,3);
					}
				}
			}
		}
	}
	cout<<"排序后的学生的信息为:"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		cout<<s1[i].clas<<" ";
		cout<<s1[i].num<<" ";
		cout<<s1[i].studentid<<endl;
	}
	return 0;
}                                                    //对各个不同优先级的关键字的排序可以采用基本排序操作(插入，选择，交换)这里采用的是直接插入法
void gad(student s1[],int low,int hight,int n)
{
	if(n==1)
	{
		student ele;
		for(int i=low+1;i<=hight;i++)
		{
			ele=s1[i];
			int j=i-1;
			while(s1[j].clas>ele.clas&&j>=low)
				s1[j+1]=s1[j--];
			s1[j+1]=ele;
		}
	}
	else if(n==2)
	{
		student ele;
		for(int i=low;i<=hight;i++)
		{
			ele=s1[i];
			int j=i-1;
			while(s1[j].num>ele.num&&j>=low)
				s1[j+1]=s1[j--];
			s1[j+1]=ele;
		}
	}
	else if(n==3)
	{
		student ele;
		for(int i=low;i<=hight;i++)
		{
			ele=s1[i];
			int j=i-1;
			while(s1[j].studentid>ele.studentid&&j>=low)
				s1[j+1]=s1[j--];
			s1[j+1]=ele;
		}
	}
}
*/
//排序算法总结
//1.插入排序
//  (1).直接插入排序
//  (2).希尔排序(缩小增量排序)
//2.选择排序
//  (1).一般选择排序
//  (2).归并排序
//3.交换排序
//  (1).冒泡排序
//  (2).快速排序
//4.基数排序
//5.外部排序



//直接插入排序
//直接插入排序的时间复杂度与其未排序序列中的逆序数对的数量有关
//也就是其排序前序列越接近有序其时间复杂度越小
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	int elem;
	for(int i=1;i<=n-1;i++)
	{
		elem=a[i];
		int j=i-1;
		while(j>=0&&a[j]>elem)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=elem;
	}
	cout<<"排序后的元素为:";
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/

//希尔排序(缩小增量排序)
//是在直接插入排序的基础上改进的,先将序列分组每组分别经行直接插入排序
//然后在不断缩小组与组的间隔，知道每组为一个元素后再进行一次插入排序后结束
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"请输入所要排序元素的个数";
	cin>>n;
	cout<<"请输入所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	int gad,i,j;
	for(gad=n/2;gad>=1;gad=gad/2)            //开始时让每一组的间隔为整体长度的一般,然后将这些组进行分别插入排序后
	{                                                                             //再将间隔缩小为原来的一半,直到每一组的间隔小于1时结束
		for(i=0;i<=gad-1;i++)                //分别对每一个组都进行直接插入排序
		{
			for(j=i+gad;j<=n-1;j=j+gad)     //从此处是直接插入排序的算法
			{
				int elem=a[j];
				int jj=j-gad;
				while(jj>=0&&a[jj]>elem)
				{
					a[jj+gad]=a[jj];
					jj=jj-gad;
				}
				a[jj+gad]=elem;
			}
		}
	}
	cout<<"排序后的元素为:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/

//一般选择排序
//选择排序就是不断从无序序列中找出最小的元素加入到有序序列中
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100],min,js;
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=0;i<=n-2;i++)
	{
		min=a[i];
		js=i;
		int j;
		for(j=i;j<=n-1;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				js=j;
			}
		}
		a[j]=a[i];
		a[i]=min;
	}
	cout<<"排序后的元素为:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/

//归并排序
//归并排序运用的是递归思想,分治法
//利用有序线性表的合并方法先让部分有序，再让整体有序(部分向整体扩散)
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
void ga(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gad(a,0,n-1);
	cout<<"排序后的元素为:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
void gad(int a[],int low,int hight)
{
	int mid=(hight+low)/2;
	if(low<hight)
	{
		gad(a,low,mid);
		gad(a,mid+1,hight);
		ga(a,low,hight);
	}
}
void ga(int a[],int low,int hight)
{
	int b[100];
	int i=(low+hight)/2,x=low,y=i+1,w=low;
	while(x<=i&&y<=hight)
	{
		if(a[x]<a[y])
			b[w++]=a[x++];
		else if(a[x]>a[y])
			b[w++]=a[y++];
		else if(a[x]==a[y])
		{
			b[w++]=a[x++];
			b[w++]=a[y++];
		}
	}
	while(x<=i)
		b[w++]=a[x++];
	while(y<=hight)
		b[w++]=a[y++];
	for(int i=low;i<=hight;i++)
		a[i]=b[i];
}
*/


//冒泡排序
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100],elem;
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			if(a[j]>a[j+1])
			{
				elem=a[j+1];
				a[j+1]=a[j];
				a[j]=elem;
			}
		}
	}
	cout<<"排序后的元素为:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/


//快速排序(交换排序的一种)
//快速排序与归并排序一样都是运用递归思想
//只不过快排是整体收敛到部分,而归并排序是部分扩散到整体
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
int main()
{
	int n,a[10];
	cout<<"请输入你所要排序的元素的个数:";
	cin>>n;
	cout<<"请输入你所要排序的各个元素:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gad(a,0,n-1);
	cout<<"排序后的元素为:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
void gad(int a[],int low,int hight)
{
	int elem=a[low],nn=0;
	int low1=low,hight1=hight;
	while(low<hight)
	{
		if(a[low]==elem)
		{
			if(a[hight]<a[low])
			{
				a[low++]=a[hight];
				a[hight++]=elem;
			}
			hight--;
		}
		else if(a[hight]==elem)
		{
			if(a[low]>elem)
			{
				a[hight--]=a[low];
				a[low--]=elem;
			}
			low++;
		}
		nn=1;
	}
	if(nn==1)
	{
		gad(a,low1,low-1);
		gad(a,low1+1,hight1);
	}
}
*/



// 递归
//回文串的判断
/*
#include <iostream>
#include <string>
using namespace std;
string nasa(char a[],int low,int hight);
int main()
{
	char a[20];
	int x=0,w=0;
	cout<<"请输入一串字符串:";
	cin>>a;
	while(a[x]!='\0')
	{
		w++;
		x++;
	}
	cout<<nasa(a,0,w-1);
	return 0;
}


string nasa(char a[],int low,int hight)
{
	if(a[low]==a[hight])
	{
		if(low==hight-1)
			return "此字符串为回文串!";         //递归结束
		else if(low==hight)
			return "此字符串为回文串!";         //递归结束
		else if(low<hight-1)
			return nasa(a,low+1,hight-1);
	}
	else if(a[low]!=a[hight])
		return "其字符串不是回文串!";           //递归结束
}
*/
//用循环来代替递归判断回文串
/*
#include <iostream>
using namespace std;
int main()
{
	char a[100];
	int x=0,w=0;
	cout<<"请输入一个字符串:";
	cin>>a;
	while(a[x]!='\0')
	{
		w++;
		x++;
	}
	int low=0,hight=w-1;
	while(1)
	{
		if(low<hight-1)
		{
			if(a[low]==a[hight])
			{
				low++;
				hight--;
			}
			else if(a[low]!=a[hight])
			{
				cout<<"此字符串不是回文串!";
				break;
			}
		}
		else if(low==hight-1)
		{
			if(a[low]==a[hight])
			{
				cout<<"此字符串为回文串!";
				break;
			}
			else
			{
				cout<<"此字符串不是回文串!";
				break;
			}
		}
		else if(low==hight)
		{
			cout<<"此字符串为回文串!";
			break;
		}
	}
return 0;
}
*/

//分治法是吧问题不断分解成小问题，小问题在进行分解(而且每一次问题的解决方法都一样)
//也就是不断调用自身，递归结束的条件是小问题不能再分解
//再自下而上的不断解决问题


//全排列的生成
//递归思想
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"请输入要进行几位数的全排列:";
	cin>>n;
	for(int i=1;i<=n;i++)
		a[i]=i;
	printpermutation(a,1,n);
return 0;
}
void printpermutation(int a[],int k,int n)
{
	if(k==n)
	{
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	else
	{
		for(int i=k;i<=n;++i)
		{
			Swap(a[k],a[i]);
			printpermutation(a,k+1,n);
			Swap(a[k],a[i]);
		}
	}
}
*/
/*
#include <iostream>
using namespace std;
void cl(int a[],int l,int w,int x,int n,int z);
int main()
{
	int a[100],l,n;
	cout<<"请输入要计算次幂的数字:";
	cin>>l;
	cout<<"请输入要计算多少次幂:";
	cin>>n;
	cl(a,l,l,1,n,1);
	return 0;
}
void cl(int a[],int l,int w,int x,int n,int z)
{
	if(2*x<=n)
	{
		w=w*w;
		x=2*x;
		cl(a,l,w,x,n,z);
	}
	else if(x<n-1)
	{
		a[z]=w;
		z++;
		cl(a,l,l,1,n-x,z);
	}
	else if(x==n-1||x==n)
	{
		a[z]=w;
		int sum=1;
		for(int i=1;i<=z;i++)
			sum=a[i]*sum;
		if(x==n-1)
			sum=sum*l;
		cout<<"x的n次方为:"<<sum<<endl;
	}
}
*/


/*
#include <iostream>
using namespace std;
int cl(int n,int a);
int main()
{
	int n,a;
	cout<<"请输入你所要计算次幂的数:";
	cin>>n;
	cout<<"请输入你所要计算的次幂:";
	cin>>a;
	cout<<"计算后的结果为:"<<cl(n,a)<<endl;
	return 0;
}
*/
//递归解决,其算法时间复杂度为o(n);
/*
int cl(int n,int a)
{
	if(n==0)
		return 1;
	else if(n==1)
		return a;
	else
		return a*cl(n-1,a);
}
*/
//递归解决，其时间复杂度为log n
/*
int cl(int n,int a)
{
	int t;
	if(n==0)
		return 1;
	else if(n==1)
		return a;
	else
	{
		t=cl(n/2,a);
		if(n%2==0)
			return t*t;
		else
			return a*t*t;
	}
}
*/
	



