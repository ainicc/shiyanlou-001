//ѡ������ֱ��ѡ������
//ѡ�������ǲ��ȶ�������
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
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
	cout<<"ѡ��������Ԫ��Ϊ:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/
//�鲢������ѡ������
//�鲢�����Ƿ��η���һ�����֣����õݹ�˼��,�����ĺϲ�
//����Ȼÿһ���������������������м�����ﵽ��������
/*
#include <iostream>
using namespace std;
void gb(int a[],int low,int hight);
void gab(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"��������Ҫ�����Ԫ�ص���Ŀ:";
	cin>>n;
	cout<<"��������Ҫ��������ĸ���Ԫ��:";
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
	if(low<hight)                  //�ж����е����½��Ƿ�һ��,һ����˵����ֵ�һ��Ԫ�ز����ٷ���
	{
		mid=(low+hight)/2;          //�������ٲ�ֳ�С����
		gb(a,low,mid);              //�ٶ�ǰһ�������н��й鲢
		gb(a,mid+1,hight);           //�Ժ�һ�������н��й鲢
		gab(a,low,hight);            //��ǰ�󲿷ֶ��鲢��֮���ٶ�������������ĺϲ�
	}
}
void gab(int a[],int low,int hight)
{
	int zhong=(low+hight)/2,b=zhong+1,j1=low,j2=low;
	int p[100];
	while(j1<=zhong&&b<=hight)                //�����ĺϲ�,�ֱ���һ��ָ��ָ������1����Ԫ�أ���һ��ָ��ָ������2����Ԫ�أ�����һ��ָ�������еĵ�һ��Ԫ��
	{                                         //��������������һ�����б�����ͽ���ѭ��
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
	while(j1<=zhong)                          //�ж��ĸ�����û�б�����,����ʣ���Ԫ�ذ�˳����뵽����������
		p[j2++]=a[j1++];
	while(b<=hight)
		p[j2++]=a[b++];
	for(int i=low;i<=hight;i++)             //�ٰѸ��������е�Ԫ�ض����ص�ԭ������
		a[i]=p[i];
}
*/
//��������
//ð������
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100],elem;
	cout<<"����������Ҫ�����Ԫ�صĸ���";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
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
	cout<<"������Ԫ��Ϊ:";
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/
//����������һ�ֽ�������)
//��������Ҳ���õ��ǵݹ�˼��
//�ֱ��ÿһ�����е���һ����׼Ȼ�󾭹�������ǰ������ж�С�ڻ�׼������������ڻ�׼
//֮���ڷֱ��ǰ�����������ٽ���������������������Ϊ�����е����½����
//����������鲢�����˼�����ƶ��ǵݹ�,�����������������򲿷��������鲢�ǲ�����������ɢ
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
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
//�������������һ�����ǰһ��������������һ�δӺ����ѯ
//                  �����һ��������������һ�δ�ǰ���ѯ
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
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

//��������
//����λ���������������
/*
#include <iostream>
using namespace std;
struct student     //ѧ����������Ա(�����ؼ������ȼ����μ�С)
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
	cout<<"��������Ҫ���������ѧ���ĸ���:";
	cin>>n;
	cout<<"�ֱ������������ѧ�������� ��� ѧ��:"<<endl;
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
				gad(s1,x,x+e-1,2);           //���������ظ��Ŀ�ͷ�����������½紫��ȥ
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
							gad(s1,x1,x1+e1-1,3);     //���ڶ����ؼ��ֲ����������������ؼ����Ƿ����ٴ�����
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
						if(i==x+e-1&&e1>1)              //��ֹ�ؼ���һ���Ķ����������
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
				gad(s1,x,x+e-1,2);                      //��ֹ�ڶ����ؼ���һ�������������
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
	cout<<"������ѧ������ϢΪ:"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		cout<<s1[i].clas<<" ";
		cout<<s1[i].num<<" ";
		cout<<s1[i].studentid<<endl;
	}
	return 0;
}                                                    //�Ը�����ͬ���ȼ��Ĺؼ��ֵ�������Բ��û����������(���룬ѡ�񣬽���)������õ���ֱ�Ӳ��뷨
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
//�����㷨�ܽ�
//1.��������
//  (1).ֱ�Ӳ�������
//  (2).ϣ������(��С��������)
//2.ѡ������
//  (1).һ��ѡ������
//  (2).�鲢����
//3.��������
//  (1).ð������
//  (2).��������
//4.��������
//5.�ⲿ����



//ֱ�Ӳ�������
//ֱ�Ӳ��������ʱ�临�Ӷ�����δ���������е��������Ե������й�
//Ҳ����������ǰ����Խ�ӽ�������ʱ�临�Ӷ�ԽС
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
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
	cout<<"������Ԫ��Ϊ:";
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/

//ϣ������(��С��������)
//����ֱ�Ӳ�������Ļ����ϸĽ���,�Ƚ����з���ÿ��ֱ���ֱ�Ӳ�������
//Ȼ���ڲ�����С������ļ����֪��ÿ��Ϊһ��Ԫ�غ��ٽ���һ�β�����������
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"��������Ҫ����Ԫ�صĸ���";
	cin>>n;
	cout<<"��������Ҫ����ĸ���Ԫ��:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	int gad,i,j;
	for(gad=n/2;gad>=1;gad=gad/2)            //��ʼʱ��ÿһ��ļ��Ϊ���峤�ȵ�һ��,Ȼ����Щ����зֱ���������
	{                                                                             //�ٽ������СΪԭ����һ��,ֱ��ÿһ��ļ��С��1ʱ����
		for(i=0;i<=gad-1;i++)                //�ֱ��ÿһ���鶼����ֱ�Ӳ�������
		{
			for(j=i+gad;j<=n-1;j=j+gad)     //�Ӵ˴���ֱ�Ӳ���������㷨
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
	cout<<"������Ԫ��Ϊ:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/

//һ��ѡ������
//ѡ��������ǲ��ϴ������������ҳ���С��Ԫ�ؼ��뵽����������
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100],min,js;
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
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
	cout<<"������Ԫ��Ϊ:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	return 0;
}
*/

//�鲢����
//�鲢�������õ��ǵݹ�˼��,���η�
//�����������Ա�ĺϲ��������ò�������������������(������������ɢ)
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
void ga(int a[],int low,int hight);
int main()
{
	int n,a[100];
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gad(a,0,n-1);
	cout<<"������Ԫ��Ϊ:"<<endl;
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


//ð������
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100],elem;
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
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
	cout<<"������Ԫ��Ϊ:"<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/


//��������(���������һ��)
//����������鲢����һ���������õݹ�˼��
//ֻ������������������������,���鲢�����ǲ�����ɢ������
/*
#include <iostream>
using namespace std;
void gad(int a[],int low,int hight);
int main()
{
	int n,a[10];
	cout<<"����������Ҫ�����Ԫ�صĸ���:";
	cin>>n;
	cout<<"����������Ҫ����ĸ���Ԫ��:";
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	gad(a,0,n-1);
	cout<<"������Ԫ��Ϊ:"<<endl;
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



// �ݹ�
//���Ĵ����ж�
/*
#include <iostream>
#include <string>
using namespace std;
string nasa(char a[],int low,int hight);
int main()
{
	char a[20];
	int x=0,w=0;
	cout<<"������һ���ַ���:";
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
			return "���ַ���Ϊ���Ĵ�!";         //�ݹ����
		else if(low==hight)
			return "���ַ���Ϊ���Ĵ�!";         //�ݹ����
		else if(low<hight-1)
			return nasa(a,low+1,hight-1);
	}
	else if(a[low]!=a[hight])
		return "���ַ������ǻ��Ĵ�!";           //�ݹ����
}
*/
//��ѭ��������ݹ��жϻ��Ĵ�
/*
#include <iostream>
using namespace std;
int main()
{
	char a[100];
	int x=0,w=0;
	cout<<"������һ���ַ���:";
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
				cout<<"���ַ������ǻ��Ĵ�!";
				break;
			}
		}
		else if(low==hight-1)
		{
			if(a[low]==a[hight])
			{
				cout<<"���ַ���Ϊ���Ĵ�!";
				break;
			}
			else
			{
				cout<<"���ַ������ǻ��Ĵ�!";
				break;
			}
		}
		else if(low==hight)
		{
			cout<<"���ַ���Ϊ���Ĵ�!";
			break;
		}
	}
return 0;
}
*/

//���η��ǰ����ⲻ�Ϸֽ��С���⣬С�����ڽ��зֽ�(����ÿһ������Ľ��������һ��)
//Ҳ���ǲ��ϵ��������ݹ������������С���ⲻ���ٷֽ�
//�����¶��ϵĲ��Ͻ������


//ȫ���е�����
//�ݹ�˼��
/*
#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	cout<<"������Ҫ���м�λ����ȫ����:";
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
	cout<<"������Ҫ������ݵ�����:";
	cin>>l;
	cout<<"������Ҫ������ٴ���:";
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
		cout<<"x��n�η�Ϊ:"<<sum<<endl;
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
	cout<<"����������Ҫ������ݵ���:";
	cin>>n;
	cout<<"����������Ҫ����Ĵ���:";
	cin>>a;
	cout<<"�����Ľ��Ϊ:"<<cl(n,a)<<endl;
	return 0;
}
*/
//�ݹ���,���㷨ʱ�临�Ӷ�Ϊo(n);
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
//�ݹ�������ʱ�临�Ӷ�Ϊlog n
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
	



