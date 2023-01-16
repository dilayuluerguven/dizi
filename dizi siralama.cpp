#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*[-50, 50] aras�ndaki N tane tam say�y� s�ray� bozmayacak �ekilde bir diziye al�p a�a��daki s�ralama i�lemlerini yap�n�z. 
a) S�ralama i�lemini dizideki TEK say�lar i�in k���kten b�y��e yap�n�z.
b) S�ralama i�lemini dizideki TEK say�lar i�in b�y�kten k����e yap�n�z.
c) S�ralama i�lemini dizideki t�m say�lar i�in k���kten b�y��e yap�n�z.
d) S�ralama i�lemini dizideki t�m say�lar i�in b�y�kten k����e yap�n�z*/

main()
{

	int N,atanan,kontrolsira;
	printf("N degeri giriniz: ");
	scanf("%d",&N);
	int dizi[N];
	
	srand(time(NULL));
	for(int i=0;i<N;i++)
	{
		atanan=-50+rand()%101;
		
		if(i==0)
		{	
			printf("\n ilk sayi:%d ",atanan);
			dizi[i]=atanan;
		}
		else
		{
			printf("\n siradaki sayi:%d ",atanan);
			
			kontrolsira=i-1;
		    while(kontrolsira>=0)
		    {
		    	if(dizi[kontrolsira]>atanan)
		 		{
		 			dizi[kontrolsira+1]=dizi[kontrolsira];
		 			dizi[kontrolsira]=atanan;
			    }
			    else
			    {
			    	dizi[kontrolsira+1]=atanan;
			    	break;
				}
				kontrolsira--;
	      	}	
			
		}
		
		printf("\n");
		for(int L=0;L<=i;L++)
		{
			printf(" %d   ",dizi[L]);
		}
		
}
    printf("\n \n SIRALAMALAR:");
	printf("\n A)Tek sayilar kucukten buyuge siralamasi:  ");
		for(int i=0;i<N;i++)
		{
			if(dizi[i]%2!=0)
			{
		      printf(" %d   ",dizi[i]);
			}
		}
		
		printf("\n B)Tek sayilar buyukten kucuge siralamasi:  ");
		for(int i=N-1;i>=0;i--)
		{
			if(dizi[i]%2!=0)
			{
		      printf(" %d   ",dizi[i]);
			}
		}
		printf("\n C)Tum sayilar kucukten buyuge siralamasi:  ");
		for(int i=0;i<N;i++)
		{
			printf(" %d   ",dizi[i]);
		}
		printf("\n D)Tum sayilar buyukten kucuge siralamasi:  ");
		for(int i=N-1;i>=0;i--)
		{
			printf(" %d   ",dizi[i]);
		}
		
		
}
