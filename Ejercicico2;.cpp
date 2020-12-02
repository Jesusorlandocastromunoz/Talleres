using namespace std;
const int fil = 5;
const int col = 5;
class MATRIZ{
public:
    MATRIZ() {
        for(int f = 0; f < fil; f++){
            for(int c = 0; c < col;  c++){
                Matriz[f][c] = 0;

            }
        }
    }

    void llenar(){
        for(int f = 0; f < fil; f++){
            for(int c = 0; < col; c++){
                if(f == c){
                    Matriz[f][c] = 1;

                }else{
                    Matriz[f][c] = 0; 
                }

            }



        }
    }
    void Mostrar(){
        for(int f = 0; f < fil; f++){
            cout<<setw(3)<<Matriz[f][c]<<" ";

        }cout<<endl;
    }
private:
    int Matriz[fil][col];

};
int  main(){
    MATRIZ Mal;

    system("pause");
    return 0;
    Mal.llenar();
    Mal.Mostrar();
}




