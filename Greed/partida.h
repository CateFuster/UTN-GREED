#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED

void tirarBloq(int *v){
    srand(time(NULL));
    for(int i=0; i<6; i++ ){
        v[i]=(rand()%6)+1;
    }
}
#endif // PARTIDA_H_INCLUDED
