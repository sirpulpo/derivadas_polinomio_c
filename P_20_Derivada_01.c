#include<stdio.h>


int D[15];


int derivar(x, y)
{
	int d;
	d = x * y;
	return d;
}


int main()
{
	system("color f4");
	printf("\n\t\t\tPrograma 20 Derivada");
	printf("\n\t\t\t____________________");
	printf("\n\t\tEste programa te ayudara a calcular la");
	printf("\n\t\tderivada de un polinomio de grado n.\n\n\n");

	system("pause");
	system("cls");
	int o;
	do{
		int i, g, der;
		printf("Grado del polinomio: ");
		scanf("%d",&g);
		while (g<=0)
		{
			printf("No es posible intente de nuevo con un valor positivo y distinto de cero.\n");
			printf("Grado del polinomio: ");
		    scanf("%d",&g);
		}
		for (i=0; i<=g; i++)
		{
			printf("Valor del coeficiente x^%d: ",i);
			scanf("%d",&D[i]);
		}
		while (D[g]==0)
		{
			printf("El coeficiente grado %d debe ser distinto de cero\n",g);
			printf("Introdusca otro valor.\n");
			printf("Valor del coeficiente x^%d: ",g);
			scanf("%d",&D[g]);
		}
		printf("\n\n");
		printf("El polinomio es:\n");
		printf("\t");
		for (i=g; i>=0; i--)
		{
			printf("%d",D[i]);
			if(i>0)
			{
				printf("x^%d+",i);
			}
		}
		printf("\n\n");
		printf("El resultado es.\n");
		printf("\t");
		for (i=g; i>=0; i--)
		{
			der=derivar(D[i],i);
			if (i>0)
			{
				printf("%d",der);
				if (der>1)
				{
					printf("x^%d+",i-1);
				}
			}
			
		}
		printf("\nDesea otro calculo?");
		printf("\tSi=1\tNo=0\t");
	    scanf("%d",&o);
	    while(o!=1 && o!=0)
	    {
	    	printf("\nLa opcion no es valida.");
		  	printf("\nIntente de nuevo.");
		  	printf("\nDesea otro calculo?\n");
		    printf("\tSi=1\tNo=0\t");
		    scanf("%d",&o);
	    }
	    system("cls");
	}while (o==1);
	return 0;
}
