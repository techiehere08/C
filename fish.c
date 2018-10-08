#include<stdio.h>
int cal(int t,int s,int n,int n1,int n2,int n3){
	char arr[s][t],head,tail,body;
	 int i,j,k=0;
   
    k=n%10;
    k=k+48;
    n=n/10;
    j=n%10;
    j=j+48;
    n=n/10;
    i=n%10;
    i=i+48;
 head=(char)i;
 body=(char)j;
 tail=(char)k;

for(i=0;i<s;i++){
    for(j=0;j<t;j++)
    arr[i][j]=' ';
  }
  for(i=s/2;i<s;i++){
    for(j=i-s/2;j<n1;j++)
    {
      arr[i][j]=head;

  }
}
  k=0;
  for(i=s/2;i>-1;i--){
    for(j=k;j<n1;j++)
    
    {
      
      arr[i][j]=head;
  }
  k++;
}
  
//body
k=n1+n2-1;
  for(i=s/2;i<s;i++){
    for(j=k;j>=n1;j--)
    {
      arr[i][j]=body;
  }
  k--;
}
k=n1+n2-1;
  for(i=s/2;i>-1;i--){
    for(j=k;j>=n1;j--)
    
    {
      
      arr[i][j]=body;
  }
  k--;
}

 //tail
k=n1+n2;
  for(i=s/2;i<s;i++){
    for(j=k;j<n2+n1+n3;j++)
    {
      arr[i][j]=tail;
  }
k++;
}

k=n2+n1;
  for(i=s/2;i>-1;i--){
    for(j=k;j<n1+n2+n3;j++)
    {
     arr[i][j]=tail;
  }
  k++ ;
}
for(i=0;i<s;i++){
    for(j=0;j<t;j++)
    printf("%c",arr[i][j] );
  printf("\n");
  }

    return 0;
}
int main()
{
    int n,j,n1,n2,n3,t,s;
    scanf("%d",&n);
   	j=n;
    n3=n%10;
   	n=n/10;
   	n2=n%10;
   	n=n/10;
   	n1=n%10;
	 
	if(n1>n2 && n1>n3)
		s=n1;
	else if(n2>n1&&n2>n3)
		s=n2;
	else 
		s=n3;

   	n1=n1/2+1;
   	n2=n2/2+1;
   	n3=n3/2+1;	
	t=n1+n2+n3;
	cal(t,s,j,n1,n2,n3);

    return 0;
}
