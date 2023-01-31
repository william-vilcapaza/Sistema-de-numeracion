#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

main()
{
    int longi,z,y=0,t,r=1,v=1;
    char a=100,frase[a];
    float x,s=0,w;

    cout<<" Sistema que pasas convierte a base 10 "<<endl;
    cout<<"Numero que quieres transformar"<<endl;

    cin>>frase;
    longi = strlen(frase);
    cout<<"\n Base de sistema de numeracion de el anterior numero"<<endl;
    cin>>z;


    if(z>1)//que el sistema de numeracion no sea menor que 2
    {

        if(z<37)//que el sistema de numeracion no sea mayor a 36
        {
            a=0;//se cuenta el numero de cifras que da el usuario antes de escribir el punto decimal
            for(a==a;a<longi;a++)
            {
                x=frase[a];//valor tipo ASCII, se almacena los valores
                if(x==46)//si el valor pasa 46 el ciclo ya no continua, decimal
                    break;
                y=y+1;//para la potencia
            }

            a=0;
            for(a==a;a<longi;a++)
            {
                y=y-1;
                w=pow(z,y);
                x=frase[a];
                t=x-48;//para el punto decimal, signo negativo
                if(t==-3)//negativo
                {
                    v=2;
                    x=0;
                }
                else
                {
                    if(t==-2)//punto decimal
                    {
                        y=y+1;
                        x=0;
                    }
                    else
                    {
                        if(t<z)//si los numeros que dio el usuario, es menor a la base
                        {
                            if(x<58)//58 ultimo numero en ascii
                            {
                                x=x-48;//lo devuelve al numero normal de ascii
                                x=w*x;
                            }
                        }
                        else
                        {
                            r=2;
                        }
                    }
                }

                t=frase[a];
                t=t-55;//para valores como 10=A, 11=B, 12=C, 13, 14
                if(t<z)
                {
                    if(t>9)
                    {
                        x=frase[a]-55;//se resta para que se de el numero
                        x=w*x;
                        r=1;
                    }
                }
                else
                {
                    r=2;
                    break;
                }
                s=s+x;//se va sumando poco a poco

            }
            if(r==1)
            {
                cout<<"\nEl resultado es\n";
                if(v==2)
                    cout<<frase[0];
                    cout<<s<<endl;
            }
            else
                cout<<"\nEl numero que diste no es de la base que escribiste"<<endl;
    }

    else
    {
        cout<<"\n\n La base es menor a 2\n";
    }

    getch();
    return 0;
}
}
