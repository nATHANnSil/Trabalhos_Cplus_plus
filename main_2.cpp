/**
Fazer um programa para:
Crie uma SuperClasse denominada Veiculo
Com os atributos private: ano de fabricação, placa e km atual
Agora crie duas subclasses: uma automóvel com os atributos de
veiculo e mais os atributos próprios: numero de portas, km ultima
revisão a outra subclasse será caminhão contendo os atributos
próprios: nr de pneus, capacidade e valor frete por km.
Crie todos os métodos getters e setters e um preencha e imprima os dados das classes!
Autor: Nathan Gonçalves de Oliveira
**/

#include <iostream>
#include <string>

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
string Veiculo::getAnoFabricacao()
{
    return anofabricacao;
}
void Veiculo::setPlaca (string d)
{
    placa=d;
}
string Veiculo::getKm()
{
    return km;
}
void Veiculo::setKm (string e)
{
    km=e;
}

class Automovel: public Veiculo
{
private:
    string num_portas;
    string km_ultima_revisao;

public:
    Automovel ();

    string getNum_Portas();
    void setNum_Portas(string f);

    string getKm_Ultima_Revisao();
    void setKm_Ultima_Revisao(string g);
};
string Automovel::getNum_Portas()
{
    return num_portas;
}
void Automovel::setNum_Portas (string h)
{
    num_portas=h;
}
string Automovel::getKm_Ultima_Revisao ()
{
    return km_ultima_revisao;
}
void Automovel::setKm_Ultima_Revisao (string i)
{
    km_ultima_revisao=i;
}

class Caminhao: public Veiculo
{
private:
    string num_pneus;
    string capacidade;
    string valor_frete_por_km;

public:
    Caminhao ();

    string getNum_Pneus();
    void setNum_Pneus(string j);

    string getCapacidade();
    void setCapacidade (string k);

    string getValor_Frete_Por_Km();
    void setValor_Frete_Por_Km (string l);
};
string Caminhao::getNum_Pneus()
{
    return num_pneus;
}
void Caminhao::setNum_Pneus (string m)
{
    num_pneus=m;
}
string Caminhao::getCapacidade ()
{
    return capacidade;
}
void Caminhao::setCapacidade (string n)
{
    capacidade=n;
}
string Caminhao::getValor_Frete_Por_Km ()
{
    return valor_frete_por_km;
}
void Caminhao::setValor_Frete_Por_Km (string o)
{
    valor_frete_por_km=o;
}

int main()
{
    cout << "Vamos criar os objetos da Super Classe Veículo";
    Veiculo p;
    p.setAnoFabricacao("2019");
    p.setPlaca("ABC1234");
    p.setKm("3500");

    cout << "Agora vamos criar os objetos da subclasse automóvel";
    Automovel q;
    q.setAnoFabricacao("2020");
    q.setPlaca("VAT2962");
    q.setKm("1244");
    q.setNum_Portas("5");
    q.setKm_Ultima_Revisao("500");

    cout <<"Agora vamos criar os objetos da subclasse caminhão";
    Caminhao r;
    r.setNum_Pneus("8");
    r.setCapacidade("20");
    r.setValor_Frete_Por_Km("2,30");

    cout<< "Os dados cadastrados na Super Classe Veículo são:";
    cout<< "O Ano de Fabricação do veículo é:" << p.getAnoFabricacao();
    cout<< "A Placa do veículo é: "<< p.getPlaca();
    cout<< "O Km atual do veículo é:" <<p.getKm();

    cout<< "Os dados cadastrados na subclasse automóvel são:";
    cout<< "O Ano de Fabricação do veículo é:" << q.getAnoFabricacao();
    cout<< "A Placa do veículo é: "<< q.getPlaca();
    cout<< "O Km atual do veículo é:" <<q.getKm();
    cout<< "O número de portas do veículo é:" <<q.getNum_Portas();
    cout<< "Os km da última revisão é de:" <q.getKm_Ultima_Revisao();

    cout<< "Os dados cadastrados na subclasse caminhão são:";
    cout<< "A quantidade de pneus do caminhão é:" <<r.getNum_Pneus();
    cout<< "A capacidade do caminhão em levar cargas (em toneladas) é de:" <<r.getCapacidade();
    cout<< "O valor do frete por km é:" <<r.getValor_Frete_Por_Km();

    return 0;
}
