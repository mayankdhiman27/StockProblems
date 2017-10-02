#include<stdio.h>

//Driver Code
void main(){
int arr[]={100,180,260,310,40,535,695};
int localMinima[5]={0};
int localMaxima[5]={0};
int j=0,k=0;

//Loops to find local minima and local maxima
for(int i=0;i<(sizeof(arr)/sizeof(int))-1;){
if(arr[i]<arr[i+1]){
localMinima[j++]=arr[i];
for(int l=i+1;l<(sizeof(arr)/sizeof(int))-1;l++){
if(arr[l]>arr[l+1]){
localMaxima[k++]=arr[l];
i=l+1;
}
}
if(localMaxima[k]==0){
localMaxima[k]=arr[sizeof(arr)/sizeof(int)-1];
}
}
else
i++;
}

for(int m=0;m<=k;m++){
printf("%d ",localMinima[m]);
}
printf("\n");
for(int n=0;n<=k;n++){
printf("%d ",localMaxima[n]);
}
printf("\n");
}
