

// -----------------------------------------------------------------------------

// Incluimos los numericos.

#include <Numericos.h>

// -----------------------------------------------------------------------------

// Aqui establecemos el elemento para la utilizacion de los numericos.

class Sumador {
	
	// Tenemos como miembro estatico esto :
	
	public :
		
		// Suma de dos numericos.
		
		static Numericos Suma (const Numericos & Valores_A , const Numericos & Valores_B);
	
};

// Ahora la resta.

class Restador {
	
	// Tenemos como miembro estatico esto :
	
	public :
		
		// Resta de dos numericos.
		
		static Numericos Resta (const Numericos & Valores_A , const Numericos & Valores_B);
		
};
