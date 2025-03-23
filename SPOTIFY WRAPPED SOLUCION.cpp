#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	float horas;
	float horasTotales = 0;
	float horasAux = 0;
	int cancionAux = 0;
	
	int num;
	cin>>num;
	
	for (int i = 1; i <= num; i++)
	{
		cin>>horas;
		if (horasAux < horas)
		{
			horasAux = horas;
			cancionAux = i;
		}
		horasTotales += horas;
	}
    cout << fixed << setprecision(0) << horasTotales << endl;
    cout << fixed << setprecision(0) << horasTotales / num << endl;
    cout << cancionAux << " " << horasAux << endl;
	if (horasAux > 1000)
		cout<<"Gran exito!"<<endl;
	
	return 0;
}