
// Definiremos los metodos estaticos de las operaciones con numericos.

#include "Funciones_Numericas.h"

// -----------------------------------------------------------------------------

// Implementamos el sumador.

Numericos Sumador::Suma (const Numericos & Valores_A , const Numericos & Valores_B) {
	
	// Creamos un nuevo númerico.
	
	Numericos Resultado (0.0 , 0.0);
	
	// Asignaremos la suma en cada valor.
	
	Resultado.Set_Num_1 (Valores_A.Get_Num_1 () + Valores_B.Get_Num_1 ());
	
	// Asignaremos la suma en cada valor.
	
	Resultado.Set_Num_2 (Valores_A.Get_Num_2 () + Valores_B.Get_Num_2 ());
	
	// Devolvemos el resultado.
	
	return Resultado;
	
}

// -----------------------------------------------------------------------------
