#include <iostream>
#include <string>

/**
Criar os diagramas, atributos e métodos para as classes
Veiculo, Carro e Caminhão
Envie juntamente com seu código um desenho esquemático dos diagramas.
Crie além dos atributos e construtores uma função utilizando polimorfismo calculando o frete para carros (valor bandeirada +
km rodados x valor base) e para caminhão( km rodados x nr pneus x valor base)
Autor: Nathan Gonçalves de Oliveira
**/


using namespace std;

class Veiculo
{
private:
    string anofabricacao;
    string placa;
    string km;

public:
    Veiculo();

    string getAnoFabricacao();
    void setAnoFabricacao(string a);

    string getPlaca();
    void setPlaca(string b);

    string getKm();
    void setKm(string c);
};

class Carro: public Veiculo
{
private:
    int num_portas;
    int km_ultima_revisao;
    float valor_bandeirada;
    int km_rodado;
    float valor_base_car;

public:
    Carro();

    int getNum_Portas();
    void setNum_Portas(int d);

    int getKm_Ultima_Revisao();
    void setKm_Ultima_Revisao(int e);

    float getValor_Bandeirada();
    void setValor_Bandeirada(float f);

    int getKm_Rodado();
    void setKm_Rodado(int g);

    float getValor_Base_Car();
    void setValor_Base_Car(float h);

    float calcula_frete_car();
};
Carro::Carro()
{
    cout
            << "\n Criando o objeto da classe Carro";
}
int Carro::getNum_Portas()
{
    return num_portas;
}
void Carro::setNum_Portas (int d)
{
    num_portas=d;
}
int Carro::getKm_Ultima_Revisao ()
{
    return km_ultima_revisao;
}
void Carro::setKm_Ultima_Revisao (int e)
{
    km_ultima_revisao=e;
}
float Carro::getValor_Bandeirada ()
{
    return valor_bandeirada;
}
void Carro::setValor_Bandeirada (float f)
{
    valor_bandeirada=f;
}
int Carro::getKm_Rodado()
{
    return km_rodado;
}
void Carro::setKm_Rodado(int g)
{
    km_rodado=g;
}
float Carro::getValor_Base_Car()
{
    return valor_base_car;
}
void Carro::setValor_Base_Car(float h)
{
    valor_base_car=h;
}

float Carro::calcula_frete_car()
{
    return valor_bandeirada*km_rodado*valor_base_car;
}
float obterValorFinalCar(Carro*Carro)
{
    return Carro>calcula_frete_car();
}
class Caminhao: public Veiculo
{
private:
    int num_pneus;
    int capacidade;
    int valor_frete_por_km;
    int km_rodado_cam;
    int valor_base_cam;

public:
    Caminhao();

    int getNum_Pneus();
    void setNum_Pneus(int i);

    int getCapacidade();
    void setCapacidade (int j);

    int getValor_Frete_Por_Km();
    void setValor_Frete_Por_Km (int k);

    int getKm_Rodado_Cam();
    void setKm_Rodado_Cam(int l);

    int getValor_Base_Cam();
    void setValor_Base_Cam(int m);

    float calcula_frete_cam();

};
Caminhao::Caminhao()
{
    cout
            << "\n Criando o objeto da classe Caminhão";
}
int Caminhao::getNum_Pneus()
{
    return num_pneus;
}
void Caminhao::setNum_Pneus (int i)
{
    num_pneus=i;
}
int Caminhao::getCapacidade ()
{
    return capacidade;
}
void Caminhao::setCapacidade (int j)
{
    capacidade=j;
}
int Caminhao::getValor_Frete_Por_Km ()
{
    return valor_frete_por_km;
}
void Caminhao::setValor_Frete_Por_Km (int k)
{
    valor_frete_por_km=k;
}
int Caminhao::getKm_Rodado_Cam()
{
    return km_rodado_cam;
}
void Caminhao::setKm_Rodado_Cam(int l)
{
    km_rodado_cam=l;
}
int Caminhao::getValor_Base_Cam()
{
    return valor_base_cam;
}
void Caminhao::setValor_Base_Cam(int m)
{
    valor_base_cam=m;
}

float Caminhao::calcula_frete_cam()
{
    return km_rodado_cam*num_pneus*valor_base_cam;
}
float obterValorFinalCam(Caminhao*Caminhao)
{
    return Caminhao>calcula_frete_cam();
}

int main ()
{
    Carro n;
    Caminhao o;

    n.setValor_Bandeirada(3,3);
    n.setKm_Rodado(32);
    n.setValor_Base_Car(2);
    cout<< "Valor final do carro é"<< " =" << obterValorFinalCar(&n)<<"\n\n";

    o.setKm_Rodado_Cam(9);
    o.setNum_Pneus(8);
    o.setValor_Base_Cam(2);
    cout<< "Valor final do caminhão é"<< "=" <<obterValorFinalCam (&o)<<"\n\n";

    return 0;
}
