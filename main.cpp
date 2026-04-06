#include <iostream>
using namespace std;
class Patient{
private:
    double hauteur,masse;
public:
    void init (double p,double t){
    if(p>0 and t>0){
        masse=p;
        hauteur=t;
    }else{
         masse=0.0;
         hauteur= 0.0;
         }
    }
    void afficher( ){
    cout<< "patient:"<<masse<<"kg ,"<<hauteur<<"m"<<endl;
    }
    double poids( )const{
    return masse;
    }
    double taille( )const{
    return hauteur;
    }
    double imc ( ) const{
    if (hauteur<=0){
        return 0;
        }else{
        return masse/(hauteur*hauteur);}
    }
    };



int main()
{
  Patient quidam;
  double poids, taille;
  do {
    cout << "Entrez un poids (kg) et une taille (m) : ";
    cin >> poids >> taille;
    quidam.init(poids, taille);
    quidam.afficher();
    cout << "IMC : " << quidam.imc() << endl;
  } while (poids * taille != 0.0);
  return 0;
}
