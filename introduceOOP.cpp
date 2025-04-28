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

}