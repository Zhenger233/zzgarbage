/*context 
//oj.txt
*/
//#include <bits/stdc++.h>
// #include "pch.h"
#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime>
#include <map>
#include <algorithm>
#include <random>
#include <set>
#include <fstream>
#include <sstream>
#include <cassert>
// #include <ctype>
#include <cstring>
using namespace std;
int main()
{
	map<int,int>m;
    goto l;
    m[2]=1;
    l:
    cout<<m[2];

}
/*
void swap2(int **a, int **b){
	int c = **a;
	a = b;
	**b = c;}
void swap1(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;}
*/
/*ASCLL
48-0  65-A  97-a
33!34"35#36$37%38&39'40(41)42*43+44,4546.47/48049150251352453554655756857958:59;60<61=62>63?64@65A66B67C68D69E70F71G72H73I74J75K76L77M78N79O80P81Q82R83S84T85U86V87W88X89Y90Z91[92\93]94^95_96`100d101e102f103g104h105i106j107k108l109m110n111o112p113q114r115s116t117u118v119w120x121y122z123{124|125}126~127
*/
/*
int readint(){
	int x;
	cin>>x;
	return x;}
*/
/*
int gcd(int a, int b){return b!=0?gcd(b, a%b):a;}
*/
//system("shutdown -s -t 0");//z0 shutdown
//std::cout << "Hello World!\n"; //z1 hello world
/*///z2 prime
bool prime(int x) {
	if(x==0||x==1)return 0;
        for(int i=2;i<=sqrt(x);i++)
            if(x%i==0)
                return 0;
        return 1;}
*/
/*///z3 perfect number
bool wanshu(int z){
	int y, x = 0;
	for (y = 1; y < z; y++)if (z%y == 0)x += y;
	return z==x;}
*/
/*///z4  a+aa+aaa
int a, n, i ;
	double s = 0,p,ss=0;
	cin>>a>>n;
	for (i = 0; i < n; i++){
		p = i;
		s = s + a * pow(10, p);
		ss += s;}
	cout<<s<<ss;
*/
/*///z5 factorial
long long  factorial(long long  a){
	return a==0?1:factorial(a-1);}
*/
/*///z6 Cmn//m up n down
long long Cmn(int m, int n){
	long long z = 1;
	if (m < n - m)m = n - m;
	for (int y = m + 1; y <= n; y++)z *= y;
	for (int x = 1; x <= n - m; x++)z /= x;
	return z;}
*/
/*///z7 bubble_sort
static void bubble_sort(int[] unsorted)
		{
			for (int i = 0; i < unsorted.Length; i++)for (int j = i; j < unsorted.Length; j++)if (unsorted[i] > unsorted[j]){
						int temp = unsorted[i];
						unsorted[i] = unsorted[j];
						unsorted[j] = temp;
					}
		}
*/
/*///z8 print_nn
void print_nn(int a)
{
	for (int n = 1; n <= a; n++){
		for (int m = 1; m <= a;m++)cout << a * (n-1)+m << ' ';
		cout << endl;
	}
}
*/
/*///z9 magic square
???
*/
/*///z10 dice
int a[30] = { 0 };
	for (int d1 = 1; d1 < 7; d1++)for (int d2 = 1; d2 < 7; d2++)for (int d3 = 1; d3 < 7; d3++)for (int d4 = 1; d4 < 7; d4++)for (int d5 = 1; d5 < 7; d5++){
						a[d1 - 1]++;
						a[d1 + d2 - 1]++;
						a[d1 + d2 + d3 - 1]++;
						a[d1 + d2 + d3 + d4 - 1]++;
						a[d1 + d2 + d3 + d4 + d5 - 1]++;}
	for (int i = 0; i < 30; i++){
		double t = a[i] / 38880.0;
		cout << i + 1 << ' ' << a[i] << ' ' << t << endl;}
*/
/*///z10 sort
void insertsort(int array[])
{
	int key,i;
	for (int a = 1; a < length; a++){
		key = array[a];
		i = a - 1;
		while (i >= 0 && array[i] < key){
			array[i + 1] = array[i];
			i--;
		}
		array[i + 1] = key;
	}
}
void choose_sort(int array[])
{
	for (int a = 0; a < length; a++)for (int b = a + 1; b < length; b++)if (array[b] > array[a]){
				array[a] += array[b];
				array[b] = array[a] - array[b];
				array[a] -= array[b];}
}
int max(int array[]){
	int z;
	for (int i = 0; i < length-1; i++)if (array[i] < array[i + 1])z = array[i + 1];
	return z;
}
void quicksort(int left,int right)
{
    int i,j,t,temp;
    if(left>right)return;
    temp=a[left];
    i=left;
    j=right;
    while(i!=j)
    {
        while(a[j]>=temp&&i<j)j--;
        while(a[i]<=temp&&i<j)i++;
        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    a[left]=a[i];
    a[i]=temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}
void quicksort(int l,int r)
{
    int i=l,j=r,t,temp=a[l];
    if(l>=r)return;
    while(i!=j)
    {
        while(i<j&&a[j]>=temp)j--;
        if(j>i)a[i=a[j];
        while(i<j&&a[i]<=temp)i++;
        if(i<j)a[j]=a[i];
    }
    a[i]=temp;
    quicksort(l,i-1);
    quicksort(i+1,r);
}
void shell_sort(int a[],int n)
{
	int gap,i,j,temp;
	for(gap=n/2;gap>0;gap/=2)for(i=gap;i<n;i++)for(j=i-gap;j>=0&&a[j]>a[j+gap];j-=gap)temp=a[j],a[j]=a[j+gap],a[j+gap]=temp;
}
*/
/*
typedef struct
{
	char name[100];
	double score;
}name_score;
void sol(name_score*a);
int main()
{
	name_score a[10];
	for (int i = 0; i < 10; i++)cin >> a[i].name >> a[i].score;
	sol(a);
	for (int n = 0; n < 10; n++)cout << n + 1 << "  " << a[n].name << a[n].score<<endl;
}
void sol(name_score*a)
{
	name_score temp;
	for (int z = 0; z < 10; z++)for (int y = z; y < 10; y++)if (a[y].score < a[z].score){temp = a[y];a[y] = a[z];a[z] = temp;}
}
*/
/*///lutece_48
int  p,n;
		long long s=0;
		cin >> n;
		while (cin >> p)s += (p*p + p * 100);
		printf("%.3lf", s / 10000.0);
*/
/*///lutece_69
int n, k,s=0;
	cin >> n >> k;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	if ((n*k - s) < 0)cout << 0;
	else cout << n * k - s;
*/
/*///lutece_70
int n;
	cin >> n;
	vector<int>t(n);
	vector<int>m(n);
	for (int i = 0; i < n; i++)cin >> t[i] >> m[i];
	for (int z = 0; z < n; z++)
	{
		long long fenmu = pow(2, t[z]);
		int x =(m[z]+t[z])/2;
		long long fenzi = Cmn(x,t[z]);
		int c;
		c = (fenzi > fenmu) ? fenzi : fenmu;
		while (fenzi%c != 0 || fenmu % c != 0)c--;
		cout << fenzi / c << "/" << fenmu / c << endl;
	}
}
*/
/*///luogu_beginner_p1000
printf("                ********\n               ************\n               ####....#.\n             #..###.....##....\n             ###.......######              ###            ###\n                ...........               #...#          #...#\n               ##*#######                 #.#.#          #.#.#\n            ####*******######             #.#.#          #.#.#\n           ...#***.****.*###....          #...#          #...#\n           ....**********##.....           ###            ###\n          ....****    *****....\n             ####        ####\n           ######        ######\n##############################################################\n#...#......#.##...#......#.##...#......#.##------------------#\n###########################################------------------#\n#..#....#....##..#....#....##..#....#....#####################\n##########################################    #----------#\n#.....#......##.....#......##.....#......#    #----------#\n##########################################    #----------#\n#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n##########################################    ############\n");
*/
/*///luogu_beginner_p1001
long long a, b;
	std::cin >> a >> b;
	std::cout << a + b;
*/
/*///luogu_populer_p1003
typedef struct
{
    int a,b,g,k; 
}p;
int main()
{
    int n,a,b,g,k,x0,y0;
    cin>>n;
    vector<p>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>g>>k;
        p t={a,b,a+g,b+k};
        s.push_back(t);
    }
    cin>>x0>>y0;
    for(int i=n-1;i>=0;i--)
        if(x0>=s[i].a&&x0<=s[i].g&&y0>=s[i].b&&y0<=s[i].k){
            cout<<i+1;
		return 0;}
    cout<<-1;
    return 0;
}
*/
/*///luogu_beginner_p1008
192 384 576
219 438 657
273 546 819
327 654 981
*/
/*///luogu_populer_p1012
bool f(string a,string b){
    return (a.size()>b.size()&&(b[a.size()]>a[0]))||(a.size()<b.size()&&(b[a.size()]<a[0]));}
int main()
{
	vector<string>a[10];
    int n;
    string t;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t;
        a[t[0]-'0'].push_back(t);
    }
    for(int i=9;i>=1;i--){
        sort(a[i].begin(),a[i].end(),f);
        for(string q:a[i])cout<<q;
    }
}
*/
/*///luogu_beginner_p1014
map<int,int>a;
    for(int i=1;i<=4800;i++)a[i*(i+1)/2]++;
    int b,c,n;
    cin>>n;
    for(b=n-1;b>0;b--)if(a[b]==1){
            c=b;
            break;}
    int z=(sqrt(1+8*c)-1)/2;
    if(z%2==1)cout<<n-c<<'/'<<z+2-n+c;
    else cout<<z+2-n+c<<'/'<<n-c;
*/
/*///luogu_populer_p1020
int a[100001],n=1,l[100001],r[100001],ans1=1,ans2=1;
    while(cin>>a[n])n++;
    n--;
    l[1]=r[1]=a[1];
    for(int i=2;i<=n;++i)
    {
        if(l[ans1]>=a[i])l[++ans1]=a[i];
        else l[upper_bound(l+1,l+1+ans1,a[i],greater<int>())-l]=a[i];
        if(r[ans2]<a[i])r[++ans2]=a[i];
        else r[lower_bound(r+1,r+1+ans2,a[i])-r]=a[i];
    }
    cout<<ans1<<'\n'<<ans2;
*/
/*///luogu_beginner_p1028
vector<int>a = {0,1};
	int b = 2;
	while (b <= 1001){
		int s = 0;
		for (int i = 1; i <= b / 2; i++)s += a[i];
		a.push_back(s+1);
		b++;
	}
	int n;
	cin >> n;
	cout << a[n];
*/
/*///luogu_populer_p1029
long long x,y,s=0;
    cin>>x>>y;
    for(long long i=1;i<=x*y/2;++i)if(x*y%i==0)if(__gcd(i,x*y/i)==x)s++;
    cout<<s;
*/
/*///luogu_beginner_p1035
int k = 0;
	cin >> k;
	double s = 0,i=0.0;
	while (s <= k){
		i++;
		s += 1.0 / i;
	}
	std::cout << i;
*/
/*///luogu_beginner_p1036
int nn,kk,a[21],b[21],sum=0,aa[21]={0},temp,ss;
	scanf("%d%d", &nn, &kk);
	for (int i = 1; i <= nn; ++i)b[i] = 1;
	for (int i = 1; i <= nn; ++i)scanf("%d", &a[i]);
	for (aa[1] = 0; aa[1] <= b[1]; ++aa[1])for (aa[2] = 0; aa[2] <= b[2]; ++aa[2])for (aa[3] = 0; aa[3] <= b[3]; ++aa[3])for (aa[4] = 0; aa[4] <= b[4]; ++aa[4])for (aa[5] = 0; aa[5] <= b[5]; ++aa[5])for (aa[6] = 0; aa[6] <= b[6]; ++aa[6])for (aa[7] = 0; aa[7] <= b[7]; ++aa[7])for (aa[8] = 0; aa[8] <= b[8]; ++aa[8])for (aa[9] = 0; aa[9] <= b[9]; ++aa[9])for (aa[10] = 0; aa[10] <= b[10]; ++aa[10])for (aa[11] = 0; aa[11] <= b[11]; ++aa[11])for (aa[12] = 0; aa[12] <= b[12]; ++aa[12])for (aa[13] = 0; aa[13] <= b[13]; ++aa[13])for (aa[14] = 0; aa[14] <= b[14]; ++aa[14])for (aa[15] = 0; aa[15] <= b[15]; ++aa[15])for (aa[16] = 0; aa[16] <= b[16]; ++aa[16])for (aa[17] = 0; aa[17] <= b[17]; ++aa[17])for (aa[18] = 0; aa[18] <= b[18]; ++aa[18])for (aa[19] = 0; aa[19] <= b[19]; ++aa[19])for (aa[20] = 0; aa[20] <= b[20]; ++aa[20])
	{
		for (int i = 1,temp=0,ss=0; i <= nn; ++i)
		{
			temp += aa[i];
			ss += (aa[i]?a[i]:0);
		}
		if (temp == kk)sum += prime(ss);
	}
	printf("%d", sum);
*/
/*///luogu_populer_p1042
string a;
    char t;
    while(1)
    {
        t=getchar();
        if(t=='W'||t=='L')a.push_back(t);
        if(t=='E')break;
    }
    int l=a.size();
    int sw=0,sl=0;
    for(int i=0;i<l;++i)
    {
        if(a[i]=='W')sw++;
        else sl++;
        if(sw>=11&&sw-sl>=2)
        {
            printf("%d:%d\n",sw,sl);
            sw=0;
            sl=0;
        }
        if(sl>=11&&sl-sw>=2)
        {
            printf("%d:%d\n",sw,sl);
            sw=0;
            sl=0;
        }
    }
    printf("%d:%d\n\n",sw,sl);
    sw=0;sl=0;
    for(int i=0;i<l;++i)
    {
        if(a[i]=='W')sw++;
        else sl++;
        if(sw>=21&&sw-sl>=2)
        {
            printf("%d:%d\n",sw,sl);
            sw=0;
            sl=0;
        }
        if(sl>=21&&sl-sw>=2)
        {
            printf("%d:%d\n",sw,sl);
            sw=0;
            sl=0;
        }
    }
    printf("%d:%d",sw,sl);
*/
/*luogu_beginner_p1046
int h[11],i=0;
	for (int z = 0; z <= 10; z++)cin >> h[z];
	for (int y = 0; y < 10; y++)i += (h[y] <= h[10] + 30);
	cout <<i;
*/
/*///luogu_beginner_p1047
int l, m;
	cin >> l >> m;
	vector<int> tree(l+1,1);
	int x, y,s=0;
	while (cin >> x >> y)for (; x <= y; x++)tree[x] = 0;
	for (int p = 0; p < l+1; p++)s += tree[p];
	cout << s;
*/
/*///luogu_populer_p1048
int t,n,w[101],v[101],f[101],dp[102][1002];
	cin>>t>>n;
	for(int i=1;i<=n;++i)cin>>w[i]>>v[i];
	for(int i=1;i<=n;++i)for(int j=t;j>=0;--j)if(j>=w[i])dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);else dp[i][j]=dp[i-1][j];
	cout<<dp[n][t];
*/
/*///luogu_populer_p1051
typedef struct 
{
    int order,over,clas,paper,money;
    char name[22],ganbu,xibu;
}stu;
int get(int over,int clas,char ganbu,char xibu,int paper)
{
    int s=0;
    if(over>80&&paper>=1)s+=8000;
    if(over>85&&clas>80)s+=4000;
    if(over>90)s+=2000;
    if(over>85&&xibu=='Y')s+=1000;
    if(clas>80&&ganbu=='Y')s+=850;
    return s;
}
stu a[101];
bool cmp(stu a,stu b)
{
    if((a.money>b.money)||(a.money==b.money&&a.order<b.order))return 1;
    else return 0;
}
int main()
{
    int n;
    char t;
    long long sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%s%d%d%c%c%c%c%c%d",a[i].name,&a[i].over,&a[i].clas,&t,&a[i].ganbu,&t,&a[i].xibu,&t,&a[i].paper);
        a[i].money=get(a[i].over,a[i].clas,a[i].ganbu,a[i].xibu,a[i].paper);
        a[i].order=i;
        sum+=a[i].money;
    }
    sort(a+1,a+n+1,cmp);
    printf("%s\n%d\n%lld",a[1].name,a[1].money,sum);
}
*/
/*///luogu_beginner_p1055
int z,s=0;
	string a;
	cin >> a;
	vector<int>b;
	for (auto c : a)if (isdigit(c)){
			int temp=c-48;
			b.push_back(temp);}
	if (a[12] == 'X')b.push_back(10);
	for (int m = 0; m < 9; m++)s += b[m] * (m + 1);
	z = s % 11;
	a[12] = z == 10 ? 'X' : z+48;
	if (z == b[9]) cout << "Right";
	else cout << a;
*/
/*///luogu_populer_p1059
int n,t;
	cin >> n;
	set<int>a;
	while (cin >> t)a.insert(t);
	cout << a.size() << endl;
	for (int z : a)cout << z << ' ';
*/
/*///luogu_populer_p1060
int n,m,v[10005],p[10005],f[100000];
	cin>>n>>m;
	for(int i=1;i<=m;++i)cin>>v[i]>>p[i];
	for(int i=1;i<=m;++i)for(int j=n;j>=v[i];--j)f[j]=max(f[j],f[j-v[i]]+p[i]*v[i]);
	cout<<f[n];
*/
/*///luogu_p1067
int sgn(int t);
int main()
{
	int n,t,temp=1;
	cin >> n;
	while (cin >> t)
	{
		if (n == 0)
		{
			switch (sgn(t))
			{
			case 1:cout << '+' << t; break;
			case 0:break;
			case -1:cout << t; break;
			}
			break;
		}
		if (n == 1)
		{
			switch (sgn(t))
			{
			case 1:
			{
				if (t == 1)cout << "+x";
				else cout << '+' << t << 'x';
				break;
			}
			case 0:break;
			case -1:
			{
				if (t == -1)cout << "-x";
				else cout << t << 'x';
				break;
			}
			}
			n--;
			continue;
		}
		switch (sgn(t))
		{
		case 1:
		{
			if (temp)temp = 0;
			else cout << '+';
			if(t!=1)
			cout << t << "x^" << n;
			else cout << "x^" << n;
			break;
		}
		case 0:break;
		case -1:
		{
			if (temp)temp = 0;
			if(t!=-1)
			cout << t << "x^" << n;
			else cout << "-x^" << n;
		}
		}
		n--;
	}
}
int sgn(int t)
{
	if (t > 0)return 1;
	else if (t == 0)return 0;
	return -1;
}
*/
/*///luogu_populer_p1068
int n,m,k,s;
    map<int,set<int> >c;
    vector<int>a;
    cin>>n>>m;
    while(n--)
    {
        cin>>k>>s;
        a.push_back(s);
        c[s].insert(k);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int t=a[((int)m*1.5)-1];
    int sum=0;
    for(int i=t;i<=100;++i)sum+=c[i].size();
    cout<<t<<' '<<sum<<endl;
    for(int i=100;i>=t;--i)for(set<int>::iterator it=c[i].begin();it!=c[i].end();++it)cout<<*it<<' '<<i<<endl;
*/
/*///luogu_populer_p1071
char a[100]={0},b[100]={0};
    int flag=1,sum1=0,sum2=0;
    string s,o,r;
    cin>>s>>o>>r;
    int ns=s.size(),nr=r.size();
    for(int i=0;i<ns;++i)if(a[(int)o[i]]==0||a[(int)o[i]]==s[i])a[(int)o[i]]=s[i];else flag=0;
    for(int i='A';i<='Z';++i){
        sum1+=a[i];
        sum2+=i;
        b[(int)a[i]]=i;}
    if(sum1!=sum2)flag=0;
    if(!flag)printf("Failed");else for(int i=0;i<nr;++i)putchar(b[(int)r[i]]);
*/
/*///luogu_p1075
long long n;
    cin>>n;
    for(long long i=2;i<=sqrt(n);i++)if(n%i==0){
            cout<<n/i;
	return 0;}
*/
/*///luogu_beginner_p1085
int c[7][2],m[7],t=0;
	for (int i = 0; i < 7; ++i)std::cin >> c[i][0]>>c[i][1];
	for (int z = 0; z < 7; z++)
	{
		if (c[z][0] + c[z][1] <= 8)m[z] = 0;
		else m[z] = c[z][0] + c[z][1];
	}
	for (int y = 0; y < 7; ++y)if (m[6 - y] >= t)t = 7 - y;
	std::cout << t;
*/
/*///luogu_p1088
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[10005];
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<m;i++)next_permutation(a,a+n);
    for(int i=0;i<n;++i)
    {
        if(i)cout<<' ';
        cout<<a[i];
    }
    return 0;
}
*/
/*luogu_beginner_p1089
constexpr auto month = 12;
int main()
{
	int a[month];
	int solution_1089(int a[]);
	for (int i = 0; i < month; ++i)std::cin >> a[i];
	std::cout<<solution_1089(a);
}
int solution_1089(int a[])
{
	int s=0,m=0;
	for (int z = 0; z < month; z++){
		s += 300;
		if (s < a[z])return -(z + 1);
		m += 100 * ((s - a[z]) / 100);
		s -= 100 * ((s - a[z]) / 100);
		s -= a[z];

	}
	return m * 1.2+s;
}
*/
/*///luogu_populer_p1091
int a[2000000],l[2000000],r[2000000],n,ans=1;
	cin>>n;
	for(int i=1;i<=n;++i)cin>>a[i],l[i]=r[i]=1;
	for(int i=1;i<=n;++i)for(int j=1;j<i;++j)if(a[j]<a[i])l[i]=max(l[i],l[j]+1);
	for(int i=n;i>=1;--i)for(int j=n;j>i;--j)if(a[j]<a[i])r[i]=max(r[i],r[j]+1);
	for(int i=1;i<=n;++i)ans=max(ans,l[i]+r[i]-1);
	cout<<n-ans;
*/
/*///luogu_populer_p1093
typedef struct {int num,yw,sx,yy,s;}stu;
bool cmp(stu a,stu b){if(a.s>b.s||(a.s==b.s&&a.yw>b.yw)||(a.s==b.s&&a.yw==b.yw&&a.num<b.num))return 1;else return 0;}
stu a[301];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        scanf("%d%d%d",&a[i].yw,&a[i].sx,&a[i].yy);
        a[i].s=a[i].yw+a[i].sx+a[i].yy;
        a[i].num=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=5;++i)printf("%d %d\n",a[i].num,a[i].s);
}
*/
/*///luogu_populer_p1098
int p1,p2,p3;
    string a;
    cin>>p1>>p2>>p3>>a;
    int l=a.size();
    for(int i=0;i<l;++i)
    {
        if((a[i]=='-')&&((isalpha(a[i-1])&&isalpha(a[i+1]))||(isdigit(a[i-1])&&isdigit(a[i+1]))))
        {
            if(a[i+1]-a[i-1]==1)continue;
            else if(a[i+1]<=a[i-1])putchar('-');
            else if(p1==1)
            {
                if(isalpha(a[i-1]))for(int q=1;q<=a[i+1]-a[i-1]-1;++q)for(int w=1;w<=p2;++w)putchar(p3==1?q+a[i-1]:a[i+1]-q);
                else for(int q=1;q<=a[i+1]-a[i-1]-1;++q)for(int w=1;w<=p2;++w)putchar(p3==1?q+a[i-1]:a[i+1]-q);
            }
            else if(p1==2)
            {
                if(isalpha(a[i-1]))for(int q=1;q<=a[i+1]-a[i-1]-1;++q)for(int w=1;w<=p2;++w)putchar(p3==1?toupper(q+a[i-1]):toupper(a[i+1]-q));
                else for(int q=1;q<=a[i+1]-a[i-1]-1;++q)for(int w=1;w<=p2;++w)putchar(p3==1?q+a[i-1]:a[i+1]-q);
            }
            else for(int p=1;p<=(a[i+1]-a[i-1]-1)*p2;++p)putchar('*');
        }
        else putchar(a[i]);
    }
*/
/*///luogu_p1100
long long n;
    cin>>n;
    const long long a=65536;
    long long b=n/a;
    long long c=n%a;
    long long d=c*a;
    cout<<b+d;
*/
/*///luogu_populer_p1101
int n,f[102][102];
char a[102][102];
string s="yizhong",t;
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)scanf("%s",a[i]+1);
    for(int i=1;i<=n;++i)for(int j=1;j<=n;++j)
    {
        if(a[i][j]=='y')
        {
            if(i+6<=n&&j+6<=n)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i+k][j+k];
                if(t==s)for(int k=0;k<=6;++k)f[i+k][j+k]=1;
            }
            if(i+6<=n&&j-6>=1)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i+k][j-k];
                if(t==s)for(int k=0;k<=6;++k)f[i+k][j-k]=1;
            }
            if(i-6>=1&&j+6<=n)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i-k][j+k];
                if(t==s)for(int k=0;k<=6;++k)f[i-k][j+k]=1;
            }
            if(i-6>=1&&j-6>=1)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i-k][j-k];
                if(t==s)for(int k=0;k<=6;++k)f[i-k][j-k]=1;
            }
            if(i+6<=n)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i+k][j];
                if(t==s)for(int k=0;k<=6;++k)f[i+k][j]=1;
            }
            if(i-6>=1)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i-k][j];
                if(t==s)for(int k=0;k<=6;++k)f[i-k][j]=1;
            }
            if(j+6<=n)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i][j+k];
                if(t==s)for(int k=0;k<=6;++k)f[i][j+k]=1;
            }
            if(j-6>=1)
            {
                t='y';
                for(int k=1;k<=6;++k)t+=a[i][j-k];
                if(t==s)for(int k=0;k<=6;++k)f[i][j-k]=1;
            }
        }
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)putchar(f[i][j]?a[i][j]:'*');
        putchar('\n');
    }
    return 0;
}
*/
/*///luogu_p1102
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long n,m,t,cnt=0;
    cin>>n>>m;
    vector<long long>v,vv;
    for(int i=1;i<=n;i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    for(auto t:v)vv.push_back(t+m);
    for(int m=0,t=0,temp=0;m<n;m++){
        if(!(m&&v[m]==v[m-1]))temp=0;
        while(vv[t]<v[m])t++;
        while(vv[t]==v[m])temp++,t++;
        cnt+=temp;
    }
    cout<<cnt;
    return 0;
}
*/
/*///luogu_improve_p1111
const int maxn = 1000005;
int p[1005], n, m, e, x, y,c,sum;
struct node{int u, v, t;} a[maxn];
bool cmp(const node i, const node j) { return i.t < j.t; }
int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)cin >> a[i].u >> a[i].v >> a[i].t;
    for (int i = 0; i <= n; ++i)p[i] = i;
    sort(a, a + m, cmp);
    for (int i = 0; i < m; ++i)
    {
        e = a[i].t;
        x = find(a[i].u);
        y = find(a[i].v);
        if (x != y)
        {
            sum = max(e, sum);p[y] = x;c++;
            if (c >= n - 1)break;
        }
    }
    if(c>=n-1)cout << sum << endl;else cout<<-1<<endl;
    return 0;
}
*/
/*///luogu_p1116
int n,a[10001],c=0,t;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)scanf("%d",&a[i]);
    for(int i=1;i<n;++i)for(int j=1;j<n;++j)if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;c++;}
    printf("%d",c);
*/
/*///luogu_p1138
map<int,int>a;
	int n, k,t;
	cin >> n >> k;
	while (cin >> t)a[t] = 1;
	if (k > a.size())cout << "NO RESULT";
	else
	{
		auto it = a.begin();
		for (int i = 1; i < k; i++)it++;
		cout << it->first;
	}
*/
/*///luogu_populer_p1147
long long m;
    cin>>m;
    for(long long i=1;i<m/2+1;i++)
    {
        long long s=0;
        for(long long n=i;s<=m;n++)
        {
            s+=n;
            if(s==m)cout<<i<<' '<<n<<'\n';
        }
        s=0;
    }
*/
/*///luogu_beginner_p1149
int s[10] = { 6,2,5,5,4,5,6,3,7,6 };
int cal(int a);
int main()
{
	int n,s=0;
	cin >>n;
	for (int z = 0; z < 1000; z++)for (int y = 0; y < 1000; y++)if ((cal(z)+cal(y)+cal(z+y)+4)==n)s++;
	cout << s;
}
int cal(int a)
{
	int  ss=0;
	if (a == 0)return 6;
	while (a >= 1)
	{
		ss += s[a % 10];
		a /= 10;
	}
	return ss;
}
*/
/*///luogu_p1150
int n, k;
	cin >> n >> k;
	int s = n;
	while (n >= k)
	{
		s += n / k;
		n =n/k+n%k;
	}
	cout << s;
*/
/*///luogu_populer_p1160
int n,m,k,p,a[100001][3],x,f=1,spaceflag=1;
int main()
{
    scanf("%d",&n);
    a[1][2]=1;
    for(int i=2;i<=n;++i)
    {
        scanf("%d%d",&k,&p);
        a[i][2]=1;
        a[i][!p]=k;
        a[i][p]=a[k][p];
        a[k][p]=i;
        a[a[i][p]][!p]=i;
        if(k==f&&p==0)f=i;
    }
    scanf("%d",&m);
    for(int i=1;i<=m;++i)
    {
        scanf("%d",&x);
        if(a[x][2])
        {
            a[x][2]=0;
            a[a[x][0]][1]=a[x][1];
            a[a[x][1]][0]=a[x][0];
        }
        if(f==x)f=a[f][1];
    }
    while(f)
    {
        if(spaceflag)spaceflag=0;
        else putchar(' ');
        printf("%d",f);
        f=a[f][1];
    }
    putchar('\n');
    return 0;
}
*/
/*///luogu_p1161
#include<stdio.h>
#include<math.h>
int n,a[(int)2e6+5];
double x;
int y;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf%d",&x,&y);
        for(int j=1;j<=y;j++)
        {
            int t=floor(x*j);
            a[t]=!a[t];
        }
    }
    for(int i=1;i<=2000005;i++)if(a[i])
        {
            printf("%d",i);
            break;
        }
    return 0;
}
*/
/*///luogu_populer_p1162
int n,a[33][33];
void dfs(int x,int y)
{
    if(x<0||y<0||x>n+1||y>n+1||a[x][y]>=1)return;
    a[x][y]=2;
    dfs(x-1,y);dfs(x+1,y);dfs(x,y+1);dfs(x,y-1);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)for(int j=1;j<=n;++j)cin>>a[i][j];
    dfs(0,0);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)cout<<2-a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
*/
/*///luogu_populer_p1164
int n,m,a[105],f[10005]={1};
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n;++i)for(int j=m;j>=a[i];--j)f[j]=f[j]+f[j-a[i]];
	cout<<f[m];
*/
/*///luogu_populer_p1177
#include<stdio.h>
#define N 100001
void merge(int data[],int left,int mid,int right,int temp[])
{
	int i=left,j=mid+1;
	int k=0;
	while(i<=mid&&j<=right)if(data[i]<=data[j])temp[k++]=data[i++];else temp[k++]=data[j++];
	while(i<=mid)temp[k++]=data[i++];
	while(j<=right)temp[k++]=data[j++];
	for(i=0;i<k;++i)data[left+i]=temp[i];
}
void merge_sort(int init[],int left,int right,int temp[])
{
	if(left<right){
		int mid=(left+right)/2;
		merge_sort(init,left,mid,temp);
		merge_sort(init,mid+1,right,temp);
		merge(init,left,mid,right,temp);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[N],b[N];
	for(int i=0;i<n;++i)scanf("%d",&a[i]);
	merge_sort(a,0,n-1,b);
	for(int i=0;i<n;++i)
	{
		printf("%d",a[i]);
		if(i<n-1)putchar(' ');
		else putchar('\n');
	}
	return 0;
}
*/
/*///luogu_p1179
lrj3-3 c[2]
*/
/*///luogu_p1195
lutece 2220
*/
/*luogu_beginner_p1200
string a, b;
	int s1=1,s2=1;
	cin >> a >> b;
	for (char z : a)s1 *= (z-64);
	for (char y : b)s2 *= (y-64);
	cout<<(((s1 % 47) == (s2 % 47)) ? "GO" : "STAY");
*/
/*///luogu_populer_p1208
int n,k,t1,t2,s=0,q=1;
    long long a[5001],b[5001];
    cin>>n>>k;
    for(int i=1;i<=k;++i){cin>>t1>>t2;a[t1]+=t2;b[i]+=t1;}
    sort(b+1,b+1+k);
    while(n)if(a[b[q]]){n--;s+=b[q];a[b[q]]--;}else q++;
    cout<<s;
*/
/*luogu_beginner_p1217
long long a, b;
	cin >> a >> b;
	ofstream outfile;
	outfile.open("answer.txt");
	outfile << "vector <int>answer;\n";
	for (; a <= b; a++)
	{
		if (a % 2 == 0)continue;
		if (isHuiwen(a) && prime(a))
		{
			cout << a << endl;
			outfile<<"answer.push_back("<<a<<");"<<'\n';
		}
	}
	outfile.close();
}
bool isHuiwen(int number)
{
	int n = 0;
	int m = number;
	while (m != 0)
	{
		n = n * 10 + m % 10;
		m = m / 10;
	}
	return n == number;
}
*/
/*///luogu_populer_p1219
const int N=100;
int n,s,a[N],b[N],c[N],d[N];
void dfs(int i)
{
    if(i>n){
        if(s<3){
            for(int k=1;k<=n;++k)cout<<a[k]<<' ';
            cout<<endl;
        }
        s++;
    }
    else for(int j=1;j<=n;++j)if((!b[j])&&(!c[i+j])&&(!d[i-j+n])){
                a[i]=j;
                b[j]=c[i+j]=d[i-j+n]=1;
                dfs(i+1);
                b[j]=c[i+j]=d[i-j+n]=0;
            }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<s;
    return 0;
}
*/
/*///luogu_populer_p1223
struct p{int n,t;}a[1005];
bool cmp(p a,p b){return a.t<b.t;}
int n;long long s,t;
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        a[i].n=i;
        cin>>a[i].t;
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<n;++i)
    {
        cout<<a[i].n<<' ';
        t+=a[i].t;
        s+=t;
    }
    cout<<a[n].n<<endl;
    printf("%.2lf",(double)(s*1.0/n));
    return 0;
}
*/
/*///luogu_p1307
long long a,b=0;
	cin >> a;
	if (a < 0)
	{
		cout << '-';
		a = -a;
	}
	while (a > 0)
	{
		b = b * 10 + a % 10;
		a /= 10;
	}
	cout << b;
*/
/*///luogu_beginner_p1308
string a,b,t;
	bool p=1;
	getline(cin, b);
	getline(cin, a);
	for (char &tt : a)tt = toupper(tt);
	for (char &tt : b)tt = toupper(tt);
	b = ' ' + b + ' ';
	a = ' ' + a + ' ';
	int z = a.find(b),count=0;
	if (z == -1)cout << -1;
	else
	{
		int q = a.find(b);
		for (int z = a.find(b);z<(int)a.length();)
		{
			count++;
			a[z] = '0';
			z = a.find(b);
		}
		cout << count << ' ' <<q ;
	}
*/
/*///luogu_p1317
int n,t,s=0;
    cin>>n;
    vector<int>a;
    a.push_back(-1);
    while(cin>>t)
    {
        if(t!=a.back())
        a.push_back(t);
    }
    
    for(int i=1;i<(a.size()-1);i++)
    {
        if(a[i]<a[i-1]&&a[i]<a[i+1])
        s++;
    }
    cout<<s;
*/
/*///luogu_p1319
int n, t;
	bool b = 0;
	cin >> n;
	vector<int>a;
	while (cin >> t){
		if (b)
		{
			for (int z = 1; z <= t; z++)a.push_back(1);
			b=!b;
		}
		else
		{
			for (int z = 1; z <= t; z++)a.push_back(0);
			b = !b;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)cout << a[i*n + j];
		cout << endl;
	}
*/
/*///luogu_p1320
vector<char>a;
	char t;
	while (cin >> t)a.push_back(t);
	a.push_back(a[a.size() - 1] + 2);
	cout <<(int)sqrt(a.size()-1);
	if (a[0] == '1')cout << ' ' << 0;
	int count = 0;
	for (int i = 1; i < a.size(); i++){
		if (a[i] == a[i - 1])count++;
		else
		{
			cout <<' '<< count+1;
			count = 0;
		}
	}
*/
/*///luogu_p1321
string a;
    cin>>a;
    int n=a.size(),sb=0,sg=0;
    for(int i=3;i<n;++i){if(a[i]=='l'&&a[i-1]=='r'&&a[i-2]=='i'&&a[i-3]=='g')
            {
                sg++;
                a[i]=a[i-1]=a[i-2]=a[i-3]=' ';
            }
    }
    for(int i=2;i<n;++i)
    {
        if(a[i]=='y'&&a[i-1]=='o'&&a[i-2]=='b')
        {
            sb++;
            a[i]=a[i-1]=a[i-2]=' ';
        }
        if((a[i]=='r'&&a[i-1]=='i'&&a[i-2]=='g')||(a[i]=='l'&&a[i-1]=='r'&&a[i-2]=='i'))
        {
            sg++;
            a[i]=a[i-1]=a[i-2]=' ';
        }
    }
    for(int i=1;i<n;++i){
        if((a[i]=='o'&&a[i-1]=='b')||(a[i]=='y'&&a[i-1]=='o'))
        {
            sb++;
            a[i]=a[i-1]=' ';
        }
        if((a[i]=='i'&&a[i-1]=='g')||(a[i]=='r'&&a[i-1]=='i')||(a[i]=='l'&&a[i-1]=='r'))
        {
            sg++;
            a[i]=a[i-1]=' ';
        }
    }
    for(int i=0;i<n;++i){
        if(a[i]=='b'||a[i]=='o'||a[i]=='y')sb++;
        if(a[i]=='g'||a[i]=='i'||a[i]=='r'||a[i]=='l')sg++;
    }
    cout<<sb<<'\n'<<sg;
    return 0;
*/
/*///luogu_populerp1328
#include <bits/stdc++.h>
using namespace std;
int b[202],c[202];
int f(int a,int b)
{
    if(a==b)return 0;
    else if(b-a==2||(a==0&&b==3)||(a==3&&b==4)||(a-b==1&&a!=4)||(a==4&&(b<=1)))return 1;
    else return -1;
}
int main()
{
    int n,na,nb,j=1,k=1,sa=0,sb=0;
    cin>>n>>na>>nb;
    for(int i=1;i<=na;i++)cin>>b[i];
    for(int i=1;i<=nb;i++)cin>>c[i];
    for(int i=1;i<=n;i++)
    {
        if(j==na+1)j=1;
        if(k==nb+1)k=1;
        if(f(b[j],c[k])==1)sa++;
        if(f(b[j],c[k])==-1)sb++;
        j++;
        k++;
    }
    cout<<sa<<' '<<sb;
}
*/
/*///luogu_populer_p1387
int n,m,a[101][101],f[101][101],ans;
    cin>>n>>m;
    for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)
    {
        cin>>a[i][j];
        if(a[i][j])f[i][j]=min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
        ans=max(ans,f[i][j]);
    }
    cout<<ans;
*/
/*///luogu_populer_p1417
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{ll a,b,c;}a[55];
bool cmp(node a,node b){return a.c*b.b<b.c*a.b;}
ll T,n,ans,f[1000005];
int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);
    cin>>T>>n;
    for(int i=1;i<=n;++i)cin>>a[i].a;
    for(int i=1;i<=n;++i)cin>>a[i].b;
    for(int i=1;i<=n;++i)cin>>a[i].c;
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;++i)for(int j=T;j-a[i].c>=0;--j)f[j]=max(f[j],f[j-a[i].c]+a[i].a-j*a[i].b);
    for(int i=1;i<=T;++i)ans=max(ans,f[i]);
    cout<<ans;
    return 0;
}
*/
/*///luogu_p1420
int n,count0=0,t,count1=0;
	cin >> n;
	vector<int>a;
	while (cin >> t)a.push_back(t);
	for (int i=0;i<a.size()-1;i++)
	{
		if (a[i + 1] - a[i] == 1)count0++;
		else count0 = 0;
		if (count0 >= count1)count1 = count0;
	}
	cout << count1+1;
*/
/*///luogu_beginner_p1421
int yuan, jiao;
	std::cin >> yuan >> jiao;
	std::cout << (yuan * 10 + jiao) / 19;
*/
/*///luogu_beginner_p1422
int e;
	std::cin >> e;
	double p;
	if (e <= 150)p = 0.4463*e;
	else if (e <= 400)p=0.4463 * 150 + 0.4663*(e - 150);
	else p = 0.4463 * 150 + 0.4663 * 250 + 0.5663*(e - 400);
	printf_s("%.1lf", p);
*/
/*///luogu_beginner_p1423
	double s = 0.0;
	cin >> s;
	int z;
	for (double i = 1.0; 100 * (1 - pow(0.98, i)) <= s; i++) { z = i; }
	cout << z+1;
*/
/*///luogu_beginner_p1424
int x; long long n;
	cin >> x >> n;
	long long s = 0, i = n + x;
	for (; x < i; x++)if (x % 7 != 6 && x % 7 != 0)s += 250;
	cout << s;
}
*/
/*///luogu_beginner_p1425
int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout <<(60*c+d-60*a-b)/60<<" "<< (60 * c + d - 60 * a - b) % 60;
*/
/*///luogu_beginner_p1426
double fun(double i);
const double p=0.001;
int main()
{
    double s,x;
    bool f=0;
    cin>>s>>x;
    for(double i=0.0;i<=20.0;i+=1.0)if((fun(i)+x-s>=p)&&(fun(i)-x-s<=p)&&(fun(i+1)+x-s>=p)&&(fun(i+1)-x-s<=p))f=1;
    cout<<(f==1?'y':'n');
}
double fun(double i){return (double)350*(1-pow(0.98,i));}
*/
/*///luogu_beginner_p1427
	vector<long long>a;
	long long i;
	while (cin >> i)a.push_back(i);
	for (auto it = a.end() - 1; it != a.begin(); it--)cout << *it << " ";
	cout << a[0];
	///another
	int a[100], t,z=-1;
	while (cin >> t)
	{
		z++;
		a[z] = t;
	}
	for (; z >= 0; z--)cout << a[z]<<' ';
*/
/*///luogu_beginner_p1428
int n,t;
	cin >> n;
	vector<int> a;
	while (cin >> t)a.push_back(t);
	vector<int>s(n, 0);
	for (int z = 0; z < n; z++){
		for (int y = 0; y <= z; y++)if (a[y] < a[z])s[z]++;
		cout << s[z]<<' ';
	}
*/
/*///luogu_populer_p1443
int n,m,x,y,a[444][444];
bool cmp(int x,int y,int l){return (x<=n&&y<=m&&x>0&&y>0&&(a[x][y]==-1||a[x][y]>l+1));}
void bfs(int x,int y,unsigned long long l)
{
    if(l>150)return;
    a[x][y]=l;
    if(cmp(x+2,y+1,l))bfs(x+2,y+1,l+1);
    if(cmp(x+1,y+2,l))bfs(x+1,y+2,l+1);
    if(cmp(x-1,y+2,l))bfs(x-1,y+2,l+1);
    if(cmp(x-2,y-1,l))bfs(x-2,y-1,l+1);
    if(cmp(x-1,y-2,l))bfs(x-1,y-2,l+1);
    if(cmp(x-2,y+1,l))bfs(x-2,y+1,l+1);
    if(cmp(x+2,y-1,l))bfs(x+2,y-1,l+1);
    if(cmp(x+1,y-2,l))bfs(x+1,y-2,l+1);
}
int main()
{
    cin>>n>>m>>x>>y;
    memset(a,-1,sizeof(a));
    bfs(x,y,0);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)printf("%-5d",a[i][j]);
        cout<<endl;
    }
    return 0;
}
*/
/*///luogu_populer_p1449
stack<int>a;
    string s;
    int num=0,t1,t2;
    cin>>s;
    for(int i=0;s[i]!='@';++i)
    {
        if(isdigit(s[i]))num=num*10+s[i]-'0';
        else if(s[i]=='.')
        {
            a.push(num);
            num=0;
        }
        else switch(s[i])
        {
            case '+':t1=a.top();a.pop();t2=a.top();a.pop();a.push(t2+t1);break;
            case '-':t1=a.top();a.pop();t2=a.top();a.pop();a.push(t2-t1);break;
            case '*':t1=a.top();a.pop();t2=a.top();a.pop();a.push(t1*t2);break;
            case '/':t1=a.top();a.pop();t2=a.top();a.pop();a.push(t2/t1);break;
        }
    }
    printf("%d",a.top());
*/
/*///luogu_p1469
    int n,t;
    cin>>n;
    map<int,int>a;
    while(cin>>t)a[t]++;
    for(auto it=a.begin();it!=a.end();it++)if(it->second%2==1)cout<<it->first;
*/
/*///luogu_beginner_p1478
int n,s,a,b,h,xi,yi,num=0;
    cin>>n>>s>>a>>b;
    h=a+b;
    map<int,int>ans;
    while(cin>>xi>>yi)if(xi<=h)ans[yi]++;
    for(auto it=ans.begin();it!=ans.end();it++)for(int i=1;i<=it->second;i++){
            if(s>=it->first)
            {
                s-=it->first;
                num++;
            }
            else 
            {
                cout<<num;
                return 0;
            }
        }
    if(num==0)cout<<0;
*/
/*///luogu_p1482
int a1, a2, b1, b2, x, y, t = 1,g;
int main()
{
	string a, b;
	cin >> a>>b;
	//char c;cin>>a1>>c>>a2;
	for (char c : a){
		if (t)
		{
			if (isdigit(c))a1 = a1 * 10 + c - 48;
			else t = 0;
		}
		else a2 = a2 * 10 + c - 48;
	}
	t = 1;
	for (char c : b){
		if (t)
		{
			if (isdigit(c))b1 = b1 * 10 + c - 48;
			else t = 0;
		}
		else b2 = b2 * 10 + c - 48;
	}
	x = a1 * b1;
	y = a2 * b2;
	g = gcd(x, y);
	x /= g;
	y /= g;
	cout << x << ' ' << y;
*/
/*///luogu_p1498
char a[1024][2048];
    int n;
    cin>>n;
    int l=pow(2,n)+0.1;
    for(int i=1;i<=l;++i)for(int j=1;j<=2*l;++j)a[i][j]=' ';
    a[1][1]=a[2][2]='/';
    a[1][2]=a[1][3]='_';
    a[1][4]=a[2][3]='\\';
    a[2][1]=' ';
    for(int b=1;b<n;++b){
        int t1=pow(2,b+1)+0.1;
        for(int i=1;i<=t1/2;++i)for(int j=1;j<=t1;++j)a[i][j+t1]=a[i][j];
        for(int i=1;i<=t1/2;++i)for(int j=1;j<=t1;++j)a[i+t1/2][j+t1/2]=a[i][j];
    }
    for(int i=1;i<=l;++i){
        for(int j=1;j<=2*l;++j)cout<<a[l-i+1][j];
        cout<<'\n';
    }
*/
/*///luogu_populer_p1508
    ll m,n,ans,a[205][205],f[205][205];
    std::ios::sync_with_stdio(false);std::cin.tie(0);
    cin>>m>>n;
    for(int i=1;i<=m;++i)for(int j=1;j<=n;++j)cin>>a[i][j];
    for(int i=1;i<=m;++i)for(int j=1;j<=n;++j)f[i][j]=max(f[i-1][j],max(f[i-1][j-1],f[i-1][j+1]))+a[i][j];
    cout<<max(f[m][(n+1)/2],max(f[m][(n-1)/2],f[m][(n+3)/2]));
*/
/*///luogu_p1534
int n,t1,t2,t=0,s=0;
	cin >> n;
	while (cin >> t1 >> t2){
		t += t1 + t2 - 8;
		s += t;
	}
	cout << s;
*/
/*///luogu_beginner_p1553
unsigned long long turnover(unsigned long long a);
void solution_p1553(string s, int t);
int main()
{
	string s;
	cin >> s;
	int t=0;
	for (char c : s){
		if (c == '.')t = 1;
		if (c == '/')t = 2;
		if (c == '%')t = 3;
	}
	solution_p1553(s, t);
}
void solution_p1553(string s,int t)
{
	switch (t)
	{
	case 0:cout << turnover(stoull(s)); break;
		case 1:
		{
			string t1;
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] != '.')t1.push_back(s[i]);
				else
				{
					cout << turnover(stoull(t1))<<'.';
					t1.clear();
				}
			}
			cout << turnover(stoull(t1))<<endl;
			break;
		}
		case 2:
		{
			string t2;
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] != '/')t2.push_back(s[i]);
				else
				{
					cout << turnover(stoull(t2)) << '/';
					t2.clear();
				}
			}
			cout << turnover(stoull(t2)) << endl;
			break;
		}
		case 3:
		{
			cout << turnover(stoull(s))<<'%';
		}
	}
}
unsigned long long turnover(unsigned long long a)
{
	unsigned long long s=0;
	while (a != 0){
		s = s * 10 + a % 10;
		a /= 10;
	}
	return s;
}
*/
/*///luogu_p1554
using namespace std;
int main()
{
	unsigned long long m, n, c[10] = { 0 };
	cin >> m >> n;
	for (; m <= n; m++)
	{
		unsigned long long a = m;
		while (a != 0)
		{
			c[a % 10]++;
			a /= 10;
		}
	}
	int i = 0;
	for (int j = 0; j < 10; j++)
	{
		if (i == 0)i = 1;
		else cout << ' ';
		cout << c[j];
	}
}
*/
/*///luogu_populer_p1563
char a[100001][100];
int b[100002];
int main()
{
    int n,m,f,s,p=1;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b[0]);
        if(b[0])b[i]=1;
        else b[i]=-1;
        scanf("%s",a[i]);
    }
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&f,&s);
        if(f)p-=s*b[p];
        else p+=s*b[p];
        if(p>n)p-=n;
        if(p<1)p+=n;
    }
    printf("%s",a[p]);
    return 0;
}
*/
/*luogu_beginner_p1567
int main()
{
	int n,count0=0,t,count1=0;
	cin >> n;
	vector<int>a;
	while (cin >> t)a.push_back(t);
	for (int i=0;i<a.size()-1;i++)
	{
		if (a[i + 1] > a[i])count0++;
		else count0 = 0;
		if (count0 >= count1)count1 = count0;
	}
	cout << count1+1;
}
*/
/*///luogu_beginner_p1579
int n;
    cin>>n;
    vector<int>a;
    for(int i=2;i<=20000;i++)if(isprime(i))a.push_back(i);
    int l=a.size();
    for(int n1=0;n1<l;n1++)for(int n2=0;n2<l;n2++)for(int n3=0;n3<l;n3++)if(a[n1]+a[n2]+a[n3]==n){
        cout<<a[n1]<<' '<<a[n2]<<' '<<a[n3];
        return 0;
    }
*/
/*luogu_populer_p1583
typedef struct student{int n,w;}s;
int cmp(s a,s b){if(a.w>b.w||(a.w==b.w&&a.n<b.n))return 1;else return 0;}
int main()
{
    s a[20001];
    int n,k,e[11];
    cin>>n>>k;
    for(int i=1;i<=n;++i)a[i].n=i;
    for(int i=1;i<=10;++i)cin>>e[i];
    for(int i=1;i<=n;++i)cin>>a[i].w;
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;++i)a[i].w+=e[(i-1)%10+1];
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=k;++i)printf("%d ",a[i].n);
    return 0;
}
*/
/*///luogu_p1597
int a, b, c;
int main()
{
	string x;
	cin >> x;
	int l = x.size() / 5;
	for (int i = 0; i < l; i++)
	{
		switch (x[5 * i])
		{
		case 'a':
		{
			switch (x[5 * i + 3])
			{
			case 'a':break;
			case 'b':a = b; break;
			case 'c':a = c; break;
			default:a = x[5 * i + 3] - 48;
			}
			break;
		}
		case 'b':
		{
			switch (x[5 * i + 3])
			{
			case 'a':b = a; break;
			case 'b': break;
			case 'c':b = c; break;
			default:b = x[5 * i + 3] - 48;
			}
			break;
		}
		case 'c':
		{
			switch (x[5 * i + 3])
			{
			case 'a':c = a; break;
			case 'b':c = b; break;
			case 'c':break;
			default:c = x[5 * i + 3] - 48;
			}
			break;
		}
		}
	}
	cout << a <<' '<< b <<' '<< c;
*/
/*///luogu_p1598
char c;
    map<char,int>a;
    map<int,int>b;
    int m=0;
    while((c=getchar())!=EOF)a[c]++;
    for(int i='A';i<='Z';++i)if(m<a[i])m=a[i];
    for(int i=m;i>=1;--i)for(int j='A';j<='Z';++j)if(a[j]>=i)b[i]=j;
    for(int i=m;i>=1;--i)
    {
        for(int j='A';j<b[i];++j){
            if(a[j]>=i)printf("* ");
            else printf("  ");
        }
        printf("*\n");
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
*/
/*///luogu_populer_p1603
 map<string,int>a;
    a["one"]=a["a"]=a["another"]=a["first"]=1;
    a["two"]=a["both"]=a["second"]=2;
    a["three"]=a["third"]=3;
    a["four"]=4;
    a["five"]=5;
    a["six"]=6;
    a["seven"]=7;
    a["eight"]=8;
    a["nine"]=9;
    a["ten"]=10;
    a["eleven"]=11;
    a["twelve"]=12;
    a["thirteen"]=13;
    a["fourteen"]=14;
    a["fifteen"]=15;
    a["sixteen"]=16;
    a["seventeen"]=17;
    a["eighteen"]=18;
    a["nineteen"]=19;
    a["twenty"]=20;
    int b[6],c=1,s=0;
    string t;
    for(int i=0;i<6;i++){
       cin>>t;
       tolower(t[0]);
       if(a[t]==0)s++;
       b[i]=a[t]*a[t]%100;
    }
    sort(b,b+6);
    for(int i=0;i<6;i++){
       if(b[i]==0)continue;
       if(b[i]<10)
       {
          if(c==1)
          {
             cout<<b[i];
             c=0;
          }
          else cout<<'0'<<b[i];
       }
      if(b[i]>=10)cout<<b[i];
    }
    if(s==6)cout<<0;
*/
/*///luogu_populer_p1605
int n,m,t,sx,sy,fx,fy,x,y,a[6][6],f[6][6],ans,dx[4]={0,0,1,-1},dy[4]={-1,1,0,0};
void dfs(int x,int y)
{
    if(x==fx&&y==fy)ans++;
    else 
    for(int i=0;i<4;++i)
    if(f[x+dx[i]][y+dy[i]]==0&&a[x+dx[i]][y+dy[i]]==1)
    {
        f[x][y]=1;
        dfs(x+dx[i],y+dy[i]);
        f[x][y]=0;
    }
}
int main()
{
    cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    while(t--){cin>>x>>y;a[x][y]=1;}  
    for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)a[i][j]=1-a[i][j];
    dfs(sx,sy);
    cout<<ans;
    return 0;
}
*/
/*///luogu_p1614
int n,m,t,s=0,p=0;
    vector<int>a;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>t;
        a.push_back(t);
    }
    for(int j=0;j<m;j++)p+=a[j];
    for(int i=0;i<n-m;i++){
        for(int j=i;j<m+i;j++)s+=a[j];
        if(s<p)p=s;
        s=0;
    }
    cout<<p;
*/
/*///luogu_p1615
long long h1, m1, s1, h2, m2, s2, n;
	char c;
	cin >> h1 >> c >> m1 >> c >> s1 >> h2 >> c >> m2 >> c >> s2>>n;
	unsigned long long s = (h2 * 3600 + m2 * 60 + s2 - h1 * 3600 - m1 * 60 - s1)*n;
	cout << s;
*/
/*///luogu_populer_p1616
int n,V,w[10005],v[10005],f[10000005];
	cin>>V>>n;
	for(int i=1;i<=n;++i)cin>>w[i]>>v[i];
	for(int i=1;i<=n;++i)for(int j=w[i];j<=V;++j)f[j]=max(f[j],f[j-w[i]]+v[i]);
	cout<<f[V];
*/
/*///luogu_beginner_p1618
double a, b, c;
int s = 0;
int x[10];
int main()
{
	cin >> a >> b >> c;
	for (int i = 123; i <= 999; i++){
		int t = i;
		x[t % 10]++;
		x[t / 10 % 10]++;
		x[t / 100]++;
		t = i * (b / a);
		x[t % 10]++;
		x[t / 10 % 10]++;
		x[t / 100]++;
		t = i * (c / a);
		x[t % 10]++;
		x[t / 10 % 10]++;
		x[t / 100]++;
		if ((x[1] ==1)&&( x[2] ==1)&&( x[3] ==1)&&( x[4] ==1)&&( x[5] ==1)&&( x[6] ==1)&&( x[7] ==1)&&( x[8] ==1)&&( x[9] == 1) &&( x[0] == 0))
		{
			cout << i << ' ' << i * b / a << ' ' << i * c / a << '\n';
			s++;
		}
		for (int i = 0; i <= 9; i++)x[i] = 0;
	}
	if (s == 0)cout << "No!!!";
	return 0;
}
*/
/*///luogu_p1664
int b(int t)
{
    if(t<3)return 1;
    else if(t<7)return 2;
    else if(t<30)return 3;
    else if(t<120)return 4;
    else if(t<365)return 5;
    else return 6;
}
int l(int t){return t==0?0:(int)pow(2,t-1);}
int main()
{
    int n,t[1001],c=0,d=0,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)scanf("%d",&t[i]);
    for(int i=1;i<=n;++i)
    {
        if(t[i])
        {
            c-=l(d);
            if(c<0)c=0;
            c++;
            s+=b(c);
            d=0;
        }
        else d++;
    }
    printf("%d",s);
    return 0;
}
*/
/*///luogu_p1720
double n;
	cin >> n;
	cout << setiosflags(ios::fixed) << setprecision(2) << (pow((1+pow(5.0,0.5))/2,n)-pow((1 - pow(5.0, 0.5)) / 2,n)) / pow(5.0, 0.5);
//another
#define N 100000000
unsigned long long a[N] = {1,1};
	for (unsigned long long i = 3; i <= N; i++)a[i] = a[i - 1] + a[i - 2];
*/
/*///luogu_populer_p1739
string s;
    int l=0;int r=0;int flag=1;
    cin>>s;
    for(int i=0;s[i]!='@';++i)
    {
        if(s[i]=='(')l++;
        if(s[i]==')')r++;
        if(r>l)flag=0;
    }
    if(r<l)flag=0;
    cout<<(flag?"YES":"NO");
*/
/*///luogu_p1765
string a;
	int q[256],s=0;
	q['a'] = q['d'] = q['g'] = q['j'] = q['m'] = q['p'] = q['t'] = q['w'] = q[' '] = 1;
	q['b'] = q['e'] = q['h'] = q['k'] = q['n'] = q['q'] = q['u'] = q['x'] = 2;
	q['c'] = q['f'] = q['i'] = q['l'] = q['o'] = q['r'] = q['v'] = q['y'] = 3;
	q['s'] = q['z'] = 4;
	while (getline(cin, a)){
		for (char c : a)s += q[c];
		cout << s << endl;
		s = 0;
	}
*/
/*///luogu_populer_p1781
int n,a=0;
    cin>>n;
    string t,m="0",z="0";
    for(int i=1;i<=n;i++){
        cin>>t;
        if(t.size()>=m.size())
        {
            m=t;
            if(m.size()>z.size()||(m.size()==z.size()&&m>z)){
                z=m;
                a=i;
            }
        }
    }
    cout<<a<<'\n'<<z;
*/
/*///luogu_p1830
int p1[101][101],p2[101][101];
int main()
{
	int n, m, x, y, x1, x2, y1, y2, xt, yt;
	cin >> n >> m >> x >> y;
	for (int a = 1; a <= x; a++){
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x0 = x1; x0 <= x2; x0++)for (int y0 = y1; y0 <= y2; y0++){
			p1[x0][y0]++;
			p2[x0][y0] = a;
		}
	}
	for (int b = 1; b <= y; b++){
		cin >> xt >> yt;
		if (p1[xt][yt] != 0)cout << "Y " << p1[xt][yt] << ' ' << p2[xt][yt] << endl;
		else cout << "N\n";
	}
}
*/
/*///luogu_p1838
int a[10] = { 0 },t;
	bool b = 1;
	int num;
	cin >> num;
	int result = num % 10;
	for (; num /= 10; )result = result * 10 + num % 10;
	int s = result;
	while (s>0){
		t = s % 10;
		if (b)
		{
			a[t] = 1;
			b = !b;
		}
		else
		{
			a[t] = 4;
			b = !b;
		}
		s /= 10;
	}
	if ((a[1] + a[2] + a[3] == 3) || (a[4] + a[5] + a[6] == 3) || (a[7] + a[8] + a[9] == 3) || (a[1] + a[4] + a[7] == 3) || (a[5] + a[2] + a[8] == 3) || (a[9] + a[6] + a[3] == 3) || (a[1] + a[5] + a[9] == 3) || (a[7] + a[5] + a[3] == 3))cout << "xiaoa wins.";
	else if ((a[1] + a[2] + a[3] == 12) || (a[4] + a[5] + a[6] == 12) || (a[7] + a[8] + a[9] == 12) || (a[1] + a[4] + a[7] == 12) || (a[5] + a[2] + a[8] == 12) || (a[9] + a[6] + a[3] == 12) || (a[1] + a[5] + a[9] == 12) || (a[7] + a[5] + a[3] == 12))cout << "uim wins.";
	else cout << "drew.";
*/
/*///luogu_p1847
long m,n;
    scanf("%ld%ld",&m,&n);
    long x1[2001],y1[2001],x2[2001],y2[2001],xt,yt;
    for(int i=1;i<=m;++i)scanf("%ld%ld%ld%ld",&x1[i],&y1[i],&x2[i],&y2[i]);
    for(int i=1;i<=n;++i)
    {
        scanf("%ld%ld",&xt,&yt);
        int count=0,last=0;
        for(int j=1;j<=m;++j){
            if(xt>=x1[j]&&xt<=x2[j]&&yt>=y2[j]&&yt<=y1[j])
            {
                count++;
                last=j;
            }
        }
        if(count==0)printf("NO\n");
        else printf("YES %d %d\n",count,last);
    }
*/
/*///luogu_beginner_p1851
    map<int,int>a;
    for(int i=1;i<=20000;i++)for(int j=1;j<=i/2;j++)if(i%j==0)a[i]+=j;
    for(int i=1;i<=20000;i++)if(i==a[a[i]]&&i!=a[i])cout<<"a["<<i<<"]="<<a[i]<<';'<<endl;
    /TLE
    map<int,int>a;
    a[220]=284;
    a[284]=220;
    a[1184]=1210;
    a[1210]=1184;
    a[2620]=2924;
    a[2924]=2620;
    a[5020]=5564;
    a[5564]=5020;
    a[6232]=6368;
    a[6368]=6232;
    a[10744]=10856;
    a[10856]=10744;
    a[12285]=14595;
    a[14595]=12285;
    a[17296]=18416;
    a[18416]=17296;
    int s;
    cin>>s; 
    while(a[s]==0)s++;
    cout<<s<<' '<<a[s]; 
*/
/* ///luogu_beginner_p1865
bool prime(int n);
string turn(int n);
int main()
{
	int n, m,t;
	cin >> n >> m;
	vector<int>a;
	while (cin >> t)cout << turn(t) << '\n';
}
string turn(int n)
{
	if (prime(n))return "Yes";
	else return "No";
}
*/
/*///luogu_p1867
#include<bits/stdc++.h>
using namespace std;
inline int p(int a)
{
    if(a==0)return 1;
    int x=1;
    for(int i=1;i<=a;++i)x*=2;
    return x;
}
int n,l=0,e=0,t;
double a,s=10.0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a;
        cin>>t;
        if(s<=a)break;
        if(s-a>=10.0)s=10.0;
        s-=a;
        
        e+=t;
    }
    while(e-p(l)>=0)
        {
            e-=p(l);
            l++;
        }
    cout<<l<<' '<<e;
    return 0;
}
*/
/*///luogu_p1876
int n;
    cin>>n;
    for(int i=1;i*i<=n;i++)cout<<i*i<<' ';
*/
/*///luogu_populer_p1880
const int maxn=300,inf=0x3f3f3f3f;
    int n,a[maxn],dp[maxn][maxn],ap[maxn][maxn],sum[maxn];
    cin>>n;
    for(int i=1;i<=2*n;++i)
    {
        if(i<=n)cin>>a[i];
        a[i+n]=a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for(int l=2;l<=n;++l)
        for(int i=1;i<=2*n-l+1;++i)
        {
            int j=i+l-1;
            dp[i][j]=inf;
            for(int k=i;k<j;++k)
            {
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+sum[j]-sum[i-1]);
                ap[i][j]=max(ap[i][j],ap[i][k]+ap[k+1][j]+sum[j]-sum[i-1]);
            }
        }
    int ma=-inf,mi=inf;
    for(int i=1;i<=n;++i)
    {
        ma=max(ma,ap[i][n+i-1]);
        mi=min(mi,dp[i][n+i-1]);
    }
    cout<<mi<<endl<<ma;
*/
/*///luogu_p1888
vector<int>a;
	int t;
	while (cin >> t)a.push_back(t);
	sort(a.begin(),a.end());
	cout << a[0] / gcd(a[0], a[2]) << '/' << a[2] / gcd(a[0], a[2]);
*/
/*///luogu_p1897
int n,t,m=0;
    cin>>n;
    set<int>a;
    while(cin>>t)
    {
        a.insert(t);
        if(t>m)m=t;
    }
    cout<<m*10+a.size()*5+n;
*/
/*///luogu_beginner_p1909
int n = 0,s[3],temp;
	std::cin >> n;
	int num[3], pri[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> num[i] >> pri[i];
		if(n%num[i]==0)s[i] = n / num[i] * pri[i];
		else s[i] = (n / num[i]+1) * pri[i];
	}
	if (s[0] <= s[1] && s[0] <= s[2])temp = s[0];
	if (s[1] <= s[0] && s[1] <= s[2])temp = s[1];
	if (s[2] <= s[1] && s[2] <= s[0])temp = s[2];
	cout << temp;
*/
/*luogu_beginner_p1914
int nn,n;
	cin >> nn;
	n = nn % 26;
	string s;
	cin >> s;
	for (char &c : s)
	{
		if (c + n > 122)c = c + n - 26;
		else c += n;
	}
	cout << s;
*/
/*///luogu_beginner_p1980
void solution_1980(long long n, int a[]);
int main()
{
	long long n, i = 0;
	int x, temp[10] = { 0 };
	cin >> n >> x;
	for (long long z = 1; z <= n; z++)solution_1980(z, temp);
	cout << temp[x];
}
void solution_1980(long long n, int a[])
{
	a[n % 10]++;
	if (n >= 10)
	{
		n /= 10;
		solution_1980(n, a);
	}
}
*/
/*///luogu_p2006
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int k, m, n, t1, t2;
	bool b = 0;
	cin >> k >> m >> n;
	for (int i = 1; i <= m; i++)
	{
		cin >> t1 >> t2;
		if (t1 == 0)
		{
			cout << i << ' ';
			b = 1;
		}
		else
		{
		if (k / t1 * t2 >= n)
		{
			cout << i << ' ';
			b = 1;
		}
		}
	}
	if (!b)cout << -1;
}
*/
/*///luogu_p2084
int m;
	cin >> m;
	string n;
	cin >> n;
	bool b = 0;
	for (int l = n.size() - 1,i=0; l > -1; l--)
	{
		if (n[i] == '0')
		{
			i++;
			continue;
		}
		else if (b)cout << '+';
		else b = 1;
		cout << n[i] << '*' << m << '^' << l;
		i++;
	}
*/
/*///luogu_beginner_p2141
int b[20001] = {0};
int main()
{
	int n,t,s=0;
	cin >> n;
	vector<int>a;
	while (cin >> t)a.push_back(t);
	for (int z = 0; z < (a.size() - 1); z++)for (int y = z + 1; y < a.size(); y++)b[a[z] + a[y]] = 1;
	for (int q : a)if (b[q])s++;
	cout << s;
}
*/
/*///luogu_p2192
int n,t;
	cin >> n;
	map<int, int>a;
	while (cin >> t)a[t]++;
	if (a[0] == 0)cout << -1;
	else if (a[5] < 9)cout << 0;
	else
	{
		for (int z = 1; z <= a[5] / 9; z++)cout << 555555555;
		for (int y = 1; y <= a[0]; y++)cout << 0;
	}
*/
/*///luogu_p2249
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,m,t;
    cin>>n>>m;
    vector<int>v;
    for(int i=1;i<=n;i++){
        cin>>t;
        v.push_back(t);
    }
    for(int i=0;i<m;i++){
        cin>>t;
        if(i)cout<<' ';
        // cout<<binSearch(v,t);
        cout<<(binary_search(v.begin(),v.end(),t)?(lower_bound(v.begin(),v.end(),t)-v.begin()+1):-1);
    }
    return 0;
}
*/
/*///luogu_p2356
int n, a[1001][1001],r0[1001],c0[1001],s,t;
int main()
{
	cin >> n;
	for (int r = 1; r <= n; r++)for (int c = 1; c <= n; c++)
	{
		cin >> a[r][c];
		r0[r]+=a[r][c];
		c0[c]+=a[r][c];
		if (a[r][c]==0)t++;
	}
	for (int r = 1; r <= n; r++)for (int c = 1; c <= n; c++)if (a[r][c] == 0&&r0[r]+c0[c]>s)s = r0[r] + c0[c];
	if (t == 0)cout << "Bad Game!";
	else cout << s;
}
*/
/*///luogu_p2380
const int maxn=555;
    ll n,m,x[maxn][maxn],y[maxn][maxn],dp[maxn][maxn];
    while(cin>>n>>m&&n+m!=0)
    {
         for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)cin>>x[i][j],x[i][j]+=x[i][j-1];
        for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)cin>>y[i][j],y[i][j]+=y[i-1][j];
        for(int i=1;i<=n;++i)for(int j=1;j<=m;++j){dp[i][j]=max(dp[i][j-1]+y[i][j],dp[i-1][j]+x[i][j]);}
        cout<<dp[n][m]<<endl;
    }
*/
/*///luogu_p2393
#include<bits/stdc++.h>
using namespace std;
long double s,n;
int main()
{
    while(cin>>n)s+=(n*1000000);
    printf("%.5LF",s/1000000.0);
    return 0;
}
*/
/*///luogu_p2394
#include <stdio.h>
int main()
{
	long double a;
	scanf("%16LF",&a);
	printf("%.8LF",a/23.0);
	return 0;
}
*/
/*///luogu_p2550
#include <bits/stdc++.h>
using namespace std;
int n, p0[34],pt[10002],t,p[8];
int main()
{
	cin >> n;
	for (int i = 1; i <= 7; i++)
	{
		cin >> t;
		p0[t] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			cin >> t;
			if (p0[t] == 1)pt[i]++;
		}
		p[pt[i]]++;
	}
	for (int i = 7; i >= 1; i--)cout << p[i] << ' ';
}
*/
/*///luogu_improve_p2661
int n, a[233333], f[233333], b[233333], ans = 233333, l;
int find(int x)
{
	if (x != f[x])
	{
		int last = f[x];
		f[x] = find(f[x]);
		b[x] += b[last];
	}
	return f[x];
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)cin >> a[i], f[i] = i;
	for (int i = 1; i <= n; ++i)
	{
		int x = find(i), y = find(a[i]);
		if (x == y)ans = min(ans, b[i] + b[a[i]] + 1);
		else f[x] = y, b[i]+=b[a[i]]+1;
	}
	cout << ans;
	return 0;
}
*/
/*///luogu_p2676
int n, h,t,s=0;
	cin >> n >> h;
	vector<int>a;
	while (cin >> t)a.push_back(t);
	sort(a.begin(), a.end());
	for (int i = n-1,j=1; i >= 0; i--,j++)
	{
		s += a[i];
		if (s > h)
		{
			cout << j;
			return 0;
		}
	}
*/
/*///luogu_p2705
int r, b, c, d, e;
	cin >> r >> b >> c >> d >> e;
	cout << (((c + d - 2 * e) > 0) ? (d*b+c*r) : ((r>=b)?(2 * b*e + c * r - b * c):(-d*r+2*e*r+b*d)));
*/
/*///luogu_p2708
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=0;
	int l=a.length();
	int i=l-1;
	while(a[i]=='1')i--;
	while(i>=0)
	{
		if((a[i]-'0'+n%2)!=1)
		{
			int t=a[i];
			n++;
			while(a[i]==t)i--;
		}
		else i--;
	}
	cout<<n;
}
*/
/*///luogu_p2788
long long s ,t;
	char c;
	cin >> t;
	s = t;
	while (cin >> c >> t)
	{
		if (c == '+')s += t;
		else s -= t;
	}
	cout << s;
*/
/*///luogu_p2911
int s1, s2, s3,t1=0,t2=0;
	cin >> s1 >> s2 >> s3;
	map<int, int>a;
	for (int z = 1; z <= s1; z++)for (int y = 1; y <= s2; y++)for (int x = 1; x <= s3; x++)a[z + y + x]++;
	for (int i = 60; i >= 0; i--)if (a[i] >= t1)
	{
		t1 = a[i];
		t2 = i;
	}
	cout << t2;
*/
/*///luogu_p2945
#include<bits/stdc++.h>
using namespace std;
int n,x,y;
long long a[25555],b[25555],c;
int main()
{
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    for(int i=1;i<=n;i++)c+=(a[i]-b[i])*(a[i]>b[i]?y:-x);
    cout<<c;
    return 0;
}
*/
/*///luogu_p2947
#include<bits/stdc++.h>
using namespace std;
int n,a[233333],b[233333];
stack<int>s;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        while(!s.empty()&&a[i]>a[s.top()])
        {
            b[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        b[s.top()]=0;
        s.pop();
    }
    for(int i=1;i<=n;++i)cout<<b[i]<<endl;
    return 0;
}
*/
/*///luogu_p2955
int n;
	cin >> n;
	string a;
	while (cin >> a)cout <<(((a[a.size() - 1] - 48) &1)? "odd":"even")<<endl ;
*/
/*///luogu_p2956
int a[241][241] = { 0 };
int main()
{
	int x, y, i,x1,y1,x2,y2,c=0;
	cin >> x >> y >> i;
	while (cin >> x1 >> y1 >> x2 >> y2)for (int x0 = x1; x0 <= x2; x0++)for (int y0 = y1; y0 <= y2; y0++)a[x0][y0] = 1;
	for (int xt = 1; xt <= x; xt++)for (int yt = 1; yt <= y; yt++)if (a[xt][yt])c++;
	cout << c;
}
*/
/*///luogu_3150
int n,t;
	cin >> n;
	while (cin >> t)cout << (t % 2 == 0 ? "pb wins" : "zs wins") << endl;///t%2==0 t&1
*/
/*///luogu_p3367
int n,m,z,x,y,f[233333];
int find(int x){return x==f[x]?x:f[x]=find(f[x]);}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)f[i]=i;
    for(int i=1;i<=m;++i)
    {
        cin>>z>>x>>y;
        if(z==1)f[find(y)]=find(x);else cout<<(find(x)==find(y)?'Y':'X')<<endl;
    }
    return 0;
}
*/
/*///luogu_p3370
    int n;string s;set<string>a;
    cin>>n;
    while(n--)
    {
        cin>>s;
        a.insert(s);
    }
    cout<<a.size();
*/
/*///luogu_p3375
lutece 2210
*/
/*///luogu_p3397
long long n,m,x1,y1,x2,y2;
    cin>>n>>m;
    int a[1002][1002];
    for(int x=1;x<=n;++x)for(int y=1;y<=n;++y)a[x][y]=0;
    while(cin>>x1>>y1>>x2>>y2)for(int x=x1;x<=x2;++x)for(int y=y1;y<=y2;++y)a[x][y]++;
    for(int x=1;x<=n;++x)
    {
        for(int y=1;y<=n;++y)cout<<a[x][y]<<' ';
        cout<<'\n';
    }
*/
/*///luogu_p3717
int a[205][205];
double d(int x1,int y1,double x2,double y2)
{
    return pow((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2),0.5);
}
int main()
{
    int n,m,s=0;
    double r,x,y;
    cin>>n>>m>>r;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        for(int xt=x-r;xt<=x+r;xt++)for(int yt=y-r;yt<=y+r;yt++)
        {
            if(xt<=0||yt<=0)continue;
            if(d(xt,yt,x,y)<=r)a[xt][yt]=1;
        }
    }
    for(int q=1;q<=n;q++)for(int w=1;w<=n;w++)s+=a[q][w];
    cout<<s;
}
*/
/*///luogu_p3741
int n=0,f=0,count=0;
    char a[100];
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=1;i<n;++i)if(a[i]=='K'&&a[i-1]=='V')
    {
        count++;
        a[i]=0;
        a[i-1]=0;
    }
    for(int i=1;i<n;++i)if(a[i]==a[i-1]&&a[i]!=0)f=1;
    printf("%d",count+f);
*/
/*///luogu_p3742
int n;
	string x, y,t;
	cin >> n>>x>>y;
	for (int i = 0; i < n; i++)
	{
		if (x[i] < y[i])
		{
			cout << -1;
			return 0;
		}
		else t+=y[i];
	}
	cout << t;
	return 0;
*/
/*///luogu_p3805
lutece 2240
*/
/*///luogu_noip_p3808
#include<bits/stdc++.h>
using namespace std;

const int maxn=2e6;
char t[maxn],s[maxn];
int n,c;

struct node
{
    int num;
    int fail;
    int nxt[26];
}a[maxn];

void ins()
{
    int p=0,l=strlen(s+1);
    for(int i=1;i<=l;++i)
    {
        int id=s[i]-'a';
        if(a[p].nxt[id]==0)a[p].nxt[id]=++c;
        p=a[p].nxt[id];
    }
    a[p].num++;
}

void get_fail()
{
    queue<int>q;
    for(int i=0;i<26;++i)
    {
        if(a[0].nxt[i])
        {
            a[a[0].nxt[i]].fail=0;
            q.push(a[0].nxt[i]);
        }
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<26;++i)
        {
            if(a[u].nxt[i])
            {
                a[a[u].nxt[i]].fail=a[a[u].fail].nxt[i];
                q.push(a[u].nxt[i]);
            }
            else
            {
                a[u].nxt[i]=a[a[u].fail].nxt[i];
            }
        }
    }
}

void que()
{
    int l=strlen(t+1),p=0,ans=0;
    for(int i=1;i<=l;++i)
    {
        p=a[p].nxt[t[i]-'a'];
        for(int t=p;t&&a[t].num!=-1;t=a[t].fail)
        {
            ans+=a[t].num;
            a[t].num=-1;
        }
    }
    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%s",s+1);
        ins();
    }
    scanf("%s",t+1);
    get_fail();
    que();
    return 0;
}
*/
/*///luogu_p3954
int a, b, c;
	cin >> a >> b >> c;
	cout << a * 0.2 + b * 0.3 + c * 0.5;
*/
/*///luogu_p4136
int t;
    while(cin>>t)
    {
        if(t==0)return 0;
        else
        {
            if(t%2==1)cout<<"Bob"<<'\n';
            else cout<<"Alice"<<'\n';
        }
    }
*/
/*///luogu_p4325
set<int>a;
	int z;
	while (cin >> z)a.insert(z % 42);
	cout << a.size();
*/
/*///luogu_p4326
//<cmath>M_PI/acos(-1.0)
	const double Pi = 3.14159265358979323846264338328;
	double r;
	cin >> r;
	printf("%.6f\n%.6f", Pi*r*r,2*r*r);
*/
/*///luogu_p4414
int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	char t;
	while (cin >> t)
	{
		switch (t)
		{
		case 'A':cout << a[0] << ' '; break;
		case 'B':cout << a[1] << ' '; break;
		case 'C':cout << a[2] << ' ';
		}
	}
*/
/*///luogu_p4439
#include <bits/stdc++.h>
using namespace std;
int n,s=1;
char c,t=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>c;
		if(t!=c)s++;
		t=c;
	}
	cout<<s;
	return 0;
}
*/
/*///luogu_p4445
int n,a[233333];long long s=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        if(i)s+=a[i]<a[i-1]?a[i-1]:a[i];
    }
    printf("%lld",s);
*/
/*///luogu_p5015
string a,b;
	while (cin >> a)b += a;
	cout << b.size();
*/
/*///luogu_p5082
    long long n;
    scanf("%lld",&n);
    double s1=0.0,s2=0.0,t;
    for(long long i=1;i<=n;i++)
    {
        scanf("%lf",&t);
        s1+=t;
    }
    for(long long i=1;i<=n;i++)
    {
        scanf("%lf",&t);
        s2+=t;
    }
    printf("%.6lf",(s1*3-s2*2)/(s1-s2));
*/
/*///luogu_p5534
    int a,b,c;
	cin>>a>>b>>c;
	cout<<c*(a*2+(c-1)*(b-a))/2;
*/
/*///lrj2-1
using namespace std;
const long long N = 100000000;
int countnum(long long num);
bool solution_daffodil(long long num);
int main()
{
	ofstream outfile;
	outfile.open("daffodil.txt");
	for (long long i = 1; i <= N; i++)
		if (solution_daffodil(i))outfile << i<<',';
	outfile.close();
}

int countnum(long long num)
{
	int i=0;
	while (num != 0)
	{
		i++;
		num /= 10;
	}
	return i;
}
void everynum(long long num)
{
	vector<int>a;
	while (num != 0)
	{
		a.push_back(num % 10);
		num /= 10;
	}
}
bool solution_daffodil(long long num)
{
	long long temp = num;
	int n = countnum(num);
	long long s = 0;
	while (num != 0)
	{
		s += pow(num % 10, n);
		num /= 10;
	}
	return s == temp;
}
*/
/*///lrj 2-2
int main()
{
	int a, b, c;
	vector<vector<int>>abc;
	while(cin >> a >> b >> c)
	{
		vector<int>temp;
		temp.push_back(a);
		temp.push_back(b);
		temp.push_back(c);
		abc.push_back(temp);
	}
	for (int j = 0; j < abc.size(); j++)solution_hanxin(abc[j][0], abc[j][1], abc[j][2]);
}
void solution_hanxin(int a, int b, int c)
{
	const int temp[3] = { 3,5,7 };
	const long long N = 100;
	for (int i = 1;; i++)
	{
		if (i > N)break;
		if ((i%temp[0] == a) && (i%temp[1] == b) && (i%temp[2] == c))
		{
			cout << i<<endl;
			return;
		}
	}
	cout << "No answer";
}
*/
/*///lrj2-3
void print_random_char(string a);
int main()
{
	const string temp = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+{}|:<>?";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n - i; j++)
		{
			if (j >= i)print_random_char(temp);
			else cout << ' ';
		}
		cout << endl;
	}
}
void print_random_char(string a)
{
	double k = a.size() / 100.0;
	int i = rand() % 100 * k;
	cout << a[i];
}
*/
/*///lrj2-4
void solution_subsequence(long long n, long long m);
int main()
{
	long long n, m;
	while (cin >> n >> m && n != 0)solution_subsequence(n, m);
}
void solution_subsequence(long long n, long long m)
{
	double s = 0;
	for (; n <= m; n++)s += 1.0 / (n*n);
	printf("%.5f\n", s);
}
*/
/*///lrj2-5
void solution_demical1(int a, int b, int c)
{
	if (a >= b)
	{
		cout << a / b << '.';
		solution_decimal0(a % b, b, c);
	}
	else
	{
		cout << "0.";
		solution_decimal0(a, b, c);
	}
}
void solution_decimal0(int a, int b, int c)
{
	for (int i = 0; i < c - 1; i++)
	{
		a *= 10;
		cout << a / b;
		a %= b;
	}
	a *= 10;
	int t = a / b;
	if (a%b*10 / b >= 5)cout << t + 1;
	else cout <<t;
	cout << endl;
}
*/
/*///lrj3-1
const string temp = "OX";
	char c;
	int s = 0,i=0;
	while (cin >> c)
	{
		if (c == temp[0])
		{
			i++;
			s += i;
		}
		else i = 0;
	}
	cout << s;
*/
/*///lrj3-2
map<char, double>element_mass = { {'H',1.008},{'C',12.01},{'N',14.01},{'O',16.00}};
	string a;
	double s = 0;
	cin >> a;
	for (char c : a)
	{
		char t;
		if (isalpha(c))
		{
			t = c;
			s += element_mass[c];
		}
		else s += (c - 49)*element_mass[t];
	}
	cout << s;
*/
/*///lrj3-3
unsigned long long m, n, c[10] = { 0 };
	cin >> m >> n;
	for (; m <= n; m++)
	{
		unsigned long long a = m;
		while (a != 0)
		{
			c[a % 10]++;
			a /= 10;
		}
	}
	int i = 0;
	for (int j = 0; j < 10; j++)
	{
		if (i == 0)i = 1;
		else cout << ' ';
		cout << c[j];
	}
*/
/*///lrj3-4
bool prime(int x);
int main()
{
	string a;
	char t;
	set<char>aa;
	while (cin >> t)
	{
		a.push_back(t);
		aa.insert(t);
	}
	int m = a.size();
	if (prime((int)a.size()))if (aa.size()==1)m=1;
	else
	{
		for (int i = 0; i <m; i++)
		{
			string aa1 =a;
			string temp(aa1, 0,i+1);
			for (string aa2(aa1,0,i+1);;)
			{
				if (aa1.empty())
				{
					m = i+1;
					break;
				}
				if (aa2 == temp)
				{
					aa1.erase(0, i+1);
					aa2 = aa1.substr(0, i+1);
				}
				else
				{
					break;
				}
			}
		}
	}
	cout << m;
}
*/
/*///lrj3-5
char c[4] = { 'W','S','A','D' };//up,down,left,right
char a[7][7];
void display(char a[7][7]);
void change_3_5(char a[7][7], char t, int &x, int &y);
void swap1(char *a, char *b)
{
	char c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	for (int z = 0; z < 7; z++)for (int y = 0; y < 7; y++)a[z][y] = '1';
	char t;
	int x, y;
	for (int m = 1; m <= 5; m++)for (int n = 1; n <= 5; n++)
		{
			cin >> a[m][n];
			if (a[m][n] == '0')
			{
				x = m;
				y = n;
			}
		}
	display(a);
	while (cin >> t && t != '0')change_3_5(a, t, x, y);
	display(a);
}
void change_3_5(char a[7][7], char t, int &x, int &y)
{
	if (t == c[2])
	{
		if (a[x][y - 1] == '1')cout << "wrong left!" << endl;
		else
		{
			swap1(&a[x][y], &a[x][y - 1]);
			y -= 1;
		}
	}
	if (t == c[3])
	{
		if (a[x][y + 1] == '1')cout << "wrong right!" << endl;
		else
		{
			swap1(&a[x][y], &a[x][y + 1]);
			y += 1;
		}
	}
	if (t == c[0])
	{
		if (a[x - 1][y] == '1')cout << "wrong up!" << endl;
		else
		{
			swap1(&a[x][y], &a[x - 1][y]);
			x -= 1;
		}
	}
	if (t == c[1])
	{
		if (a[x + 1][y] == '1')cout << "wrong down!" << endl;
		else
		{
			swap1(&a[x + 1][y], &a[x][y]);
			x += 1;
		}
	}
}
void display(char a[7][7])
{
	for (int m = 1; m <= 5; m++)
	{
		for (int n = 1; n <= 5; n++)
		{
			if (a[m][n] == '0')
			{
				cout << ' ';
			}
			else cout << a[m][n];
		}
		cout << endl;
	}
}
*/
/*///lrj3-6
///qwe*rty*ui*opasdfg*hjkl*zxcv*bn*ma*bcd*efg
	int r, c,count=0;//r row c column
	bool t,tt=1;//endl or not
	cin >> r >> c;
	char a[12][12];
	for (int x = 0; x < 12; x++)for (int y = 0; y < 12; y++)a[x][y] = '*';
	for (int x = 1; x <= r; x++)for (int y = 1; y <= c; y++)cin >> a[x][y];
	for (int x = 1; x <= r; x++)
	{
		for (int y = 1; y <= c; y++)
		{
			if (a[x][y] != '*')
			{
				if (tt)
				{
					cout << "row" << ++count << ":\t\t";
					tt = 0;
				}
				cout << a[x][y];
				t = 1;
			}
			else
			{
				if (t)
				{
					cout << '\n';
					t = 0;
					tt = 1;
				}
			}
		}
		if(t)
		{
			cout << '\n' ;
			t = 0;
			tt = 1;
		}
	}
	count = 0;
	for (int y = 1; y <= c; y++)
	{
		for (int x = 1; x <= r; x++)
		{
			if (a[x][y] != '*')
			{
				if (tt)
				{
					cout << "column" << ++count << ":\t";
					tt = 0;
				}
				cout << a[x][y];
				t = 1;
			}
			else
			{
				if (t)
				{
					cout << endl;
					t = 0;
					tt = 1;
				}
			}
		}
		if (t)
		{
			cout << endl;
			t = 0;
			tt = 1;
		}
	}
*/
/*///lrj3-9
int sum=0,p=0;
	string s, t;
	cin >> s >> t;
	for (int z=0;z<t.size();z++)for (int y = p; y < s.size(); y++)if (t[z] == s[y])
	{
		p = y+1;
		sum++;
		break;
	}
	cout << (sum == t.size() ? 1 : 0);
*/
/*///lrj3-10
	map<int, int>a;
	int t;
	while (cin >> t)a[t]++;
	switch (a.size())
	{
	case 1:
	{
		cout << "OK" << endl;
		break;
	}
	case 2:
	{
		auto it = a.begin();
		if (((it->second == 4) && ((++it)->second == 8)) || ((it->second == 8) && ((++it)->second == 4)))cout << "ok" << endl;
		else cout << "wrong" << endl;
		break;
	}
	case 3:
	{
		auto it = a.begin();
		if ((it->second == 4) && ((++it)->second == 4))cout << "Ok" << endl;
		else cout << "Wrong" << endl;
		break;
	}
	default:cout << "WRONG!" << endl;
	}
*/
/*buaa_ques
void swap(double *a, double *b){double t;t = *a;*a = *b;*b = t;}
double a[101][101];
int ABS(double x){return x < 0 ? -x : x;}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)for (int j = 1; j <= n + 1; j++)scanf("%lf", &a[i][j]);
    for (int i = 1; i <= n; i++)
    {
        int bj = i;
        for (int j = i + 1; j <= n; j++)if (ABS(a[j][i]) > ABS(a[bj][i]))bj = j;
        for (int j = 1; j <= n + 1; j++)swap(&a[bj][j], &a[i][j]);
        if (!a[i][i])continue;
        double p = a[i][i];
        for (int j = 1; j <= n + 1; j++)a[i][j] /= p;
        for (int j = 1; j <= n; j++)if (i != j)
            {
                double o = a[j][i];
                for (int k = 1; k <= n + 1; k++)a[j][k] -= a[i][k] * o;
            }
    }
    int bj2 = 0, bj1 = 0;
    for (int i = 1; i <= n; i++)
    {
        int ans = 0;
        for (int j = 1; j <= n + 1; j++)if (!a[i][j])ans++;
        if (ans == n && a[i][n + 1])bj2 = 1;
        if (ans == n + 1)bj1 = 1;
    }
    if (bj2)printf("-1"), exit(0);
    if (bj1)printf("0"), exit(0);
    for (int i = n - 1; i >= 1; i--)for (int j = i + 1; j <= n; j++)a[i][n + 1] -= a[j][n + 1] * a[i][j];
    for (int i = 1; i <= n; i++)if (a[i][n + 1] == 0)printf("0\n");else printf("%lf\n", a[i][n + 1]);
    return 0;
}
int a[2001],n,t;
	scanf("%d",&n);
	for(int i=0;i<=2000;++i)a[i]=prime(i);
	while(n--)
	{
		scanf("%d",&t);
		for(int j=2;j<t;++j)if(a[j]+a[t-j]==2)
			{
				printf("%d %d\n",j,t-j);
				break;
			}
	}
int n,a[100],i=0;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
        return 0;
    }
    int b=n;
    while(n>0)
    {
        a[i++]=n%2;
        n/=2;
    }
    while(i--)printf("%d",a[i]);
    printf("\n%o\n%X",b,b);
int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c==0||b/c==0)printf("Error\n");
    else  printf("%d\n",a/(b/c));
    if(b==0)printf("Error");
    else printf("%.4lf",1.0*a*c/b);
*/
/*buaa_rec
int x1,y1,x2,y2,x3,y3,x4,y4,s;
    while(scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)){
        int a1=x2-x1,b1=y2-y1,a2=x4-x3,b2=y4-y3;
        s=a1*b1+a2*b2;
        if(x3>=x1&&x3<=x2&&y3>=y1&&y3<=y2)
        {
            int x23=x2-x3,y23=y2-y3;
            if(a2<=x23&&b2<=y23)s-=a2*b2;
            if(a2<=x23&&b2>y23)s-=a2*y23;
            if(a2>=x23&&b2<y23)s-=x23*b2;
            if(a2>=x23&&b2>y23)s-=x23*y23;
        }
        if(x4>=x1&&x4<=x2&&y3>=y1&&y3<=y2)
        {
            int x41=x4-x1,y23=y2-y3;
            if(a2<=x41&&b2<=y23)s-=a2*b2;
            if(a2<=x41&&b2>y23)s-=a2*y23;
            if(a2>=x41&&b2<y23)s-=x41*b2;
            if(a2>=x41&&b2>y23)s-=x41*y23;
        }
        if(x4>=x1&&x4<=x2&&y4>=y1&&y4<=y2)
        {
            int x41=x4-x1,y41=y4-y1;
            if(a2<=x41&&b2<=y41)s-=a2*b2;
            if(a2<=x41&&b2>y41)s-=a2*y41;
            if(a2>=x41&&b2<y41)s-=x41*b2;
            if(a2>=x41&&b2>y41)s-=x41*y41;
        }
        if(x3>=x1&&x3<=x2&&y4>=y1&&y4<=y2)
        {
            int x23=x2-x3,y41=y4-y1;
            if(a2<=x23&&a2<=y41)s-=a2*b2;
            if(a2<=x23&&a2>y41)s-=a2*y41;
            if(a2>=x23&&a2<y41)s-=x23*b2;
            if(a2>=x23&&a2>y41)s-=x23*y41;
        }
        printf("%d\n",s);
    }
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;}
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,s;
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    int a1=x2-x1,b1=y2-y1,a2=x4-x3,b2=y4-y3;
    s=a1*b1+a2*b2;
    int m1=max(min(x1,x2),min(x3,x4));
    int n1=max(min(y1,y2),min(y3,y4));
    int m2=min(max(x1,x2),max(x3,x4));
    int n2=min(max(y1,y2),max(y3,y4));
    if((x3>=x1&&x3<=x2&&y3>=y1&&y3<=y2)||(x4>=x1&&x4<=x2&&y3>=y1&&y3<=y2)||(x4>=x1&&x4<=x2&&y4>=y1&&y4<=y2)||(x3>=x1&&x3<=x2&&y4>=y1&&y4<=y2))
    s-=(m2-m1)*(n2-n1);
    printf("%d",s);
}
int n;
    scanf("%d",&n);
    double a=12*3600.0/11;
    double b=(n%12+1)*a;
    int t=b;
    int h=t/3600;
    int m=t%3600/60;
    double s=b-h*3600-m*60;
    printf("%d:%d:%.7lf",h,m,s);
int n;
    scanf("%d",&n);
    char a[12][20]={"0:0:0.0000000","1:5:27.2727273","2:10:54.5454545","3:16:21.8181818","4:21:49.0909091","5:27:16.3636364","6:32:43.6363636","7:38:10.9090909","8:43:38.1818182","9:49:5.4545455","10:54:32.7272727","0:0:0.0000000"};
    printf("%s",a[n%12]);
*/
/*
B
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("%.4lf",(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2)/2.0);
G
    int n,t,p,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&t);
        if(t==n)
        {
            p=i;
            break;
        }
    }
    int m=(n+1)/2;
    if(p>m)p=n-p+1;
    if(n%2==1)s=m*m-(m-p)*(m-p);
    else s=m*(m+1)-(m-p+1)*(m-p);
    printf("%d",s);
H
int n,m,o,x,k,a[101],s=0;
int main()
{
    scanf("%d%d",&n,&m);
    while(m--)
    {
        scanf("%d%d%d",&o,&x,&k);
        if(o==1)
        {
            a[x]+=k;
            s+=k;
        }
        else 
        {
            for(int i=1;i<=100;++i)a[i]=0;
            a[x]=s;
        }
    }
    for(int i=1;i<=n;++i)printf("%d ",a[i]);
}
F
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c))
    {
        int i=0;
        while(i%3!=a||i%5!=b||i%7!=c)i++;
        printf("%d\n",i);
    }
E
    int n,t,a[33]={1};
    for(int i=1;i<31;++i)a[i]=2*a[i-1]+2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        printf("%d",a[t-1]);
    }
E
int e(int m)
{
    if(m==1)return 1;
    return 2*e(m-1)+2;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m)
        printf("%d",e(m));
    }
}
D
    int a[100],t,i=0;
    while(scanf("%d",&t))a[i++]=t;
    for(int j=0;j<i;++j)for(int x=j;x<i;++x)if(a[x]>a[j]){t=a[x];a[x]=a[j];a[j]=t;}
    printf("%d",a[i/2]);
D
    int t,v,c=0;
    while(scanf("%d",&t){
        if(c==0)
        {
            v=t;
            c++;
        }
        else if(t==v)c++;
        else c--;
    }
    printf("%d",v);
A
    unsigned int n,x=65536;
    scanf("%d",&n);
    unsigned int a=(n%x*x)+(n/x);
    printf("%u",a);
A
    int n,a[33],l=0,h=0,t=1;
    scanf("%d",&n);
    for(int i=0;i<32;++i)
    {
        a[31-i]=n%2;
        n/=2;
    }
    for(int i=0;i<16;++i)
    {
        h+=t*a[15-i];
        l+=t*a[31-i];
        t*=2;
    }
    printf("%u",l*65536+h);
C
    int h1,m1,h2,m2,t1,t2,t;
    char c;
    scanf("%d%c%d%d%c%d",&h1,&c,&m1,&h2,&c,&m2);
    t1=h1*60+m1;
    t2=h2*60+m2;
    t=(t1+t2)/2;
    printf("%d:%d",t/60,t%60);
    if(t%60==0)printf("0");
*/
/*
H
int n,t;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&t);
        a[t]=i;
    }
    for(int i=1;i<10001;++i)if(a[i])printf("%d ",a[i]);
B
int n,i=0;
    scanf("%d",&n);
    char a[100],b[100],t;
    scanf("%s",a);
    for(int x=0;x<n;++x)
    {
        t=a[x];
        if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u') b[i++]=t;
    }
    for(int x=0;x<n;++x)
    {
        t=a[x];
        if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')putchar(b[--i]);
        else putchar(t);
    }
C
double x1,y1,x2,y2,x3,y3,a1,b1,c1,a2,b2,c2,x,y;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a1=2*(x2-x1);
    b1=2*(y2-y1);
    c1=x2*x2+y2*y2-x1*x1-y1*y1;
    a2=2*(x3-x2);
    b2=2*(y3-y2);
    c2=x3*x3+y3*y3-x2*x2-y2*y2;
    x=(c1*b2-c2*b1)/(a1*b2-a2*b1);
    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
    if(x>=-1e-6||x<=1e-6)x=0.0;
    if(y>=-1e-6||y<=1e-6)y=0.0;
    printf("(%.2lf,%.2lf)",x,y);
C
double x1,y1,x2,y2,x3,y3;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("(%.2lf,%.2lf)",(2.0*(x2*x2+y2*y2-x1*x1-y1*y1)*(y3-y2)-2.0*(x3*x3+y3*y3-x2*x2-y2*y2)*(y2-y1))/(4.0*(x2-x1)*(y3-y2)-4.0*(x3-x2)*(y2-y1)),(2.0*(x2-x1)*(x3*x3+y3*y3-x2*x2-y2*y2)-2.0*(x3-x2)*(x2*x2+y2*y2-x1*x1-y1*y1))/(4.0*(x2-x1)*(y3-y2)-4.0*(x3-x2)*(y2-y1)));
E
print(int(input()) + int(input()))
D
int x;
    scanf("%d",&x);
    int m=x*x/2;
    for(int i=0;i<m;++i)putchar(' ');
    printf("$\n");
    for(int i=2;i<=x;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(j<=m-pow(2,i-1))putchar(' ');
            else putchar('$');
        }
        if(i%2==1)putchar('$');
        else putchar('@');
        for(int j=1;j<=i*i/2;++j)putchar('$');
        putchar('\n');
    }
F
int n;
    scanf("%d",&n);
    double v,k[10000],p[10000],s=0.0;
    for(int i=0;i<n;++i)scanf("%lf*x^%lf",&k[i],&p[i]);
    scanf("%lf",&v);
    for(int a=0;a<n;++a)s+=k[a]*pow(v,p[a]);
    printf("%.1lf",s);
A
const int inf=1e7;
    int a,b,x1=-inf,y1=inf,x2=inf,y2=-inf;
    while(scanf("%d%d",&a,&b)!=-1)
    {
        if(a>=x1)x1=a;
        if(b<=y1)y1=b;
        if(a<=x2)x2=a;
        if(b>=y2)y2=b;
    }
    if(x1>=y1)printf("Empty%%0.9f\\\?");
    else printf("%d %d",x1,y1);
    printf("\n%d %d",x2,y2);
G
int main()
{
    int n,t,a;
    scanf("%d",&n);
    scanf("%d",&a);
    n--;
    while(n--){
        scanf("%d",&t);
        a=gcd(a,t);
    }
    printf("%d",a);
    return 0;
？？？
	int n,b[1001],s=1,t=1,c=1,temp;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)scanf("%d",&b[i]);
    for(int i=1;i<n;++i)
    {
        t=1;
        temp=i;
        while(b[temp]!=n)
        {
            t++;
            temp=b[temp];
        }
        if(s<=t)s=t;
    }
    if(n==1)s=0;
    printf("%d",s);
}

void solve10(int x)
{
    int t=x;
    int a[1000],i=0;
    do
    {
        a[i++]=x%2;
        x/=2;
    } while (x);
    while(i--)printf("%d",a[i]);
    printf(" %o %X\n",t,t);
}
void solve(char * a,int k)
{
    long s=0,i=0;
    while(a[i]!=0)
    {
        s=s*k+(isalpha(a[i])?a[i]-'A'+10:a[i]-'0');
        i++;
    }
    printf("%ld\n",s);
}
int main()
{
    int n,k,x,p;
    char a[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&k);
        if(k==10)
        {
            scanf("%d",&x);
            solve10(x);
        }
        else
        {
            scanf("%d",&p);
            scanf("%s",a);
            solve(a,k);
        }
    }
    return 0;
}
*/
/*///hdu1096
int a,b=0,n,N;
    cin>>N;
    for(int i=1;i<=N;++i)
    {
        cin>>n;
        while(n--){
            cin>>a;
            b+=a;
        }
        cout<<b;
        b=0;
        if(i<N)cout<<"\n\n";
        else cout<<'\n';
    }
*/
/*hdu1002
int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        string a,b;
        cin>>a>>b;
        cout<<"Case "<<i<<":\n"<<a<<" + "<<b<<" = ";
        a_and_b(a,b);
        if(i<n)cout<<"\n\n";
    }
    cout<<'\n';
*/
/*hdu2005
int y,m,d,r,s=0;
    char c;
    while(cin>>y>>c>>m>>c>>d){
        if(y%400==0||(y%4==0&&y%100!=0))r=1;
        else r=0;
        switch(m)
        {
            case 1:s=d;break;
            case 2:s=31+d;break;
            case 3:s=59+r+d;break;
            case 4:s=90+r+d;break;
            case 5:s=120+r+d;break;
            case 6:s=151+r+d;break;
            case 7:s=181+r+d;break;
            case 8:s=212+r+d;break;
            case 9:s=242+r+d;break;
            case 10:s=272+r+d;break;
            case 11:s=304+r+d;break;
            case 12:s=334+r+d;break;
        }
        cout<<s<<endl;
    }
*/
/*///hdu1039
int is_vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return 1;
    else return 0;
}
void solution_hdu1039(string a)
{
    int f=1,nv=0,l=a.size();
    for(int i=0;i<l;++i)
    {
        if(is_vowel(a[i]))nv++;
    }
    if(nv==0)f=0;
    for(int i=0;i<l-1;++i) if(a[i]==a[i+1])if(a[i]!='e'&&a[i]!='o')f=0;
    if(l>=3)for(int i=0;i<l-2;++i){
            int q=is_vowel(a[i])+is_vowel(a[i+1])+is_vowel(a[i+2]);
            if(q==3||q==0)f=0;
        }
    if(f)cout<<'<'<<a<<"> is acceptable.\n";
    else cout<<'<'<<a<<"> is not acceptable.\n";
}
int main()
{
    string a;
    while(cin>>a){
        if(a=="end")break;
        solution_hdu1039(a);
    }
    return 0;
}
*/
/*///hdu1720
int a,b;
    while(cin>>hex>>a>>b)cout<<a+b<<endl;
*/
/*
void a_and_b(string a, string b)
{
	const int N = 1000;
	char c[N], x[N], y[N];
	memset(c, 0, sizeof(c)); memset(x, 0, sizeof(x)); memset(y, 0, sizeof(y));
	int la = a.size(), lb = b.size(), l = la > lb ? la : lb;
	for (int i = 0; i < la; ++i)x[i] = a[la - i - 1] - '0';
	for (int i = 0; i < lb; ++i)y[i] = b[lb - i - 1] - '0';
	for (int i = 0; i < l; ++i){
		if (x[i] + y[i] + c[i] >= 10)c[i + 1] = 1;
		c[i] = (x[i] + y[i] + c[i]) % 10;
	}
	if (c[l] == 1)printf("1");
	for (int i = l - 1; i >= 0; --i)printf("%d", c[i]);
}
*/
/*///lutece——2128
int n;
    scanf("%d",&n);
    if(n==1||n==2)printf("Oh my god I'm saved");
    else printf("gg tuixuele");
*/
/*///lutece——2132
int year(int y)
{
    if(y%400==0||(y%4==0&&y%100!=0))return 1;
    else return 0;
}
int day(int y,int m,int d)
{
    int r=year(y),s=0;
        switch(m)
        {
            case 1:s=d;break;
            case 2:s=31+d;break;
            case 3:s=59+r+d;break;
            case 4:s=90+r+d;break;
            case 5:s=120+r+d;break;
            case 6:s=151+r+d;break;
            case 7:s=181+r+d;break;
            case 8:s=212+r+d;break;
            case 9:s=243+r+d;break;
            case 10:s=273+r+d;break;
            case 11:s=304+r+d;break;
            case 12:s=334+r+d;break;
        }
        return s;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int y,m,d,mm,dd,a;
        scanf("%d%d%d%d%d",&y,&m,&d,&mm,&dd);
        if(mm>m||(mm==m&&dd>=d))a=day(y,mm,dd)-day(y,m,d);
        else a=day(y+1,mm,dd)+365+year(y)-day(y,m,d);
        printf("%d\n",a);
    }
}
*/
/*3.26
1.(4)
printf("This is a c program.\n");
1.(5)
int a,b,sum;
    a=123,b=456;
    sum=a+b;
    printf("sum is %d\n",sum);
1.(6)
int max(int x,int y);
    int a,b,c;
    printf("input a&b:");
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max=%d\\n",c);
1.(7)
int max(int x,int y);
    int a,b,c;
    printf("input a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("max=%d",max(max(a,b),c));
2.(1)
char c1,c2;
    c1=97;
    c2=98;
    printf("%c %c\n",c1,c2);
    printf("%d %d\n",c1,c2);
//a b
//97 98
//c1=197;c2=198
//??
//-59 -58
//int c1,c2
//a b
//97 98
2.(2)
 int a,b;
    float x,y;
    char c1,c2;
    scanf("a=%db=%d",&a,&b);
    scanf("%f%e",&x,&y);
    scanf("%c%c",&c1,&c2);
    printf("%d %d %f %e %c %c",a,b,x,y,c1,c2);
//test1:3 8 -1.#QNAN0 -1.#QNAN0e+000 , b
//test2:3 8 -1.#QNAN0 -1.#QNAN0e+000 , b
//test3:3 8 -1.#QNAN0 -1.#QNAN0e+000 b =
//test4:3 8 -1.#QNAN0 -1.#QNAN0e+000 b =
//test5:0 8 3.000000 7.000000e+000   8
//test6:3 8 -1.#QNAN0 -1.#QNAN0e+000 b =
//test7:3 8 -1.#QNAN0 -1.#QNAN0e+000 b =
//test8:3 8 -1.#QNAN0 -1.#QNAN0e+000 b =
2.(3)
int i,j,m,n;
    i=8;
    j=10;
    m=++i;
    n=j++;
    printf("%d,%d,%d,%d\n",i,j,m,n);
//1:9,11,9,10
//2:9,11,8,11
//3:8,10
//4:9,11
//5:9,11,8,10
//6:9,9,7,-10
2.(4)
 int k=9;
    printf("input r:\n");
    scnaf("%d",&k);
    double r=k/100.0;
    double x=pow(r,10)-1.0;
    printf("p=%lf",x);
3.(1)
int a,b;
    float d,e;
    char c1,c2;
    double f,g;
    long m,n;
    unsigned int p,q;
    a=61;b=62;
    c1='a';c2='b';
    d=3.56;e=-6.87;
    f=3157.890121;g=0.123456789;
    m=50000;n=-60000;
    p=32768;q=40000;
    printf("a=%d,b=%d\nc1=%c,c2=%c\nd=%6.2fln",a,b,c1,c2,d,e);
    printf("f=%15.6f,g=%15.12f\nm=%ld,n=%ld\np=%u,q=%u",f,g,m,n,p,q);
}
a=61,b=62
c1=a,c2=b
d=  3.56lnf=    3157.890121,g= 0.123456789000
m=50000,n=-60000
p=32768,q=40000
a=50000,b=-60000
c1==,c2=>
d=3157.89lnf=    3157.890121,g= 0.123456789000
m=50000,n=-60000
p=50000,q=4294907296
3.(1)4
int a;
    a=sizeof(char);
    printf("char %d\n",a);
    a=sizeof(unsigned char);
    printf("unsigned char %d\n",a);
    a=sizeof(short);
    printf("short %d\n",a);
    a=sizeof(int);
    printf("int %d\n",a);
    a=sizeof(unsigned int);
    printf("unsigned int %d\n",a);
    a=sizeof(float);
    printf("float %d\n",a);
    a=sizeof(long int);
    printf("long int %d\n",a);
    a=sizeof(unsigned long);
    printf("unsigned long %d\n",a);
    a=sizeof(double);
    printf("double %d\n",a);
    a=sizeof(long long);
    printf("long long %d\n",a);
    a=sizeof(unsigned long long);
    printf("unsigned long long %d\n",a);    
}
char 1
unsigned char 1
short 2
int 4
unsigned int 4
float 4
long int 4
unsigned long 4
double 8
long long 8
unsigned long long 8
*/
/*
PPT1
double x1,y1,r,x2,y2,d;
    int a;
    printf("input center (x,y):\n");
    scanf("%lf,%lf",&x1,&y1);
    printf("input r:\n");
    scanf("%lf",&r);
    printf("input point (x,y):\n");
    scanf("%lf,%lf",&x2,&y2);
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    if(d<r)a=-1;
    else if(d==r)a=0;
    else a=1;
    switch(a)
    {
        case 1:printf("out");break;
        case 0:printf("on");break;
        case -1:printf("in");break;
    }
PPT2
int n,a[8],i=0;
    printf("input a number:\n");
    scanf("%d",&n);
    while(n)
    {
        a[i++]=n%10;
        n/=10;
    }
    printf("the numbers are:\n");
    while(i--)printf("%d ",a[i]);
*/
/*///game
srand((unsigned)time(NULL));
    int a=rand()%(int)(1e9+7),b,c=0;
    while(1)
    {
        scanf("%d",&b);
        if(b>a)printf("more\n"),c++;
        else if(b<a)printf("less\n"),c++;
        else 
        {
            printf("right! %d times",c);
            break;
        }
    }
char type[3][10]={"scissors","rock","paper"};
void vs(char a,char b)
{
	printf("pc:%s\nyou:%s\n",type[a-'A'],type[b-'A']);
	if(a==b)printf("even.\n");
	else if(b-a==1||(b=='A'&&a=='C'))printf("you win.\n");
	else printf("you lose.\n");
}
int main()
{
	srand(time(NULL));
	printf("game on:\n");
	while(1)
	{
		int pc=(int)rand()%3+'A';
		int pe;
		printf("A:scissors\nB:rock\nC:paper\nD:leave\n");
		scanf("%c%*c",&pe);
		if(pe=='D')
		{
			printf("game over.\n");
			break;
		}
		else vs(pc,pe);
	}
	return 0;
}
*/
/*///matrix
#define N 1000
long long m,n,p;
long long a[N][N],b[N][N],c[N][N];
int main()
{
    scanf("%d%d%d",&m,&n,&p);
    for(int i=1;i<=m;++i)for(int j=1;j<=n;++j)scanf("%d",&a[i][j]);
    for(int i=1;i<=n;++i)for(int j=1;j<=p;++j)scanf("%d",&b[i][j]);
    for(int i=1;i<=m;++i)for(int j=1;j<=p;++j)for(int k=1;k<=n;++k)c[i][j]+=a[i][k]*b[k][j];
    return 0;
}
*/
/*///hanoi
void show(char x,char y)
{
	static int num_show=1;
	printf("%d:move 1 from %c to %c\n",num_show++,x,y);
}

void hanoi(int n,char from,char via,char to)
{
	if(n==1)
	{
		show(from,to);
		return;
	}
	hanoi(n-1,from,to,via);
	show(from,to);
	hanoi(n-1,via,from,to);
}

int main()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'a','b','c');
}
*/
/*///cf 393A
char c,b[256];
int main()
{
	int x=100;
	while((c=getchar())!=-1)b[(int)c]++;
	if(b['i']<=x)x=b['i'];
	if(b['e']/3<=x)x=b['e']/3;
	if(b['t']<=x)x=b['t'];
	if(b['n']/2<=x)x=b['n']/2;
	if((b['n']-1)/2<=x-1)x=(b['n']-1)/2;
	printf("%d",x);
}
*/
/*///cf 565A
long long n,t,ans;
int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        ans=0;
        cin>>t;
        while(t%2==0||t%3==0||t%5==0)
        {
            while(t%2==0){t/=2;ans++;}
            while(t%3==0){t/=3;ans+=2;}
            while(t%5==0){t/=5;ans+=3;}
        }
        if(t==1)cout<<ans<<endl;else cout<<-1<<endl;
    }
    return 0;
}
*/
/*///cf 565B
long long n,t,tt;
int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);    
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>t;
        long long a[3];
        a[0]=a[1]=a[2]=0;
        for(int j=1;j<=t;++j)
        {
            cin>>tt;
            a[tt%3]++;
        }
        long long temp=min(a[1],a[2]);
        cout<<a[0]+(a[1]-temp)/3+(a[2]-temp)/3+temp<<endl;
    }
    return 0;
}
*/
/*///guangdianC
int n=1;
    for(int i=0;i<=1;++i)for(int j=0;j<=1;++j)for(int k=0;k<=1;++k)
    {
        int a,b,c;
        if(i)b=0;else b=1;
        if(j)c=0;else c=1;
        if(k){a=0;b=0;}
        if(i==a&&j==b&&k==c)
        {
            printf("case %d:\nZhangsan %s\nLisi %s\nWangwu %s\n",n++,(i?"true":"false"),(j?"true":"false"),(k?"true":"false"));
        }
    }
*/
/*///lutece sjjg N 2156
#include<stdio.h>

long long max(long long a, long long b) { return a > b ? a : b; }
long long min(long long a, long long b) { return a < b ? a : b; }

#define N  1000005
int n, q, o, l, k, r;
long long st[4 * N], maxt[4 * N], mint[4 * N], tg[4 * N], lt[4*N], rt[4 * N];

void build(int p, int l, int r)
{
	lt[p] = l, rt[p] = r;
	if (l == r)return;
	else
	{
		int mid = (l + r) >> 1;
		build(p << 1, l, mid);
		build(p << 1 | 1, mid + 1, r);
	}
}

void update(int p, long long v)
{
	int lb = lt[p], rb = rt[p];
	st[p] += (rb - lb + 1)*v;
	maxt[p] += v;
	mint[p] += v;
	tg[p] += v;
}

void push_down(int p)
{
	update(p <<1, tg[p]);
	update(p <<1 |1, tg[p]);
	tg[p] = 0;
}

void push_up(int p)
{
	st[p] = st[p <<1] + st[p <<1 |1];
	maxt[p] = max(maxt[p <<1], maxt[p <<1 | 1]);
	mint[p] = min(mint[p <<1], mint[p <<1 | 1]);
}

void modify(int l, int r, int p, int v)
{
	int lb = lt[p], rb = rt[p];
	if (l <= lb && rb <= r)update(p, v);
	else
	{
		if(tg[p])push_down(p);
		int mid = (lb + rb) / 2;
		if (l <= mid)modify(l, r, p << 1, v);
		if (r >= mid + 1)modify(l, r, p << 1 | 1, v);
		push_up(p);
	}
}

long long querysum(int l, int r, int p)
{
	int lb = lt[p], rb = rt[p];
	if (l <= lb && rb <= r)return st[p];
	else
	{
		long long res = 0;
		push_down(p);
		int mid = (lb + rb) / 2;
		if (l <= mid)res += querysum(l, r, p << 1);
		if (r >= mid + 1)res += querysum(l, r, p << 1 | 1);
		return res;
	}
}

long long querymax(int l, int r, int p)
{
	int lb = lt[p], rb = rt[p];
	if (l <= lb && rb <= r)return maxt[p];
	else
	{
		long long res = -0x7fffffff;
		push_down(p);
		int mid = (lb + rb) / 2;
		if (l <= mid)res = max(res, querymax(l, r, p << 1));
		if (r >= mid + 1)res = max(res, querymax(l, r, p << 1 | 1));
		return res;
	}
}

long long querymin(int l, int r, int p)
{
	int lb = lt[p], rb = rt[p];
	if (l <= lb && rb <= r)return mint[p];
	else
	{
		long long res = 0x7fffffff;
		push_down(p);
		int mid = (lb + rb) / 2;
		if (l <= mid)res = min(res, querymin(l, r, p << 1));
		if (r >= mid +1)res = min(res, querymin(l, r, p << 1 | 1));
		return res;
	}
}
int main()
{
	scanf("%d%d", &n, &q);
	build(1, 1, n);
	while (q--)
	{
		scanf("%d", &o);
		switch (o)
		{
		case 1:scanf("%d%d%d", &l, &r, &k); modify(l, r, 1, k); break;//+k
		case 2:scanf("%d%d", &l, &r); printf("%lld\n", querysum(l, r, 1)); break;//sum
		case 3:scanf("%d%d", &l, &r); printf("%lld\n", querymax(l, r, 1) - querymin(l, r, 1)); break;//max-min
		}
	}
	return 0;
}
*/
/*///lutece sjjg H 2150
int n,m,l=1,r=1;
long a[100005]={0},q[100005],ans;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i)
    {
        scanf("%ld",&a[i]);
        a[i]+=a[i-1];
    }
    ans=a[1];
    for(int i=1;i<=n;++i)
    {
        if(l<=r&&i-q[l]>m)l++;
        if(ans<a[i]-a[q[l]])ans=a[i]-a[q[l]];
        while(l<=r&&a[q[r]]>=a[i])r--;
        r++;
        q[r]=i;
    }
    printf("%ld",ans);
	return 0;
}
*/
/*///lutece sjjg D 2146
int n, k, t ;
char c, a[1000005], s[1000005];
string aa;
int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	while (cin>>n>>k)
	{
		t = 0;
		for (int i = 1; i <= n; ++i)
		{
			cin >> aa;
			a[i] = aa[0];
		}
		if (k>0)
		{
			for (int i = 1; i <= n; ++i)
			{
				while (t&&a[i] > s[t - 1] && t + n - i >= k)--t;
				s[t++] = a[i];
			}
			while (t > k)t--;
			s[t] = 0;
			cout << s;
		}
		cout << endl;
	}
	return 0;
}
*/
/*///lutece sjjg I 2151
#include<iostream>
#include<set>
using namespace std;

int n, m;
int t, p, rk = 1;
struct P { long long first, second; }a[200000],tmp;
multiset <P> s;
multiset<P>::iterator i1, i2;

bool operator <(P u, P v) { return u.first == v.first ? u.second > v.second:u.first < v.first; }

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	cin >> n >> m;
	while (m--)
	{
		cin >> t >> p;
		tmp = a[t];
		a[t].first++;
		a[t].second += p;
		if (t == 1)
		{
			i1 = s.begin();
			while (s.size() && !(a[1] < (*i1)))
			{
				i2 = i1;
				++i1;
				s.erase(i2);
				--rk;
			}
		}
		else if (a[1] < a[t])
		{
			if (a[1] < tmp)
			{
				s.erase(s.find(tmp));
				--rk;
			}
			s.insert(a[t]);
			++rk;
		}
		cout << rk<<endl;
	}
}
*/
/*/// lutece sjjg C 2145
#include<set>
#include<cstdio>
#include <iostream>

using namespace std;

int n, l, r;
struct node{int l, r;}temp;
set <node>s;
set <node>::iterator it;

bool operator <(node a, node b) { return (a.r < b.l); }
int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }
void insert(node t)
{
	it = s.find(t);
	if (it == s.end())s.insert(t);
	else
	{
		temp = { min(it->l,t.l),max(it->r,t.r) };
		s.erase(it);
		insert(temp);
	}
}

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	cin >> n;
	while (n--)
	{
		cin >> l >> r;
		insert({ l,r });
		cout << s.size();
		if (n >= 1)cout << ' ';
	}
	return 0;
}
*/
/*dns1G
int n, a[2000];
deque<int>q;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	while (cin >> n && n != 0)
	{
		while (1)
		{
			cin >> a[1];
			if (a[1] == 0)
			{
				cout << endl;
				break;
			}
			else
			{
				for (int i = 2; i <= n; ++i)
					cin >> a[i];
				int flag = 1;
				q.clear();
				for (int i = 1; i <= n; ++i)
				{
					if (!q.empty()&&a[i] > q.back() && a[i] < q.front())flag = 0;
					while (!q.empty()&&a[i] > q.back())q.pop_back();
					q.push_back(a[i]);
				}
				if (flag)
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
			}
		}
	}
	return 0;
}
*/
/*dns1F
int n,r,c,w,h;

void p1(int colomn,int width,char c1,char c2)
{
	for(int i=1;i<=colomn;++i)
	{
		cout<<c1;
		for(int j=1;j<=width;++j)cout<<c2;
	}
	cout<<c1<<endl;
}

void solve(int row,int colomn,int width,int height)
{
	for(int i=1;i<=row;++i)
	{
		p1(colomn,width,'+','-');
		for(int j=1;j<=height;++j)p1(colomn,width,'|','*');
	}
	p1(colomn,width,'+','-');
}

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cout<<"Case #"<<i<<":\n";
		cin>>r>>c>>w>>h;
		solve(r,c,w,h);
	}
	return 0;
}
*/
/*dns1A
#include<string>
#include<algorithm>
int n,c=0;
string s;

int main()
{
	cin>>n;
	while(n--)
	{
		c++;
		cout<<"Case # "<<c<<":\n\n";
		cin>>s;
		sort(s.begin(),s.end());
		cout<<s<<endl<<endl;
		while(next_permutation(s.begin(),s.end()))cout<<s<<endl<<endl;
	}
	return 0;
}
*/
/*dns1I
int n,c=0;
long long t,s;

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	while(cin>>n&&n!=0)
	{
		s=0;
		c++;
		for(int i=1;i<=n;++i)
		{
			for(int j=1;j<=i;++j)
			{
				cin>>t;
				if(j==1||j==i||i==n)s+=t;
			}
		}
		cout<<"Case #"<<c<<':'<<s<<endl<<endl;
	}
}
*/
/*dns1H
int n;
long long s,t,ss,tt;

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	while(cin>>n&&n!=-1)
	{
		ss=0;tt=0;
		while(n--)
		{
			cin>>s>>t;
			ss+=s*(t-tt);
			tt=t;
		}
		cout<<ss<<" miles\n";
	}
}
*/
/*dns1B
#include<map>
#include<string>
int n,d,m,y,c=0;
map<int,int>a;
string s[13]={"Case #","Jan:","Feb:","Mar:","Apr:","May:","Jun:","Jul:","Aug:","Sep:","Oct:","Nov:","Dec:"};

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	while(cin>>n&&n!=0)
	{
		c++;
		cout<<s[0]<<c<<":\n";
		a.clear();
		while(n--)
		{
			cin>>d>>m>>y;
			a[m]++;
		}
		for(int i=1;i<=12;++i)
		{
			cout<<s[i];
			while(a[i]--)cout<<'*';
			cout<<endl;
		}
	}
	return 0;
}
*/
/*///lutece dp D 2176
int a[2000000],aa[2000000],g[2000000],l[2000000],r[2000000],n,ans=1;
const int inf=0x3f3f3f3f;

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		aa[n-i+1]=a[i];
		//l[i]=r[i]=1;
	}
	//for(int i=1;i<=n;++i)for(int j=1;j<i;++j)if(a[j]<a[i])l[i]=max(l[i],l[j]+1);
	//for(int i=n;i>=1;--i)for(int j=n;j>i;--j)if(a[j]<a[i])r[i]=max(r[i],r[j]+1);
	int ans1=0;
	for(int i=1;i<=n;++i)g[i]=inf;
	for(int i=1;i<=n;++i)
	{
		int k=lower_bound(g+1,g+1+n,a[i])-g;
		l[i]=k;
		g[k]=a[i];
		ans1=max(ans1,l[i]);
	}
	//cout<<ans1<<endl;
	int ans2=0;
	for(int i=1;i<=n;++i)g[i]=inf;
	for(int i=1;i<=n;++i)
	{
		int k=lower_bound(g+1,g+1+n,aa[i])-g;
		r[i]=k;
		g[k]=aa[i];
		ans2=max(ans1,r[i]);
	}
	//cout<<ans2<<endl;
	for(int i=1;i<=n;++i)
	{
		int temp=min(l[i],r[n-i+1]);
		temp=temp*2-1;
		if(ans<temp)ans=temp;
	}
	//for(int i=1;i<=n;++i)cout<<l[i]<<' ';
	//cout<<endl;
	//for(int i=1;i<=n;++i)cout<<r[i]<<' ';
	//cout<<endl;
	cout<<ans;
	return 0;
}
*/
/*///lutece dp A 2173
long long dp[18][(1 << 18) + 5],d[17][17],x[40],y[40],n,s,inf = 0xfffffffffffffff, ans = inf;
long long dis(long long x1, long long y1, long long x2, long long y2) { return (x1 > x2 ? x1 - x2 : x2 - x1) + (y1 > y2 ? y1 - y2 : y2 - y1); }
int main()
{
    cin >> n>>s;
    for (int i = 0; i < n; ++i) cin >> x[i] >> y[i],x[i+n]=x[i],y[i+n]=y[i];
	for (int i = 0; i < n; ++i)x[i] = x[s + i - 1], y[i] = y[s + i - 1];
	for (int i = 0; i < n; ++i)for (int j = 0; j < n; ++j)d[i][j] = dis(x[i], y[i], x[j], y[j]);
    for (int i = 0; i <= n; i++) for (int j = 0; j <= (1 << n); j++)dp[i][j] = inf;
    dp[0][1] = 0;
    for (int j = 1; j < (1 << n); j++)for (int i = 1; i < n; i++)if (!(j & (1 << (i))))for (int k = 0; k < n; k++)dp[i][j + (1 << (i))] = min(dp[i][j + (1 << (i))], dp[k][j] + d[i][k]);
    for (int i = 1; i < n; i++)ans = min(ans, dp[i][(1 << n) - 1]);
    cout << ans << endl;
    return 0;
}
*/
/*///lutece dp B 2174
const int maxn=555;
    ll n,m,x[maxn][maxn],y[maxn][maxn],dp[maxn][maxn];
    while(cin>>n>>m&&n+m!=0)
    {
         for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)cin>>x[i][j],x[i][j]+=x[i][j-1];
        for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)cin>>y[i][j],y[i][j]+=y[i-1][j];
        for(int i=1;i<=n;++i)for(int j=1;j<=m;++j){dp[i][j]=max(dp[i][j-1]+y[i][j],dp[i-1][j]+x[i][j]);}
        cout<<dp[n][m]<<endl;
    }
	*/
/*///lutece dp G 2179
#include <iostream>
#include <string>
using namespace std;

int n, k, dp[2][30000000], pre, now;
long long ans;
string a;

int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);
    cin >> n >> k >> a;
    for (int i = 0; i < n; i++)
    {
        now = pre ^ 1;
        int tt = a[i] - '0';
        dp[now][tt % k]++;
        for (int j = 0; j < k; j++)
        {
            dp[now][(j * 10 + tt) % k] += dp[pre][j];
            dp[pre][j] = 0;
        }
        pre = now;
        ans += dp[pre][0];
    }
    cout << ans;
    return 0;
}
*/
/*lutece ss D 2208
#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e6;
char t[maxn], s[maxn];
int idx[maxn], ans[maxn];
int n, c, i;

struct node
{
    int fail;
    int nxt[26];
} a[maxn];

void ins()
{
    int p = 0, l = strlen(s + 1);
    for (int i = 1; i <= l; ++i)
    {
        int id = s[i] - 'a';
        if (a[p].nxt[id] == 0)
            a[p].nxt[id] = ++c;
        p = a[p].nxt[id];
    }
    idx[i] = p;
}

void get_fail()
{
    queue<int> q;
    for (int i = 0; i < 26; ++i)
    {
        if (a[0].nxt[i])
        {
            a[a[0].nxt[i]].fail = 0;
            q.push(a[0].nxt[i]);
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < 26; ++i)
        {
            if (a[u].nxt[i])
            {
                a[a[u].nxt[i]].fail = a[a[u].fail].nxt[i];
                q.push(a[u].nxt[i]);
            }
            else
            {
                a[u].nxt[i] = a[a[u].fail].nxt[i];
            }
        }
    }
}

void que()
{
    int l = strlen(t + 1), p = 0;
    for (int i = 1; i <= l; ++i)
    {
        int id = t[i] - 'a';
        //while (!a[p].nxt[id])p = a[p].fail;
        p = a[p].nxt[id];
        for (int j = p; j; j = a[j].fail)
            ans[j]++;
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    scanf("%s%d", t + 1, &n);
    for (i = 1; i <= n; ++i)
    {
        scanf("%s", s + 1);
        ins();
    }
    get_fail();
    que();
    for (i = 1; i <= n; ++i)
        cout << ans[idx[i]] << endl;
    return 0;
}
 */
/*///lutece ss B 2209
#include<bits/stdc++.h>
using namespace std;

const int maxn=2e6;
char a[maxn];
int f[maxn],i,j;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    scanf("%s",a+1);
    int l=strlen(a+1);
    for(i=2;i<=l;++i)
    {
        while(j&&a[i]!=a[j+1])j=f[i];
        if(a[i]==a[j+1])++j;
        f[i]=j;
    }
    i=l;
    while(f[i]!=0)
    {
        cout<<l-f[i]<<' ';
        i=f[i];
    }
    cout<<l;
    return 0;
}
*/
/*lutece ss C 2210
#include <bits/stdc++.h>
using namespace std;

const int N=1e7;
char t[N],p[N];
int f[N],j,s;

int main()
{
    scanf("%s%s",t+1,p+1);
    int n=strlen(t+1),m=strlen(p+1);
    for(int i=2;i<=m;++i)
    {
        //int j=f[i-1];
        while(j&&p[i]!=p[j+1])j=f[j];
        if(p[i]==p[j+1])++j;
        f[i]=j;
    }
    j=0;
    for(int i=1;i<=n;++i)
    {
        //int j=f[i-1];
        while(j&&t[i]!=p[j+1])j=f[j];
        if(t[i]==p[j+1])++j;
        if(j==m)
        {
            printf("%d\n",i-m+1);
            j=f[j];
            //s++;
        }
    }
    //for(int i=1;i<=m;++i)printf("%d ",f[i]);
    return 0;
}
*/
/*///lutece ss A 2211
#include<bits/stdc++.h>
using namespace std;

const int maxn=2e6;
int n,c,cc;
string s;

struct node
{
    int nxt[26],num;
}t[maxn],tt[maxn];

void ins()
{
    int p=0,l=s.size();
    for(int i=0;i<l;++i)
    {
        int id=s[i]-'a';
        if(t[p].nxt[id]==0)t[p].nxt[id]=++c;
        p=t[p].nxt[id];
        if(i==l-1)cout<<t[p].num<<' ';
        t[p].num++;
    }
    reverse(s.begin(),s.end());
    p=0;
    for(int i=0;i<l;++i)
    {
        int id=s[i]-'a';
        if(tt[p].nxt[id]==0)tt[p].nxt[id]=++cc;
        p=tt[p].nxt[id];
        if(i==l-1)cout<<tt[p].num<<endl;
        tt[p].num++;
    }   
}

int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>s;
        ins();
    }
    return 0;
}
*/
/*///lutece dp F 2178
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string temp;
int t, n;
ll f[1 << 17], s[1 << 17];
int main()
{
	
	cin >> t;
	for (int Case = 1; Case <= t; ++Case)
	{
		memset(s, 0, sizeof(s));
		memset(f, 0, sizeof(f));
		cin >> n >> temp;
        reverse(temp.begin(),temp.end());
		s[0] = stoll(temp, 0, 2);
		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
            reverse(temp.begin(),temp.end());
			s[1 << i] = s[0];
			s[1<<i] |= stoll(temp, 0, 2);
		}
		
		for (int i = 0; i < (1 << n); ++i)
		{
			s[i] |= s[0];
			for(int j=0;j<n;++j)
				if(i&(1<<j))s[i] |= s[1 << j];
		}
		f[0] = 1;
		for (int i = 0; i < (1 << n); ++i)
		{
			if (!f[i])continue;
			for (int j = 0; j < n; ++j)
			{
				if (s[i] & (1ll << j) && (i & (1ll << j)) == 0)
					f[i | (1 << j)] += f[i];
			}
		}
		cout << "Case " << Case << ": " << f[(1 << n) - 1];
		if (Case < t)putchar('\n');
	}
	return 0;
}
*/
/*///lutece dp E 2177
int t, l, k, ans, n, d[1005], dp[1005][26];
string s;
set<int>a[1005];

int main()
{
	cin >> t;
	while (t--)
	{
		ans = 1001;
		memset(dp, 0x3f3f3f3f, sizeof(dp));
		memset(d, 0, sizeof(d));
		for (int i = 0; i <= 1001; ++i)a[i].clear();
		cin >> k >> s;
		l = s.size();
		n = l / k;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < k; ++j)a[i].insert(s[i*k + j]-'a');
			d[i] = a[i].size();
		}
		for (int temp : a[0])dp[0][temp] = d[0];
		for (int i = 1; i < n; ++i)
			for (int j : a[i ])
				for (int l : a[i-1])
				{
					if (a[i].find(l) != a[i].end() && (l != j || d[i] == 1))
					{
						dp[i][j] = min(dp[i][j], dp[i - 1][l] + d[i] - 1);
					}
					else dp[i][j] = min(dp[i][j], dp[i - 1][l] + d[i]);

				}
		for (int i = 0; i <26; ++i)ans = min(ans, dp[n - 1][i]);
		cout << ans << endl;
	}
	return 0;
}
*/
/*dns2C
int n,a;
char s[2];
int main()
{
    while(cin>>n>>s)
    {
        if(n==1)a=1;
        else switch(s[0])
        {
            case 'N':a=n<3?1:2;break;
            case 'K':a=4;break;
            default:a=n;
        }
        cout<<a<<endl;
    }
    return 0;
}
*/
/*dns2D
int m,n,s,x,y;
int main()
{
    while(cin>>m>>n)
    {
        map<int,map<int,char> >a;
        for(int i=0;i<=101;++i)for(int j=0;j<=101;++j)a[i][j]='.';
        for(int i=1;i<=n;++i)
        {
            cin>>s>>y>>x;
            x=m-x-1;
            if(s==0)
            {
                a[x][y]='o';
                a[x][y-1]=a[x][y+1]='_';
            }
            else
            {
                a[x][y]='|';
                a[x][y-1]=a[x][y+1]='_';
                for(int j=1;j<=s;++j)
                {
                    a[x-j][y]='|';
                    a[x-j][y-1]='/';
                    a[x-j][y+1]='\\';
                }
                a[x-s-1][y]='^';
            }
        }
        for(int i=1;i<=m+2;++i)putchar('*');
        putchar('\n');
        for(int i=0;i<m;++i)
        {
            putchar('*');
            for(int j=0;j<m;++j)putchar(a[i][j]);
            putchar('*');
            putchar('\n');
        }
        for(int i=1;i<=m+2;++i)putchar('*');
        putchar('\n');
    }
    return 0;
}
*/
/*dns2G
int n,a[2333333],b[2333333],ans,temp;
int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);
    while(cin>>n)
    {
        ans=0;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        for(int i=1;i<=n;++i)
        {
            if(a[i]!=i)
            {
                temp=a[i];
                swap(a[i],a[b[i]]);
                b[temp]=b[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
/*dns2A
int n,a[1005],b[1005],ans,temp;
int main()
{
    while(cin>>n)
    {
        a[0]=-233;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
            b[i]=a[i]-a[i-1];
        }
        while(b[n]==b[n-1])n--;
        if(n!=1)
        cout<<n-1<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
*/
/*///lutece 145
const int maxn=1000005;
int p[1005],n,m,e,x,y;
struct node{int u,v,t;}a[maxn];
bool cmp(const node i,const node j){return i.t<j.t;}
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
void kruskal()
{
    int c=0,sum=0;
    for(int i=0;i<=n;++i)p[i]=i;
    sort(a,a+m,cmp);
    for(int i=0;i<m;++i)
    {
        e=a[i].t;
        x=find(a[i].u);
        y=find(a[i].v);
        if(x!=y)
        {
            sum+=e;
            p[y]=x;
            c++;
            if(c>=n-1)break;
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        for(int i=0;i<m;++i)cin>>a[i].u>>a[i].v>>a[i].t;
        kruskal();
    }
    return 0;    
}
*/
/*///lutece tl G 2220
struct edge{int u, v, w;}g[50005];
int n, m, k, u, v, w, c, t, f[1005];
long long ans;
bool cmp(edge a, edge b){return a.w < b.w;}
int find(int x){return x == f[x] ? x : f[x] = find(f[x]);}
int main()
{
	cin >> n >> m >>k;
    c=n;
	for (int i = 1; i <= m; ++i)cin >> g[i].u >> g[i].v >> g[i].w;
    for(int i=1;i<=n;++i)f[i]=i;
	sort(g + 1, g + 1 + m, cmp);
	for (int i = 1; i <= m; ++i)
	{
		int x = find(g[i].u), y = find(g[i].v);
		if (x != y)
		{
			ans += g[i].w;
			f[y] = x;
			c--;
			if (c == k )break;
		}
	}
	cout << ans;
	return 0;
}
*/
/*lutece tl H 2221
#define MAXN 10005
#define MAXE 200005
using namespace std;
int n, m, S, T, hd, tl, que[MAXN], dep[MAXN];
int tot = -1, lnk[MAXN], nxt[MAXE], son[MAXE], C[MAXE], F[MAXE];
int read()
{
    int ret = 0;
    char ch = getchar();
    bool f = 1;
    for (; !isdigit(ch); ch = getchar())
        f ^= !(ch ^ '-');
    for (; isdigit(ch); ch = getchar())
        ret = (ret << 3) + (ret << 1) + ch - 48;
    return f ? ret : -ret;
}
void add(int x, int y, int c, int f)
{
    son[++tot] = y;
    nxt[tot] = lnk[x];
    lnk[x] = tot;
    C[tot] = c;
    F[tot] = f;
}
bool BFS()
{
    hd = 0;
    que[tl = 1] = S;
    memset(dep, 0, sizeof(dep));
    dep[S] = 1; //更新点深度，可以说是刷层次
    while (hd != tl)
    {
        int x = que[++hd];
        for (int j = lnk[x]; j != -1; j = nxt[j])
            if (!dep[son[j]] && C[j] > F[j])
                dep[son[j]] = dep[x] + 1, que[++tl] = son[j];
    }
    return dep[T];
}
int DFS(int x, int flow)
{
    if (x == T)
        return flow; //到T点就停
    int now = 0;
    for (int j = lnk[x]; j != -1; j = nxt[j])
        if (dep[x] + 1 == dep[son[j]] && C[j] > F[j])
        {
            int y = DFS(son[j], min(flow, C[j] - F[j])); //选出最小流量
            if (y > 0)
            {
                F[j] += y;
                F[j ^ 1] -= y;
                now += y;
                flow -= y;
                if (!flow)
                    return now;
            } //进行更新
        }
    return now;
}
int Dinic()
{
    int ans = 0;
    while (BFS())
        while (int t = DFS(S, 1e9))
            ans += t;
    return ans;
}
int main()
{
    memset(lnk, -1, sizeof(lnk));
    n = read(), m = read();
    S = 1, T = n;
    for (int i = 1; i <= m; i++)
    {
        int x = read(), y = read(), z = read();
        add(x, y, z, 0);
        add(y, x, z, z);
    }
    printf("%d\n", Dinic());
    return 0;
}
*/
/*lutece tl I 2222
inline int read(){
	int x=0,f=1;char ch=getchar();
	while (ch<'0' || ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0' && ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
const int
	Point=1005,
	Edges=100005;
int n,m,start,endd,kth;
int dist[Point],times[Point];
bool vis[Point];
struct Edge{
	int to,next,val;
}E[Edges],Eopp[Edges];      //Eopp means Eopposite
int head[Point],head_opp[Point];
struct A_Star_node{
	int p,g,h;
	bool operator < (A_Star_node x)const{
		return x.g+x.h<g+h;
	}
};         //means point  and a_Star:f(x)=g(x)+h(x);
priority_queue<A_Star_node>Q;
inline void add(int Ecnt,int u,int v,int w){
	E[Ecnt].next=head[u];
	E[Ecnt].to=v;
	E[Ecnt].val=w;
	head[u]=Ecnt;
}
inline void add_opposite(int EoppCnt,int u,int v,int w){
	Eopp[EoppCnt].next=head_opp[u];
	Eopp[EoppCnt].to=v;
	Eopp[EoppCnt].val=w;
	head_opp[u]=EoppCnt;
}
void dijkstra(int s,int e){
	memset(vis,0,sizeof(vis));
	memset(dist,127,sizeof(dist));
	int mini;	dist[e]=0;
	for (int i=1;i<=n;i++){
		mini=0;
		for (int j=1;j<=n;j++)
			if (!vis[j] && dist[mini]>dist[j])	mini=j;
		vis[mini]=1;
		for (int x=head_opp[mini];x;x=Eopp[x].next)
			dist[Eopp[x].to]=min(dist[Eopp[x].to],dist[mini]+Eopp[x].val);
	}
}
int A_Star(int s,int e){
	A_Star_node t1,tmp;
	memset(times,0,sizeof(times));
	t1.g=t1.h=0; t1.p=s;
	Q.push(t1);
	while (!Q.empty()){
		t1=Q.top();	Q.pop();
		times[t1.p]++;
		if (times[t1.p]==kth && t1.p==e) return t1.h+t1.g;
		if (times[t1.p]>kth) continue;
		for (int i=head[t1.p];i;i=E[i].next){
			tmp.p=E[i].to;
			tmp.g=dist[E[i].to];
			tmp.h=E[i].val+t1.h;
			Q.push(tmp);
		}
	}
	return -1;
}
int main(){
	n=read(),m=read(),kth=read(),start=read(),endd=read();
	int x,y,z;
	memset(head,0,sizeof(head));
	memset(head_opp,0,sizeof(head_opp));
	for (int i=1;i<=m;i++){
		x=read(),y=read(),z=read();
		add(i,x,y,z);
		add_opposite(i,y,x,z);
	}
	dijkstra(start,endd);
	if (start==endd) kth++;
	int ans=A_Star(start,endd);
	if (ans==-1) puts("No");
		else	printf("%d\n",ans);
	return 0;
}
*/
/*///lutece ss R 2240
#include <bits/stdc++.h>
using namespace std;

const int maxn=3e7;
char t[maxn],s[maxn];
int n,a[maxn],ans;
void init()
{
    s[0]=s[1]='#';
    for(int i=0;i<n;++i)
    {
        s[2*i+2]=t[i];
        s[2*i+3]='#';
    }
    n=2*n+2;
}
void manacher()
{
    int id=0,mx=0;
    for(int i=1;i<n;++i)
    {
        if(mx>1)a[i]=min(a[2*id-i],mx-i);
        else a[i]=1;
        for(;s[i+a[i]]==s[i-a[i]];a[i]++);
        if(a[i]+i>mx)
        {
            mx=a[i]+i;
            id=i;
        }
    }
}
int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(0);    
    cin>>n;
    cin>>t;
    init();
    manacher();
    for(int i=1;i<=n;++i)
    {
        if(a[i]%2!=0)ans=max(ans,a[i]);
    }
    cout<<ans-1;
    return 0;
}
*/
/*nc 49-A
#include <bits/stdc++.h>
using namespace std;
long long power(long long x, long long y, long long mod)
{
  	long long r = 1;
 	while ( y ) 
    {
      	if ( y & 1 ) r = r * x % mod;
      	x = x * x % mod;
      	y >>= 1;
    }
  	return r;
}
struct node
{
    int v,e;
}a[300000];
bool cmp(node a,node b)
{
    return (double)a.e/(double)a.v>(double)b.e/(double)b.v;
}
int n;
const int m=1e9+7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i].v>>a[i].e;
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;++i)
    {
        int e=a[i].e,v=a[i].v;
        if(e%v!=0)cout<<(e*power(v,m-2,m)%m+m)%m;
        else cout<<e/v;
        if(i<n)cout<<endl;
    }
    return 0;
}
*/
/*nc 984A
#include<bits/stdc++.h>
using namespace std;
long long a[999999];
long long ans=0;
stack<int>s;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);    
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	cin>>a[i];
	for(int i=1;i<=n;++i)
	{
		while(!s.empty()&&s.top()<=a[i])s.pop();
		s.push(a[i]);
		ans+=s.size()-1;
	}
	cout<<ans;
	return 0;
}
*/
/*nc 984D
int n,a[5555],dp[5555],l;
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)cin>>a[i];
	dp[++l]=a[1];
	for(int i=2;i<=n;++i)
	{
		if(a[i]>dp[l])
			dp[++l]=a[i];
		else
			*lower_bound(dp+1,dp+1+l,a[i])=a[i];
	}
	cout<<l;
	return 0;
}
*/
/*nc 984E
int c,b,a[50],s,dp[55005];
int main()
{
    cin>>c>>b;
    for(int i=1;i<=b;++i)cin>>a[i];
    for(int i=1;i<=b;++i)for(int j=c;j>=a[i];--j)
    {
        dp[j]=max(dp[j-a[i]]+a[i],dp[j]);
        s=max(s,dp[j]);
    }
    cout<<s;
    return 0;
}
*/
/*nc 984H
	long long n,s=0;
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)n/=2;
		else n=3*n+1;
		s++;
	}
	cout<<s;
*/
/*nc 984I
struct node{long long d,t;}a[100005];
bool cmp(node a,node b)return a.t*b.d<b.t*a.d;
int n;
long long s,t;
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i){cin>>a[i].t>>a[i].d;a[i].t*=2;}
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;++i){s+=a[i].d*t;t+=a[i].t;}
    cout<<s;
    return 0;
}
*/
/*nc 984K
int r,c,a[105][105];
int main()
{
    cin>>r>>c;
    for(int i=1;i<=r;++i)for(int j=1;j<=c;++j){cin>>a[i][j];if(j<i||j-i>c-r)a[i][j]=0;}
    for(int j=1;j<=c;++j)for(int i=1;i<=r;++i)if(j>=i)a[i][j]+=max(max(a[i-1][j-1],a[i][j-1]),a[i+1][j-1]);
    cout<<a[r][c];
    return 0;
}
*/
/*nc 984L
int n, k, d[233333], ans;
queue<int> q;
int main()
{
	cin >> n >> k;
	q.push(n);
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		if (t == k)break;
		else
		{
			if (t && !d[t - 1])q.push(t - 1),d[t - 1] = d[t] + 1; 
			if (t <= k && !d[t + 1])q.push(t + 1), d[t + 1] = d[t] + 1;
			if (t && t <= k && !d[2 * t])q.push(2 * t),d[2 * t] = d[t] + 1;
		}
	}
	cout << d[k];
	return 0;
}
*/
/*nc 949A
#include<iostream>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    if(n!=1)cout<<"Shi";
    else cout<<"Yang";
    return 0;
}
*/
/*nc 949B
#include <bits/stdc++.h>
using namespace std;
int a[1001][1001],b[1001];
const int m=1e9+7;
int main()
{
    int n,t,x,y;
	cin>>n>>t;
	for(int i=1;i<=n;++i)
	{
		long long s=0;
		a[i][1]=a[i][i]=i;
        s+=i;
		if(i>1)s+=i;
		for(int j=2;j<i;++j)s+=(a[i][j]=(a[i-1][j]%m+a[i-1][j-1]%m))%m;
		b[i]=(b[i-1]+s)%m;
	}
	while(t--)
	{
		cin>>x>>y;
		cout<<(b[y]+m-b[x-1])%m<<endl;;
	}
	return 0;
}
*/
/*nc 949C
#include<bits/stdc++.h>
using namespace std;
int n,m,h,t,a[1005];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)cin>>a[i];
    while(m--)
    {
        int s=0,f=0;
        cin>>t;
        for(int i=1;i<=n;++i)
        {
            if(a[i]>t&&f==0)f=1,s++;
            if(a[i]<=t&&f==1)f=0;
        }
        cout<<s<<endl;
    }
    return 0;
}
*/
/*nc 949E
#include<bits/stdc++.h>
using namespace std;
int n,a[9][9];set<int>s;
void m(int x,int y,int sum)
{
    if(x==n&&y==n)s.insert(sum);
    if(x+y>=2*n)return;
    m(x+1,y,sum+a[x][y]);
    m(x,y+1,sum+a[x][y]);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)for(int j=1;j<=n;++j)cin>>a[i][j];
    m(1,1,a[1][1]);
    cout<<s.size();
    return 0;
}
*/
/*nc 949G
#include <bits/stdc++.h>
using namespace std;
int main()
{
    const double p=acos(-1.0);
    double n;
    cin>>n;
    printf("%.3lf",n*n/2.0/p);
    return 0;
}
*/
/*nc 1086I
#include<bits/stdc++.h>
using namespace std;
long long n,c,a[10],dp[333]={1};
int main()
{
    cin>>n>>c;
    for(int i=0;i<c;i++){cin>>a[i];}
    for(int i=0;i<c;i++)for(int j=a[i];j<=n;j++)dp[j]+=dp[j-a[i]];
    cout<<dp[n];
    return 0;
}
*/
/*leetcode 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size();
        vector<int> v;
        //for(int i=0;i<l;i++){for(int j=i+1;j<l;j++){if(nums[i]+nums[j]==target){v.push_back(i);v.push_back(j);break;}}}
        map<int,int>m;
        for(int i=0;i<l;i++)m[nums[i]]=i;
        for(int i=0;i<l;i++){int t=m[target-nums[i]];if(t&&t>i){v.push_back(i);v.push_back(t);break;}}
        return v;
    }
};
*/