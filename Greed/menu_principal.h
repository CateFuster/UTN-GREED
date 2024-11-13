#ifndef MENU_PRINCIPAL_H_INCLUDED
#define MENU_PRINCIPAL_H_INCLUDED

 /// MENU PRINCIPAL
int menuPrincipal(){
int opcion = 0;

system("cls");
cout<<"----MENU PRINCIPAL----"<<endl;
cout<<"1 - MODO UN JUGADOR"<<endl;
cout<<"2 - MODO DOS JUGADORES"<<endl;
cout<<"3 - ESTADISTICAS"<<endl;
cout<<"4 - CREDITOS"<<endl;
cout<<"----------------------"<<endl;
cout<<"0 - SALIR"<<endl<<endl;
cout<<"Opcion: ";

cin>>opcion;

return opcion;
 }

 void ejecutarOpcion(int opcion, char jugador1, char jugador2){
 switch(opcion){
     case 1:
                /// MODO UN JUGADOR
                cout<<endl<<"INGRESE NOMBRE JUGADOR: ";
                cin >> jugador1;
               // tirarBloq()

                system("pause");
                break;
    case 2:
                /// MODO DOS JUGADORES
                cout<<endl<<"INGRESE NOMBRE JUGADOR 1: ";
                cin >> jugador1;
                cout<<endl<<"INGRESE NOMBRE JUGADOR 2: ";
                cin >> jugador2;
               break;
    case 3:
                ///ESTADISTICAS
                break;
    case 4:
               ///CREDITOS
               cout << endl<<"Juego realizado por: "<<endl<<endl;
               cout << "Caterina Fuster"<<endl;
               cout << "Ezequiel Boyer"<<endl;
               cout << "Sofia Pastor Conde"<<endl;
                      break;
    case 0:
        ///CIERRE JUEGO
        cout << "Gracias por jugar"<<endl;
        break;

    default:
        cout << "Opción inválida"<<endl;
        break;

}
 }




#endif // MENU_PRINCIPAL_H_INCLUDED
