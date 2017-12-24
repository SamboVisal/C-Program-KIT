 #include<stdio.h>
/*
int main(){
    int arr[3]={10,20,30};
    int x=0;
    x = ++arr[++x] + ++x + arr[--x];
    printf("%d ",x);
    return 0;
}*/
 #include<stdio.h>
int main(){
    int a[]={10,20,30,40};
    int i=3,x;
    x=1*a[--i]+2*a[--i]+3*a[--i];
    printf("%d",x);
    return 0;
}
