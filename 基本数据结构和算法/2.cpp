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
	


//树形结构之二叉树
//二叉树有满二叉树和完全二叉树(满二叉树一定是完全二叉树,完全二叉树不一定是满二叉树)
//完全二叉树的特性
//           1.左子树的深度减去右子树的深度等于0或1,（也就是叶子结点要么在最底层，要么在次低层）
//           2.假设完全二叉树的深度为K，结点数为n     则n大于（2的K-1次幂）-1，小于(2的k次幂)-1.
//           3.完全二叉树的深度为(log以2为底 n为对数)+1        n是结点数
//           
//二叉树的顺序存储结构(要先把二叉树补成完全二叉树)

//用一个数组来存二叉树各个节点的序号
//在用一个节点来存结点中的数据
/*
#include <iostream>
using namespace std;
int main()
{
	int a[100],b[100],n;
	cout<<"请输入二叉树有几个结点:";
	cin>>n;
	cout<<"请输入二叉树的所有结点的编号:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	cout<<"请根据各个结点的顺序依次输入各个节点的数据:";
	for(int i=0;i<=n-1;i++)
		cin>>b[a[i]];
	cout<<"二叉树各个结点的序号以及其对应的结点的值为"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<"："<<b[a[i]]<<"  ";
	return 0;
}
*/







//二叉树的链式存储结构(二叉链表，三叉链表)

//二叉链表
//二叉链表有两个指针域，分别指向左孩子和右孩子
//利用先序建立算法(递归思想)---类似于先序遍历算法

/*
#include <iostream>
using namespace std;
struct tree
{
	tree *left;
	int n;
	tree *right;
};
void make_tree(tree **head);
void first_ergodic(tree *head);
void among_ergodic(tree *head);
void finally1_ergodic(tree *head);
void del_tree(tree *head,int l,tree &z);

int first_statistics(tree *head);
int main()
{
	tree head;
	int n;
	cout<<"请输入根结点的值:";
	cin>>head.n;
	cout<<"请输入此结点的左子树是否为空(空:0,不空:1):";
	cin>>n;
	if(n==0)
		(head).left=NULL;
	else if(n==1)
		make_tree(&((head).left));
	cout<<"请输入此结点右子树是否为空(空:0,不空:1)";
	cin>>n;
	if(n==0)
		(head).right=NULL;
	else if(n==1)
		make_tree(&(head).right);
	tree *p1=&head;
	//        first_ergodic(p1);     先序遍历算法
	//        among_ergodic(p1);     中序遍历算法
	//        finally1_ergodic(p1);  后序遍历算法
	//        cout<<"叶子结点共有:"<<first_statistics(&head)<<endl;   利用任意一个递归遍历算法来求叶子结点的个数
	first_ergodic(p1);
	cout<<endl;
	cout<<"请输入你想要删除的结点的值:";
	int l;
	cin>>l;
	del_tree(p1,l,head);
	first_ergodic(p1);
	cout<<endl;
	return 0;
}
void make_tree(tree **head)
{
	(*head)=new tree;
	cout<<"请输入此结点的值:";
	cin>>(*head)->n;
	int n;
	cout<<"请输入此结点的左孩子是否为空(空:0,不空:1):";
	cin>>n;
	if(n==0)
		(*head)->left=NULL;
	else if(n==1)
		make_tree(&((*head)->left));
	cout<<"请输入此结点右孩子是否为空(空:0,不空:1)";
	cin>>n;
	if(n==0)
		(*head)->right=NULL;
	else if(n==1)
		make_tree(&(*head)->right);

}

*/
//三叉链表
//三叉链表比二叉链表多了一个指针域，指向上层结点
/*
#include <iostream>
using namespace std;
struct tree
{
	tree *front;
	tree *left;
	tree *right;
	int n;
};
int main()
{
	tree head;
	int n;
	head.front=NULL;
	cout<<"请输入根结点的值:";
	cin>>head.n;
	cout<<"请输入此结点的左子树是否为空(空:0,不空:1):";
	cin>>n;
	if(n==0)
		(head).left=NULL;
	else if(n==1)
		make_tree(&((head).left),&head);
	cout<<"请输入此结点右子树是否为空(空:0,不空:1)";
	cin>>n;
	if(n==0)
		(head).right=NULL;
	else if(n==1)
		make_tree(&(head).right,&head);
	return 0;
}
void make_tree(tree **head,tree *p1)
{
	(*head)=new tree;
	(*head)->front=p1;
	cout<<"请输入此结点的值:";
	cin>>(*head)->n;
	int n;
	cout<<"请输入此结点的左孩子是否为空(空:0,不空:1):";
	cin>>n;
	if(n==0)
		(*head)->left=NULL;
	else if(n==1)
		make_tree(&((*head)->left),*head);
	cout<<"请输入此结点右孩子是否为空(空:0,不空:1)";
	cin>>n;
	if(n==0)
		(*head)->right=NULL;
	else if(n==1)
		make_tree(&(*head)->right,*head);
}
*/


//二叉树的遍历算法
//              1.递归遍历(先序遍历，中序遍历，后序遍历)
//              2.层次遍历
//              3.非递归遍历




//二叉树的递归遍历之先序遍历
//(先序是相对于访问左右孩子而言的,即先访问根结点的值，在访问左右孩子)
/*
void first_ergodic(tree *head)
{
	cout<<"此结点的值为:"<<head->n<<endl;
	if(head->left!=NULL)
		first_ergodic(head->left);
	if(head->right!=NULL)
		first_ergodic(head->right);
}
*/
//二叉树的递归遍历之中序遍历
//(中序遍历即先访问左孩子，在访问结点的值，在访问右孩子)
/*
void among_ergodic(tree *head)
{
	if(head->left!=NULL)
		among_ergodic(head->left);
	cout<<"此结点的值为:"<<head->n<<endl;
	if(head->right!=NULL)
		among_ergodic(head->right);
}
*/
//二叉树的遍历算法之后序遍历
//(后序遍历即先访问左子树在访问右子树，最后在访问结点的值)
/*
void finally1_ergodic(tree *head)
{
	if(head->left!=NULL)
		finally1_ergodic(head->left);
	if(head->right!=NULL)
		finally1_ergodic(head->right);
	cout<<"此结点的值为:"<<head->n<<endl;
}
*/
//二叉树的层次遍历
//利用了队列先进先出，后进后出的特性
//队列的这种特点可以把每一个结点的地址按照层次顺序保存起来
/*
void gradation_tree(tree *head)
{
	tree a[100];
	int hight=0,low;
	low=0-1;
	if(head==NULL)
		cout<<"此二叉树为空树!"<<endl;
	else
	{
		a[hight]=*head;

		while(low!=hight)
		{
			low++;
			cout<<"此结点的值为:"<<a[low].n<<endl;
			if(a[low].left!=NULL)
			{
				hight++;
				a[hight]=*a[low].left;
			}
			if(a[low].right!=NULL)
			{
				hight++;
				a[hight]=*a[low].right;
			}
		}
	}
}
*/

//根据遍历序列来重新复原构建二叉树

//根据先序遍历序列和中序遍历序列来复原构建二叉树
/*
#include <iostream>
using namespace std;
struct tree
{
	tree *left;
	int n;
	tree *right;
};
int main()
{
	int a[100],b[100];


}
void rmake_tree(int a[],int b[],int i,int j,int k,int l,tree *head)
{
	//a数组为先序遍历序列，b数组为中序遍历序列，i,j为先序遍历序列的上下标，k,l为中序序列的上下标
	head=new tree;
	head->n=a[i];
	int w=k;
	while(a[i]!=a[w])
		w++;
	//对左子树进行递归
	if(k==w)
		head->left==NULL;
	else                    
		rmake_tree(a,b,i+1,w-k+i,k,w-1,(head->left));
	//对右子树进行递归
	if(l==w)
		head->right=NULL;
	else
		rmake_tree(a,b,w+i-k+1,j,w+1,l,(head)->right);
}
*/

//统计叶子结点的数目
/*
int first_statistics(tree *head)
{
	int sum=0,n=0;
	cout<<"此结点的值为:"<<head->n<<endl;
	if(head->left!=NULL)
		sum=first_statistics(head->left);    //左子树中的叶子结点个数
	if(head->right!=NULL)
		n=first_statistics(head->right);     //右子树中的叶子结点个数
	if(head->left==NULL&&head->right==NULL)
		return 1;                            //如果左右子树都为空说明这个结点为叶子结点，返回1表示一个叶子结点
	else
		return 0+sum+n;                      //如果左右子树中有有一个子树不为空其就不为叶子结点就返回0+不为空的子树所含的叶子结点
}

*/


//求二叉树的深度用递归的方法
//其实二叉树本身就是递归思想的一种抽象(以为每一个子树又可以单独看成是一个新的二叉树)
/*
int first_depth(tree *head)
{
	int w1=0,w2=0;
	if(head==NULL)              //如果根结点为空则深度为零
		return 0;
	else if(head->left==NULL&&head->right==NULL)   //如果根结点不为空而左右子树都为空则深度为1
		return 1;
	else                       //否则就对左右子树进行递归求其深度
	{
		w1=first_depth(head->left);
		w2=first_depth(head->right);
		return max(w1,w2)+1;
	}
}
*/

//二叉树的变形之二叉排序树    BST树
//定义:要么为空树,要存在左子树和右子树则  左子树的值小于根结点的值，右子树的值大于根结点的值,当然每一个子树也符合这种规律
//规律:把其各个结点的值按递增排序的序列 与中序遍历序列相同

/*
//二叉排序树的查找
int sort_tree(tree *head,int m)
{
	if(m<head->n)
		sort_tree(head->left,m);
	else if(m>head->n)
		sort_tree(head->right,m);
	else if(m==head->n)
		return 1;
	else
	    return 0;
}


//二叉排序树的插入,查找失败后进行插入
void msort_tree(tree *head,int m)
{
	int t;
	t=sort_tree(head,m);
	if(t==1)
		cout<<"查找成功!"<<endl;
	else if(t==0)
	{
		tree h;
		h.n=m;
		h.left=NULL;
		h.right=NULL;
	}
}

void mmsort_tree(tree *head,tree h)   //h为查找失败后待插入的数据
{                                     
	if(head->n<h.n)                  //如果待插入的值小于根结点的值(往左子树考虑)
	{ 
	    if(head->left==NULL)         //如果根结点的左子树为空则此结点就应该插入到这
			head->left=&h;
		else
			mmsort_tree(head->left,h);//否则进入到根结点的左子树继续进行判断
	}
	else                              //如果待插入的值大于根结点的值(往右子树考虑)
	{
		if(head->right==NULL)         //如果根结点的右子树为空则此结点就应插入到这
			head->right=&h;
		else                          //否则进入到根结点的右子树继续进行判断
			mmsort_tree(head->right,h);
	}
}
*/


//二叉排序树 结点的删除操作
//注意有关传值和传地址的问题，如果单纯传值(无论是什么数据类型)其只是在函数中产生了一个相同的副本
//传地址才可以操作原来的实体(引用也可以)    如果传的是指针则其也是相当于传地址
//如果想要改变指针的值则应该把指针的地址传过去用指针的指针来接

//此题用z来保存待删除结点的上一个结点，（这个节点的数据类型是结构体，相当于下一个结点有了两个直接前驱,但这个结点只是真实结点的一个副本，其指针域改变并不会影响另一个结点的指针域）

/*
void del_tree(tree *head,int l,tree &z)                
{
	if(head->n>l)                         //当删除值小于根结点时往左子树递归，并把根结点保存并传递过去
	{
		if(head->left!=NULL)
			del_tree(head->left,l,*head);
		else
			cout<<"此结点不存在,无法删除!"<<endl;
	}
	else if(head->n<l)                    //当删除值大于根结点时往右子树递归,并把根结点保存并传递过去
	{
		if(head->right!=NULL)
			del_tree(head->right,l,*head);
		else
			cout<<"此结点不存在,无法理解!"<<endl;
	}
	else if(head->n==l)                   //当删除值等于根节点时(分三种情况)
	{
		if(head->left==NULL&&head->right==NULL)  //1.此根结点为叶子结点
		{
			if(head==z.left)
				z.left=NULL;
			else if(head==z.right)
				z.right=NULL;
		}
		else if(head->left==NULL||head->right==NULL) //2.此结点有左子树或右子树
		{
			if(head->left==NULL)
			{
				if(head==z.left)
					z.left=head->right;
				else if(head==z.right)
					z.right=head->right;
			}
			else if(head->right==NULL)
			{
				if(head==z.left)
					z.left=head->left;
				else if(head==z.right)
					z.right=head->left;
			}
		}
		else                               //3.此结点的左子树右子树都存在(就需要根据中序遍历序列确定前驱分为两种情况)
		{
			if(head->left->right==NULL)     //第一种情况为此结点的左子树的右子树为空则前驱一定为此左子树
			{
				head->n=head->left->n;
				head->left=head->left->left;
			}
			else                            //第二种情况为此结点的左子树的右子树不为空则前驱为“右子树”的右子树为空的那个“右子树”；
			{
				tree *ee;
				tree *head1=head->left;
				while(head1->right!=NULL)
				{
					ee=head1;                //注意有关至于结构体指针域的问题
					head1=head1->right;      //如果ee是一个结构体   用另外一个结构体对其进行赋值后产生的是另外一个结构体的副本
				}                            //相当于现在下一个节点有两个直接前驱(但这个结点只是另一个节点的副本，其指针域改变并不影响另一个结点的指针域)
				head->n=head1->n;
				ee->right=head1->left;
			}
		}
	
	}

}

*/
//BST(二叉排序树要尽量保持平衡),其在完全不平衡的情况下树高是等于序列长度的
//如果其完全不平衡则插入数据的时间复杂度为n*n;
//AVL 平衡二叉树的定义：平衡二叉树是指左子树的深度与右子树的深度之差不超过1,当然左子树和右子树也分别满足这些条件



//结点的路径长度：结点的路径为根结点到该结点上分支的个数，
//树的路径长度：该树所有结点路径之和
//树的带权路径长度：每一个叶子结点的路径长度*叶子结点的权值之和

//带权路径长度最小的树为哈夫曼树（最优树）

//哈夫曼树的构建,（以及利用哈夫曼树进行哈弗曼编码）
/*
#include <iostream>
using namespace std;

struct tree       //结点多了一个头指针指向自己的双亲，
{                 //yy为其上一个树枝为左分支还是右分支
	tree *left;   //n为其结点的值
	tree *right;
	tree *he;
	int yy;
	int n;
};
struct mama       //叶子结点对应的哈夫曼编码
{
	int p[10];     //存哈夫曼码
	int j;         //表示此叶子结点的哈夫曼编码的位数
	int name;      //表示此叶子结点的值
};
void first_ergodic(tree *head);
void fis_tree(tree *head,tree* a[],int& o);
int main()
{
	tree* a[100],b[100];          //a数组用来存各个更新后结点的地址，b数组为开始时各个叶子结点的实体
	
	int n;
	
	cout<<"请输入此哈夫曼树共有几个结点:";
	cin>>n;
	int n1=n;
	for(int i=0;i<=n-1;i++)        //把b中叶子的实体的地址赋给a数组（不能直接用a数组存叶子结点，因为在每次更新时各个叶子结点的值会被改变不好控制）
		a[i]=&b[i];
	for(int i=0;i<=n-1;i++)        //把每一个叶子结点都初始化
	{
		cin>>a[i]->n;
		a[i]->left=NULL;
		a[i]->right=NULL;
		a[i]->he=NULL;
		a[i]->yy=3;
	}
	int w1,w2;
	            //同一个作用域其如果循环定义其还是同一个变量，所以这里每次把两个权值最小的树合并时都要利用一个辅助数组来生成新合成树实体
	tree p1[100];
	int js=0;
	while(n>1)
	{
		int min1=100000000;
		for(int i=0;i<=n-1;i++)    //找到根结点权值最小的两棵树
			if(a[i]->n<min1)
			{
				w1=i;
				min1=a[i]->n;
				
			}
		cout<<min1<<" kkkk"<<endl;
		int min2=10000;
		for(int i=0;i<=n-1;i++)
			if(a[i]->n<min2&&a[i]->n!=min1)
			{
				w2=i;
				min2=a[i]->n;
				
			}
		cout<<min2<<" pppp"<<endl;
		p1[js].n=min1+min2;        //生成一个新树来把两个小树合并
		p1[js].he=NULL;            //并让这个新树的根结点的头指针为空，
		p1[js].yy=3;
		cout<<p1[js].n<<endl;
		p1[js].left=a[w1];         //如果把小树当左子树就把其携带值设为0，当成右子树设为1，并把头指针指向新树根结点
		a[w1]->yy=0;
		a[w1]->he=&p1[js];
		p1[js].right=a[w2];
		a[w2]->yy=1;
		a[w2]->he=&p1[js];
		int ww=0;
		for(int i=0;i<=n-1;i++)    //把操作数组a更新,其余树都往前移，在把新合成的树填充到最后，总数量n减一
			if(i!=w1&&i!=w2)       //当n等于1时循环结束，此时合成一个完整的哈夫曼树
				a[ww++]=a[i];
		n--;
		
		a[ww]=&p1[js];
		cout<<a[ww]->n<<"  kk"<<endl;
		js++;
	}
	cout<<n<<endl;
	first_ergodic(a[0]);



	tree *nn[100];        //用来存叶子结点
	int o=1;
	fis_tree(a[0],nn,o);  //找到叶子结点并把其地址存起来


	mama uo[100];         //一个哈弗曼编码数组，每一个元素都是一个叶子结点的哈夫曼码以及其码的信息
	for(int i=1;i<=n1;i++) //将每一个叶子结点的哈夫曼码保存到uo数组中
	{
		uo[i].j=0;
		uo[i].name=nn[i]->n;
		while(nn[i]->he!=NULL)           //从根结点开始向上遍历到整棵树的根结点，把途径过程中的结点的yy值保存
		{
			uo[i].p[++uo[i].j]=nn[i]->yy;
			nn[i]=nn[i]->he;
		}
	}


	for(int i=1;i<=n1;i++)          //因为存的时候是从叶子结点回溯到根结点的所以其保存的哈夫曼码是反过来的
	{                               //所以现实的时候是反过来显示的
		cout<<uo[i].name<<"的哈弗曼编码为:";
		for(int u=uo[i].j;u>=1;u--)
			cout<<uo[i].p[u];
		cout<<endl;
	}

	return 0;

}

void first_ergodic(tree *head)                         //查看各个节点的值
{
	if(head->he!=NULL&&head->he->he==NULL)
		cout<<"头指针为空"<<endl;
	cout<<"此结点的值为:"<<head->n<<"   "<<"携带值为:"<<head->yy<<endl;
	if(head->left!=NULL)
		first_ergodic(head->left);
	if(head->right!=NULL)
		first_ergodic(head->right);
}
void fis_tree(tree *head,tree* a[],int& o)             //找到叶子结点并把它存到a[]中，o为存结点的位置
{
	if(head->left!=NULL)
		fis_tree(head->left,a,o);
	if(head->right!=NULL)
		fis_tree(head->right,a,o);
	if(head->left==NULL&&head->right==NULL)
	{
		a[o++]=head;
		cout<<o<<endl;
		cout<<head->n<<endl;
	}
}
//关于哈夫曼树与哈夫曼码的总结：给定各个叶子结点的值其生成的哈夫曼树不是唯一的（因为随便把一个节点的左子树和右子树交换一下就会生成一个新的哈夫曼树）
//因为生成的哈夫曼树不唯一也就是整棵树各个结点的左右子树都不固定，所以其各个叶子结点的哈弗曼编码也不固定，（同一组数据利用哈夫曼树进行哈夫曼编码会有多个不同的版本，但其所用的资源肯定相同）


//含有n个叶子结点的哈夫曼树有2*n-1个结点

//哈夫曼码简介：
//哈夫曼编码是根据哈夫曼树得来的
//对n个数进行编码则把这n个数当做哈夫曼树的叶子结点然后构建出哈夫曼树
//后左分支都用1表示，右分支都用0表示，则从根节点到每一个叶子节点的数的组合就为其对应编码

*/



//堆:堆分为小顶堆和大顶堆
//判断一个序列是为小顶堆还是大顶堆或者不是堆，就根据其序列按顺序构成完全二叉树
//如果是大顶堆的话则每一个结点的左右子树都小于这个结点，如果是小顶堆的话则每一个结点的左右子树都大于这个结点，否则就不是堆
//采用顺序存储结构方便些


//利用堆结合二叉树的排序称为  堆排序
/*
#include <iostream>
using namespace std;
void initi(int a[],int n);
void cl(int a[],int n);
void tz(int a[],int n);
int main()
{
	int a[100],n;
	cout<<"请输入有多少个元素参与排序:";
	cin>>n;
	cout<<"请输入各个参与排序的元素的值:";
	for(int i=1;i<=n;i++)
		cin>>a[i];
	initi(a,n);  //将序列初始化为小顶堆形式
	tz(a,n);
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";

	cl(a,n);               //进行调整
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	
	return 0;              
}
void initi(int a[],int n)
{
	int elem,x,zhong;
	elem=n/2;
	for(int i=elem;i>=2;i--)
	{
		if(2*i<=n&&2*i+1<=n)
		{
			if(a[2*i]<a[2*i+1])
				x=2*i;
			else
				x=2*i+1;
			if(a[i]>a[x])
			{
			    zhong=a[x];
			    a[x]=a[i];
			    a[i]=zhong;
			}
		}
		else if(2*i<=n)
		{
			if(a[i]>a[2*i])
			{
			    zhong=a[2*i];
				a[2*i]=a[i];
				a[i]=zhong;
			}
		}
	}
}

void cl(int a[],int n)
{
	int e=n;
	int b[100];
	int js=0;
	while(n>0)
	{
	    b[++js]=a[1];
	    a[1]=a[n--];
		tz(a,n);
	}
	for(int i=1;i<=e;i++)
		a[i]=b[i];
}
void tz(int a[],int n)
{
	int i=1,x,zhong;
	while(1)
	{
		if(2*i<=n&&2*i+1<=n)
		{
			if(a[2*i]<a[2*i+1])
				x=2*i;
			else
				x=2*i+1;
			if(a[i]>a[x])
			{
			    zhong=a[x];
			    a[x]=a[i];
			    a[i]=zhong;
				i=x;
			}
			else
				break;
			
		}
		else if(2*i<=n)
		{
			if(a[i]>a[2*i])
			{
			    zhong=a[2*i];
				a[2*i]=a[i];
				a[i]=zhong;
				i=2*i;
			}
			else
				break;
		}
		else 
			break;
	}
}
*/

//二叉排序树(BST)的构建
