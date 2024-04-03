/*
Calculadora de ahorro por viajes compartidos en automovil
a) Total de Km conducidos por dia.
b) Costo por litro de gasolina.
c) Promedio de Km por litro.
d) Cuotas de estacionamiento por dia.
e) Peaje por dia.
*/

#include<iostream>
using namespace std;

int main(){

    double kmpordia,gagaso,kmporga,estacionamiento,peaje;
    cout<<"Total de Km conducidos por dia: ";cin>>kmpordia;
    cout<<"Costo por galon de gasolina: ";cin>>gagaso;
    cout<<"Promedio de Km por galon: ";cin>>kmporga;
    cout<<"Cuotas de estacionamiento por dia: ";cin>>estacionamiento; 
    cout<<"Peaje por dia: ";cin>>peaje; 
    

    //EN CASO DE VIAJAR SOLO
    double costototalgaso = gagaso*(kmpordia/kmporga);
    double costototalcuotas= estacionamiento+peaje;
    double TOTALSOLO= costototalcuotas+costototalgaso;


    //VIAJAR CON 4 PERSONAS
    double costototalgasogente=costototalgaso/4;
    double costototalcuotasgente=costototalcuotas/4;
    double TOTALGENTE= costototalcuotasgente+costototalcuotasgente;

    double DIFERENCIA=TOTALSOLO-TOTALGENTE;

    cout<<"EN CASO DE VIAJAR SOLO: "<<endl;
    cout<<"S/. "<<TOTALSOLO<<endl;

    cout<<"EN CASO DE VIAJAR CON 4 PERSONAS: "<<endl;
    cout<<"S/. "<<TOTALGENTE<<endl;

    cout<<"DINERO QUE AHORRARIAS AL COMPARTIR EL VIAJE: "<<DIFERENCIA<<endl;
    
    return 0;
}