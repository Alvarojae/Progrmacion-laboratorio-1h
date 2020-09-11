#include <stdio.h>
#include <stdlib.h>

int factorial(float operador,float *Resultadofactorial)
{
	int retorno = -1;
    float factorial;
    float contador;
    contador=operador;
    factorial=operador;

    if(factorial==0)
    {
    	*Resultadofactorial=1;
    	retorno=0;
    }

    if(contador>1)
    {

    	while(contador>1)
    	{
    		contador=contador-1;
    		factorial=factorial*contador;

    	}
    	retorno=0;
    	*Resultadofactorial=factorial;
    }
    return retorno;

}

int suma(float operadorA, float operadorB,float *pResultado)
{
	int retorno =-1;

	if(pResultado != NULL)
	{
		*pResultado=operadorA+operadorB;
		retorno=0;
	}

    return retorno;
}

int resta(float operadorA, float operadorB,float *pResultado)
{
	int retorno =-1;

		if(pResultado != NULL)
		{
			*pResultado=operadorA-operadorB;
			retorno=0;
		}

	    return retorno;
}

int division(float operadorA, float operadorB,float *pResultado)
{

	int retorno =-1;

		if(pResultado != NULL && operadorB!=0)
		{
			*pResultado=operadorA/operadorB;
			retorno=0;
		}

	    return retorno;

}

int multiplicacion(float operadorA, float operadorB,float *pResultado)
{
	int retorno =-1;

		if(pResultado != NULL)
		{
			*pResultado=operadorA*operadorB;
			retorno=0;
		}

	    return retorno;
}

int getFloat(char* mensaje, char* mensajeError, float* pResultado,int reintentos,int maximo,int minimo)
{
	int retorno = -1;
	float bufferfloat;
	int resultadoScanf;
	if(		mensaje != NULL &&
			mensajeError != NULL &&
			pResultado != NULL &&
			reintentos >= 0 &&
			maximo >= minimo)
	{
		do
		{
			printf("%s",mensaje);
			fflush(stdin);
			resultadoScanf = scanf("%f" , &bufferfloat);
			if(resultadoScanf == 1 && bufferfloat >= minimo && bufferfloat <= maximo)
			{
				retorno = 0;
				*pResultado = bufferfloat;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}










