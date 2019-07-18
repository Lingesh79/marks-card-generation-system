#include<iostream>
using namespace std;
class sem1
{
	public:int m[5],c[5];
		char s1[20],s2[20],s3[20],s4[20],s5[20];
		int avg[5];
		char g[5];
		int gp[5];
		int sem;
		char name[25];
		char fname[25],mname[25];
		char usn[25];
		char res[5];
		float sgpa1,cgpa1;
		int C,GP,Gp,q;
		sem1();
		void compute();
		void display();
};
sem1::sem1()
{
	cout<<"\n enter student name \n";
	cin>>name;
	cout<<"\n enter fathers name \n";
	cin>>fname;
	cout<<"\n enter mothers name \n";
	cin>>mname;
	cout<<"\n enter usn \n";
	cin>>usn;
	cout<<"\n enter semester\n";
	cin>>sem;
	cout<<"\n enter five subjects names \n";
	cin>>s1>>s2>>s3>>s4>>s5;
	cout<<"\n enter five subjects credits \n";
	for(int i=0;i<5;i++)
	{
		cout<<"\n subject"<<i+1<<"credits is\n";
		cin>>c[i];
	}
	cout<<"\n enter five subject marks\n";
	for(int j=0;j<5;j++)
	{
		cout<<"\n subject"<<j+1<<"marks is\n";
		cin>>m[j];
	}
}
void sem1::compute()
{
	for(int k=0;k<5;k++)
	{
		avg[k]=m[k]/10;
	}
	for(int l=0;l<5;l++)
	{
		switch(avg[l])
		{
			case 10:
			case 9:g[l]='S';
				res[l]='P';
				break;
			case 8:g[l]='A';
				res[l]='P';
				break;
			case 7:
			case 6:g[l]='B';
				res[l]='P';
				break;
			case 5:g[l]='C';
				res[l]='P';
				break;
			case 4:g[l]='D';
				res[l]='P';
				break;
			case 3:
			case 2:
			case 1:
			case 0:g[l]='F';
				res[l]='F';
				break;
			default:break;
		}
	}
	for(int m=0;m<5;m++)
	{
		switch(g[m])
		{
			case 'S':gp[m]=10*c[m];
				break;
			case 'A':gp[m]=9*c[m];
				break;
			case 'B':gp[m]=8*c[m];
				break;
			case 'C':gp[m]=7*c[m];
				break;
			case 'D':gp[m]=5*c[m];
				break;
			case 'F':gp[m]=0*c[m];
				break;
			default:break;
		}
	}
	C=c[0]+c[1]+c[2]+c[3]+c[4];
	GP=gp[0]+gp[1]+gp[2]+gp[3]+gp[4];
	sgpa1=(float)GP/C;
	Gp=0;
	for(int o=0;o<5;o++)
	{
		if(g[o]!='F')
		{
			Gp=Gp+gp[o];
		}
		else
		{
			Gp=Gp;
		}
	}
	cgpa1=(float)Gp/C;
}
void sem1::display()
{
	cout<<"\t\t BMS COLLEGE OF ENGINEERING\n";
	cout<<"\t bull temple road basvangudi bangalore-19 \n";
	cout<<"     DEPARTMENT OF INFORMATION SCIENCE AND ENGINEERING \n";
	cout<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"father's name:"<<fname<<endl;
	cout<<"mother's name:"<<mname<<endl;
	cout<<"usn:"<<usn<<endl;
	cout<<"semester:"<<sem<<endl;
	cout<<endl<<endl;
	cout<<"subject   marks   grade   grade point   result \n";
	cout<<s1<<"    \t"<<m[0]<<"    \t"<<g[0]<<"\t\t"<<gp[0]<<"    \t"<<res[0]<<endl;
	cout<<s2<<"    \t"<<m[1]<<"    \t"<<g[1]<<"\t\t"<<gp[1]<<"    \t"<<res[1]<<endl;
	cout<<s3<<"    \t"<<m[2]<<"    \t"<<g[2]<<"\t\t"<<gp[2]<<"    \t"<<res[2]<<endl;
	cout<<s4<<"    \t"<<m[3]<<"    \t"<<g[3]<<"\t\t"<<gp[3]<<"    \t"<<res[3]<<endl;
	cout<<s5<<"    \t"<<m[4]<<"    \t"<<g[4]<<"\t\t"<<gp[4]<<"    \t"<<res[4]<<endl;
	cout<<endl<<endl;
	cout<<"sgpa:"<<sgpa1<<endl;
	cout<<"cgpa:"<<cgpa1<<endl;
	cout<<"class obtained is";
	if(sgpa1>=7.75)
	{
		cout<<"first class with distinction"<<endl;
	}
	else if(sgpa1<7.75 && sgpa1>=6.75)
	{
		cout<<"first class"<<endl;
	}
	else if(sgpa1<6.75 && sgpa1>=5.75)
	{
		cout<<"second class"<<endl;
	}
	else
	{
		cout<<"fail class"<<endl;
	}
}
class sem2:public sem1
{
	public:int ma[5],ca[5];
		char sa1[20],sa2[20],sa3[20],sa4[20],sa5[20];
		int avga[5];
		char ga[5];
		int gpa[5];
		int sema;
		char resa[5];
		float sgpaa1,cgpaa1;
		int Ca,GPa,Gpa;
		sem2();
		void computea();
		void displaya();
};
sem2::sem2()
{
	cout<<"\n enter five subjects names \n";
	cin>>sa1>>sa2>>sa3>>sa4>>sa5;
	cout<<"\n enter five subjects credits \n";
	for(int i=0;i<5;i++)
	{
		cout<<"\n subject"<<i+1<<"credits is\n";
		cin>>ca[i];
	}
	cout<<"\n enter five subject marks\n";
	for(int j=0;j<5;j++)
	{
		cout<<"\n subject"<<j+1<<"marks is\n";
		cin>>ma[j];
	}
}
void sem2::computea()
{
	for(int k=0;k<5;k++)
	{
		avga[k]=ma[k]/10;
	}
	for(int l=0;l<5;l++)
	{
		switch(avga[l])
		{
			case 10:
			case 9:ga[l]='S';
				resa[l]='P';
				break;
			case 8:ga[l]='A';
				resa[l]='P';
				break;
			case 7:
			case 6:ga[l]='B';
				resa[l]='P';
				break;
			case 5:ga[l]='C';
				resa[l]='P';
				break;
			case 4:ga[l]='D';
				resa[l]='P';
				break;
			case 3:
			case 2:
			case 1:
			case 0:ga[l]='F';
				resa[l]='F';
				break;
			default:break;
		}
	}
	for(int m=0;m<5;m++)
	{
		switch(ga[m])
		{
			case 'S':gpa[m]=10*ca[m];
				break;
			case 'A':gpa[m]=9*ca[m];
				break;
			case 'B':gpa[m]=8*ca[m];
				break;
			case 'C':gpa[m]=7*ca[m];
				break;
			case 'D':gpa[m]=5*ca[m];
				break;
			case 'F':gpa[m]=0*ca[m];
				break;
			default:break;
		}
	}
	Ca=ca[0]+ca[1]+ca[2]+ca[3]+ca[4];
	GPa=gpa[0]+gpa[1]+gpa[2]+gpa[3]+gpa[4];
	sgpaa1=(float)GPa/Ca;
	Gpa=0;
	for(int o=0;o<5;o++)
	{
		if(ga[o]!='F')
		{
			Gpa=Gpa+gpa[o];
		}
		else
		{
			Gpa=Gpa;
		}
	}
	cgpaa1=(cgpa1+(float)Gpa/Ca)/2;
}
void sem2::displaya()
{
	cout<<"\t\t BMS COLLEGE OF ENGINEERING\n";
	cout<<"\t bull temple road basvangudi bangalore-19 \n";
	cout<<"     DEPARTMENT OF INFORMATION SCIENCE AND ENGINEERING \n";
	cout<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"father's name:"<<fname<<endl;
	cout<<"mother's name:"<<mname<<endl;
	cout<<"usn:"<<usn<<endl;
	cout<<"semester:"<<++sem<<endl;
	cout<<endl<<endl;
	cout<<"subject   marks   grade   grade point   result \n";
	cout<<sa1<<"    \t"<<ma[0]<<"    \t"<<ga[0]<<"\t\t"<<gpa[0]<<"    \t"<<resa[0]<<endl;
	cout<<sa2<<"    \t"<<ma[1]<<"    \t"<<ga[1]<<"\t\t"<<gpa[1]<<"    \t"<<resa[1]<<endl;
	cout<<sa3<<"    \t"<<ma[2]<<"    \t"<<ga[2]<<"\t\t"<<gpa[2]<<"    \t"<<resa[2]<<endl;
	cout<<sa4<<"    \t"<<ma[3]<<"    \t"<<ga[3]<<"\t\t"<<gpa[3]<<"    \t"<<resa[3]<<endl;
	cout<<sa5<<"    \t"<<ma[4]<<"    \t"<<ga[4]<<"\t\t"<<gpa[4]<<"    \t"<<resa[4]<<endl;
	cout<<endl<<endl;
	cout<<"sgpa:"<<sgpaa1<<endl;
	cout<<"cgpa:"<<cgpaa1<<endl;
	cout<<"class obtained is:";
	if(sgpaa1>=7.75)
	{
		cout<<"first class with distinction"<<endl;
	}
	else if(sgpaa1<7.75 && sgpaa1>=6.75)
	{
		cout<<"first class"<<endl;
	}
	else if(sgpaa1<6.75 && sgpaa1>=5.75)
	{
		cout<<"second class"<<endl;
	}
	else
	{
		cout<<"fail class"<<endl;
	}
}
int main()
{
	int n;
	cout<<"\nenter number of students \n";
	cin>>n;
	sem2 *ob;
	ob=new sem2[n];
	for(int p=0;p<n;p++)
	{
		ob[p].compute();
		ob[p].display();
		ob[p].computea();
		ob[p].displaya();
	}
	return(0);
}
