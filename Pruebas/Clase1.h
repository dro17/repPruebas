
class Clase1(){
    private:
        int param1;
        double param2;
    public:
        //Constructores
        Clase1();
        Clase1(int, double);
        //Acceso
        int getParam1();
        double getParam2();
        //Modificacion
        void setParam1(int);
        void setParam2(double);
        //Metodos
        void muestra();
};

Clase1::Clase1(){
    param1 = 0;
    param2 = 0;
}

Clase1::CLase1(int p1, double p2){
    param1 = p1;
    param2 = p2;
}

int Clase1::getParam1(){
    return param1;
}

double Clase1::getParam2(){
    return param2;
}

void Clase1::setParam1(int p1){
    param1 = p1;
}

void Clase1::setParam2(double p2){
    param2 = p2;
}

void Clase1::muestra(){
    cout << "(" << param1 << "),(" << param2 << ")" << endl;
}