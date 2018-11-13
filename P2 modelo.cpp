#include <iostream>
#include <random>
// Implementar Primero en llegar primero en atenderse

class Cliente {
  int tiempo;
  public:
  setTiempo(); // recorrer array/lista y asignar aleatoriamente la atencion entre 3 y 15 minutos. Uno representa un minuto.
  int getTiempo();
};

class Cola {
  private:
    int n;
    int tiempo;
    Cliente *ptr;
    int tipoCola;
  public:
    Cola(int _n) (n):_n { tiempo = 0; ptr = new Cliente[n];};
    getTamanio();
    int getCliente(); // obtiene el primer cliente y lo retira de la cola.
    bool isEmpty(); // verifica si esta vacia la cola.
    void setTipoCola(int _tipo) { tipoCola=_tipo;}
};

class Cajero {
  private:
    int id;
    int tipo;
    int tiempo;
  public:
    getTipo(); // Devuelve que tipo de Cajero es para saber si atiende a cualquier cola.
    void setTiempo(int tiempo);
    int atender(); // resta un minuto de atencion.
    bool estaLibre(); // Devuelve true si ya no esta ocupado.
};

class Banco {
  private:
    string nombre;
    int numcajeros;
    Cajero *cajeros;
    Cola *cola;
  public:
    Banco(int _numcajeros);
    int simularAtencion(); // simula proceso de atencion. En un bucle recorrer los cajeros y restar un minuto de atenncion por cada cajero.
    void setCliente( Cliente _cliente);
};



int main()
{
  /*
  1. Establecer numero de clientes
  2. Establecer numero de cajeros.
  3. Asignar tiempo aleatorio a los clientes.
  4. Asignar aleatoriamente los clientes a la cola escenario 1. Y Según prioridad a escenario 2.
  5. Mostrar el tiempo de ejecución.

  Consideraciones.

  Puede incorporar Herencia en el proyecto.
  Use relaciones entre clases como se describe en el código de ejemplo.
  */
  return 0;
}
