#include <iostream>

using namespace std;

class retangulo{
    public:
        int comprimento;
        int largura;

    retangulo(int comprimento, int largura) {
        this -> comprimento = comprimento;
        this -> largura = largura;
    }

    double cal_perimetro(){
        return 2*(this->comprimento + this->largura);
    }

    double cal_area(){
        return this->comprimento * this->largura;
    }

};

int main(){

    int perimeto_obj1,area_obj1;
    retangulo obj1(4,6);

    perimeto_obj1 = obj1.cal_perimetro();
    area_obj1 = obj1.cal_area();

    cout << "Perimetro calculado = "<< perimeto_obj1 << endl;
    cout << "Area calculado = "<<area_obj1 << endl;

    return 0;
}