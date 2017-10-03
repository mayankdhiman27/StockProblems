#include<stdio.h>

//Stack
int stack[100];
int top=-1;

//Push operation
void push(int data){
if(top==100){
printf("Stack Overflow\n");
}
else{
stack[++top]=data;
}
}

//Pop Operation
void pop(){
top--;
}

//Top operation
int topStack(){
return stack[top];
}

//Is Empty
int isEmpty(){
return top==-1;
}

//Size
int size(){
return top+1;
}





//Driver Code
void main(){
int arr[]={100,80,60,70,60,75,85};
int l=sizeof(arr)/sizeof(int);
int span[sizeof(arr)/sizeof(int)]={0};
push(0);
span[0]=1;
for(int i=1;i<l;i++){
if(arr[i]>=arr[topStack()]){
while((arr[i]>=arr[topStack()]) ){
pop();
}
span[i]=i-topStack();
push(i);
}
else{
if(arr[topStack()]>arr[i]){
span[i]=i-topStack();
push(i);
}
}
}

for(int j=0;j<l;j++){
printf("%d ",span[j]);
}
printf("\n");

}







