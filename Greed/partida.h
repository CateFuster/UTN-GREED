#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED

void tirarBloq(int *vBloq, int tamBloq, int limite){
    srand(time(NULL));
    for(int i=0; i<tamBloq; i++ ){
        vBloq[i]=(rand()%limite)+1;
    }
#endif // PARTIDA_H_INCLUDED
