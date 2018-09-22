#include<stdio.h>
int year_no(int y,int m)
{
    int r1,r2,s,d,c=0,year=2004,i;
    int a[11]={31,31,30,31,30,31,31,30,31,30,31};
    r1=y%100;
    r2=r1%7;
    while(year<y)
    {
     c++;
     year+=4;
    }
    s=(c+r2)%7;
    for(i=0;i<m-2;i++)
    {
        s=s+a[i];
    }
    if(y%4==0||y%400==0)
      s+=29;
    else
      s+=28;
    d=s%7;
    if(d==0)
     return 7;
    else
     return d;
    
}
int month(int m,int y)
{
    if(m==1||m==3||m==7||m==8||m==10||m==12||m==5)
    return 31;
    else if(m==4||m==6||m==9||m==11)
    return 30;
    else
    {
        if(y%4==0||y%400==0)
        {
            return 28;
        }
        else
        return 29;
    }
}
void display(int space,int m)
{
  int i,c;
  printf("mon  tue  wen  thu  fri  sat  sun\n");
  for(i=1;i<space;i++)
    printf("     ");
  c=space-1;
  for(i=1;i<=m;i++)
  {
      if(c%7==0)
      {
          printf("\n");
          if(i<10)
          printf("0%d   ",i);
          else
          printf("%d   ",i);
      }
      else
      {
        if(i<10)
          printf("0%d   ",i);
        else
          printf("%d   ",i);
      }  
    c++;    
  } 
}
int main() {#include<stdio.h>
int year_no(int y,int m)
{
    int r1,r2,s,d,c=0,year=2004,i;
    int a[]={31,0,31,30,31,30,31,31,30,31,30,31};
    r1=y%100;
    r2=r1%7;
    while(year<y)
    {
     c++;
     year+=4;
    }
    s=(c+r2)%7;
    for(i=0;i<m-1;i++)
    {
            if(y%4==0&&i==1)
               s+=29;
            else if(i==1)
               s+=28;
        s=s+a[i];
    }

    d=s%7;
    if(y%4==0&&m==2)
       if(d==0)
         d=7;
        else
         d--;
    if(d==0)
     return 0;
    else
     return d;
    
}
int month(int m,int y)
{
    if(m==1||m==3||m==7||m==8||m==10||m==12||m==5)
    return 31;
    else if(m==4||m==6||m==9||m==11)
    return 30;
    else
    {
        if(y%4==0||y%400==0)
        {
            return 29;
        }
        else
        return 28;
    }
}
void display(int space,int m)
{
  int i,c;
  printf("mon  tue  wen  thu  fri  sat  sun\n");
  for(i=1;i<space;i++)
    printf("     ");
  c=space-1;
  for(i=1;i<=m;i++)
  {
      if(c%7==0)
      {
          printf("\n");
          if(i<10)
          printf("0%d   ",i);
          else
          printf("%d   ",i);
      }
      else
      {
        if(i<10)
          printf("0%d   ",i);
        else
          printf("%d   ",i);
      }  
    c++;    
  } 
}
int main() {
   int m,n,y,d,r,s,t,i,j,k,l;
  printf("enter month and year\n");
   scanf("%d%d",&m,&y);
   d=year_no(y,m);
   r=month(m,y);
  display(d,r);
}
