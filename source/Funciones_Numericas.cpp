
// Definiremos los metodos estaticos de las operaciones con numericos.

#include "Funciones_Numericas.h"

// -----------------------------------------------------------------------------

// Implementamos el sumador.

Numericos Sumador::Suma (const Numericos & Valores_A , const Numericos & Valores_B) {
	
	// Creamos un nuevo númerico.
	
	Numericos Resultado (0.0 , 0.0);
	
	
	
	// Comentario 2.
	
	// Asignaremos la suma en cada valor.
	
	Resultado.Set_Num_1 (Valores_A.Get_Num_1 () + Valores_B.Get_Num_1 ());
	
	// Asignaremos la suma en cada valor.
	
	Resultado.Set_Num_2 (Valores_A.Get_Num_2 () + Valores_B.Get_Num_2 ());
	
	int Numero = 200 , Azulejo = 100;
	
	// Impresiones.
	
	printf ("Resultados : %i , %i \n" , Resultado.Get_Num_1 () , Resultado.Get_Num_2 ());
	
	// Devolvemos el resultado actualizado.
	
	return Resultado;
	
	// Normal Meni.
	
}

// Resta.

Numericos Restador::Resta (const Numericos & Valores_A , const Numericos & Valores_B) {
	
	// Creamos un nuevo númerico.
	
	Numericos Resultado (0.0 , 0.0);
	
	// Normal.
	// Asignaremos la resta en cada valor.
	
	Resultado.Set_Num_1 (Valores_A.Get_Num_1 () - Valores_B.Get_Num_1 ());
	
	// Asignaremos la resta en cada valor.
	
	Resultado.Set_Num_2 (Valores_A.Get_Num_2 () - Valores_B.Get_Num_2 ());
	
	// Impresiones.
	
	printf ("Resultados : %i , %i \n" , Resultado.Get_Num_1 () , Resultado.Get_Num_2 ());
	
	// Devolvemos el resultado.
	
	return Resultado;
	
}

// -----------------------------------------------------------------------------
