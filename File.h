// Victor Elizalde
// A00817586
// Clase que guarda los atributos de un archivo.
// Febrero 1 del 2017

using namespace std;

class File {

  public:

    File();
    void setLineasBlanco(int iLineasBlanco);
    void setLineasNegro(int iLineasNegro);
    void setName(string sName);
    int getLineasBlanco();
    int getLineasNegro();
    string getName();
    bool operator<(File &fFile);

  private:

    string sName;
    int iLineasBlanco;
    int iLineasNegro;

};

File :: File()
{
  sName = "N/A";
  iLineasNegro = 0;
  iLineasBlanco = 0;
}

void File :: setLineasNegro(int iLineasNegro)
{
  this -> iLineasNegro = iLineasNegro;
}

void File :: setLineasBlanco(int iLineasBlanco)
{
  this -> iLineasBlanco = iLineasBlanco;
}

void File :: setName(string sName)
{
  this -> sName = sName;
}

string File :: getName()
{
  return sName;
}

int File :: getLineasNegro()
{
  return iLineasNegro;
}

int File :: getLineasBlanco()
{
  return iLineasBlanco;
}

// Sobrecarga de operador "<" para hacer la comparacion de lineas con informacion de una linea
bool File :: operator < (File &fFile)
{
  return (iLineasNegro < fFile.iLineasNegro );
}
