#include <iostream>
using namespace std;

class menghitungPersegipanjang
{
  public :
    float panjang, lebar, luas;

    void inputData()
    {
      cout << "Masukkan panjang : ";
      cin >> panjang;
      cout << "Masukkan lebar : ";
      cin >> lebar;
    }

    void menghitungLuas()
    {
      luas = panjang * lebar;
    }

    void displayData()
    {
      cout << "Luas persegi panjang adalah " << luas << endl;
    }
};

int main()
{
  menghitungPersegipanjang per;
  per.inputData();
  per.menghitungLuas();
  per.displayData();

  return 0;
}