#include <iostream>
using namespace std;

int main(){

int a=75;
int b[2]={95, 64};
int c[3]={17 ,47 ,82};
int d[4]={18 ,35 ,87 ,10};
int e[5]={20 ,04 ,82 ,47 ,65};
int f[6]={19 ,01 ,23 ,75 ,03 ,34};
int g[7]={88 ,02 ,77 ,73, 07, 63, 67};
int h[8]={99 ,65 ,04 ,28 ,06 ,16 ,70 ,92};
int i[9]={41 ,41 ,26 ,56 ,83 ,40 ,80 ,70 ,33};
int j[10]={41 ,48 ,72 ,33 ,47 ,32 ,37 ,16 ,94 ,29};
int k[11]={53 ,71 ,44 ,65 ,25 ,43 ,91 ,52 ,97 ,51 ,14};
int l[12]={70 , 11, 33, 28 ,77 ,73 ,17, 78, 39, 68, 17 ,57};
int m[13]={91 ,71 ,52 ,38 ,17, 14, 91 ,43 ,58 ,50 ,27 ,29 ,48};
int n[14]={63 ,66 ,04 ,68 ,89 ,53 ,67 ,30 ,73 ,16 ,69 ,87, 40, 31};
int o[15]={04 ,62 ,98 ,27 ,23, 09 ,70, 98, 73 ,93 ,38 ,53 ,60 ,04 ,23};
          
          
int max=75+95+17+18+20+19+88+99+41+41+53+70+91+67;

 

 for(int bx=0;bx<2;bx++)
 	for(int cx=0;cx<3;cx++)
 	  for(int dx=0;dx<4;dx++) 	    
 	  	for(int ex=0;ex<5;ex++)
 	      for(int fx=0;fx<6;fx++)
 	        for(int gx=0;gx<7;gx++)
 	          for(int hx=0;hx<8;hx++)
 	            for(int ix=0;ix<9;ix++)
 	             for(int jx=0;jx<10;jx++)
 	              for(int kx=0;kx<11;kx++)
 	                for(int lx=0;lx<12;lx++)
                      for(int mx=0;mx<13;m++)
                      	for(int nx=0;nx<14;nx++)
                      	  for(int ox=0;ox<15;ox++)     
                      	  {
                      	       	int more=a+b[bx]+c[cx]+d[dx]+e[ex]+f[fx]+g[gx]+h[hx]+i[ix]+j[jx]+k[kx]+l[lx]+m[mx]+n[nx];
                      	       	if(more>max) max=more;

                      	       }  
}