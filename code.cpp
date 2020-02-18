#include<iostream>
using namespace std;
#define  N 2
void mul(int a[N][N],int b[N][N],int mull[N][N])
{
  int i,j,k;
  for ( i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
    mull[i][j]=0;
    for (k= 0; k < N; k++) {
       mull[i][j]+=a[i][k]*b[k][j];
    }
    }
  }
}

int  main() {
  int i,j,k;
  int a[N][N];
  int b[N][N];
  int mull[N][N];
cout<<"Enter matrix 1 elements :";
	for( i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter matrix 2 elements :";
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			cin>>b[i][j];
		}
	}


mul(a,b,mull);
std::cout << "Result" << '\n';
for (size_t i = 0; i < N; i++) {
  for (size_t j = 0; j < N; j++) {
    std::cout << mull[i][j] << '\n';
  }
}
return 0;
}
