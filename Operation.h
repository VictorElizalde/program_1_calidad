// Victor Elizalde
// A00817586
// Clase que hacer todas las operaciones logicas para llegar al resultado.
// Febrero 1 del 2017

using namespace std;

class Operation {

  public:
    void countLines(File &fFile, string sLine);
		void printFiles(File &fFile);
		void printSummary(int iNumArchivos, int iLineasBlanco, int iLineasNegro);
};

// Determina si una linea tiene informacion o no y la contabiliza y modifica el atributo del archivo
void Operation :: countLines(File &fFile, string sLine)
{
  if (sLine.length() == 0)
	{
		fFile.setLineasBlanco(fFile.getLineasBlanco()+1);
	}
	else
	{
		fFile.setLineasNegro(fFile.getLineasNegro()+1);
	}
}

// Imprime la informacion de un archivo
void Operation :: printFiles(File &fFile)
{
	cout << "Nombre del archivo: " << fFile.getName() << endl;
	cout << "Cantidad de lineas en blanco: " << fFile.getLineasBlanco() << endl;
	cout << "Cantidad de lineas con informacion: " << fFile.getLineasNegro() << endl;
	cout << "--------------------------------------------------" << endl;
}

// Imprime la informacion general de todos los archivos juntos
void Operation :: printSummary(int iNumArchivos, int iLineasBlanco, int iLineasNegro)
{
	cout << "TOTALES: " << endl;
	cout << "Cantidad de archivos: " << iNumArchivos << endl;
	cout << "Cantidad total de lineas en blanco: " << iLineasBlanco << endl;
	cout << "Cantidad total de lineas con informacion: " << iLineasNegro << endl;
}
