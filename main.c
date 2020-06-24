#include<stdio.h>
#include<math.h>

 int main(){
 	float A[4][5],pivot,sauve; 
 	int N=4,i,l,k,m; 
 	//saisie de la matrice
 	for(i=0;i<N-1;i++){
 		for(l=0;l<N;l++){
 		printf("A(%d%d)=?\n",i,l);
 		scanf("%f",&A[i][l]); } 
	 }
 	//Diagonalizacao
 	for(i=0;i<N-1;i++){
 	//normalization	
 	pivot=A[i][i];
 	
	 for(l=0;l<N;l++){A[i][l]=A[i][l]/pivot; }
 	
	 for(k=0;k<N-1;k++){ sauve=A[k][i];
	 		if(k!=i){for(m=0;m<=N-1;m++){A[k][m]=A[k][m]-sauve*A[i][m]; } 
			 } }
 	}
 	 printf("************** AFFICHAGE *************************\n");
 	 for(i=0;i<N-1;i++){
 		for(l=0;l<N;l++){
 		printf("%f\t",A[i][l]);}
		printf("\n");}
		  
  return 0;	
 }


