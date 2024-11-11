#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED

void tirarBloq(int *vDadosBloq){
    srand(time(NULL));
    for(int i=0; i<6; i++ ){
       vDadosBloq[i]=(rand()%6)+1;
    }}

void bloqMostrar(int *vDadosBloq){
    for(int i=0;i<6;i++){
        cout<<vDadosBloq[i]<<" ";
    }}

    /// Jugada



    ///Puntos

int sumaDeDados(int *v){
    int acumulador=0;
    for(int i=0;i<6;i++){
                acumulador+=v[i];
    }
     return acumulador;
}
void verPuntaje(int puntaje){
    cout<<endl;
    cout<<"PUNTAJE OBTENIDO: "<<puntaje;
    cout<<endl;
}
#endif // PARTIDA_H_INCLUDED
