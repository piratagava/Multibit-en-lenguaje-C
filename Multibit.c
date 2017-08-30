#include<stdio.h>
#include<stdlib.h>
 int main ()
{
     int bits []={0,1,1,1,0,0,1,0,1};
     int i,a,posicion,otro;    
     for(i=0; i<=8; i++)
     {    
      printf(" %d \t", bits[i]);
     }     
      printf(" \n");	    
    for(i=0; i<=8; i++)
     {
       printf("La posicion es %d", i);
       printf(" :%d \n", bits[i]);
     } 	
	 	
	  printf("Coloca La posicion a cambiar: \n");
      scanf("%d",&posicion);
	  //printf("Coloca La posicion a cambiar: \n");
      //scanf("%d",&otro);	
	   for(a=0;a<=8;a++){
		int bits[]={0,1,1,1,0,0,1,0,1};				   
		if(posicion==a){
			if(bits[a]==1){
				bits[a]=0;						
               for(a=0; a<=posicion; a++)
                 {
                   printf("La posicion es %d", a);
                   printf(" :%d \n", bits[a]);
                 }			 	
			}         
		}
		if(posicion==a){	 	
	     if(bits[a]==0){
			bits[a]=1;
			for(a=0; a<=8; a++){
                   printf("La posicion es %d", a);
                   printf(" :%d \n", bits[a]);
                 }
		}	
	 } 
		
  }
    return 0;
}
