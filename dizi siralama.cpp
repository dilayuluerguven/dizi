#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*[-50, 50] arasýndaki N tane tam sayýyý sýrayý bozmayacak þekilde bir diziye alýp aþaðýdaki sýralama iþlemlerini yapýnýz. 
a) Sýralama iþlemini dizideki TEK sayýlar için küçükten büyüðe yapýnýz.
b) Sýralama iþlemini dizideki TEK sayýlar için büyükten küçüðe yapýnýz.
c) Sýralama iþlemini dizideki tüm sayýlar için küçükten büyüðe yapýnýz.
d) Sýralama iþlemini dizideki tüm sayýlar için büyükten küçüðe yapýnýz*/

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
