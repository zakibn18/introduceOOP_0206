#include <iostream>
using namespace std;

class Planet
{
  private :
    float gravitasi;
  public :
    string nama;
    float diameter;

    void displayData()
    {
      cout << "garvitasiku " << gravitasi << endl;
    }

    void inputData()
    {
      cout << "Input nama = ";
      cin >> nama;
      cout << "Ukuranku = ";
      cin >> diameter;
      cout << "Gravitasiku = ";
      cin >> gravitasi;
    }
};

int main(){
  Planet venus;
  venus.inputData();
  cout << "Namanya adalah " << venus.nama << endl;
  cout << "Diameternya adalah " << venus.diameter << endl;

  venus.displayData();
}