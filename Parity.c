#include<stdio.h>
int main(){
	int i,len,s_data[10],r_data[10],s_f=0,r_f=0;
	printf("Enter the length of the dataword");
	scanf("%d",&len);
	printf("Enter the sender side dataword\n");
	for(i=0;i<len;i++){
		scanf("%d",&s_data[i]);
	}
	for(i=0;i<len;i++){
		if(s_data[i]==1){
			s_f=s_f+1;
		}
		else{
			
		}
	}
	printf("Enter the receiver side dataword");
	for(i=0;i<len;i++){
		scanf("%d",&r_data[i]);
	}
	for(i=0;i<len;i++){
		if(r_data[i]==1){
			r_f=r_f+1;
		}
		else{
			
		}
	}
	if((s_f%2==0&&r_f%2==0) || (s_f%2!=0 && r_f%2!=0)){
		printf("No error detected");
	}
	else{
		printf("Error detected");
	}
	return 0;
}
