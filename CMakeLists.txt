
# VersiÃ³n actual minimo requerida para este proyecto.

cmake_minimum_required (VERSION 3.2)

# Establecemos el nombre de este proyecto.

project ("Funciones Numericas")

# AÃ±adiremos la biblioteca que se genera con este proyecto y su archivo fuente.
	
add_library (Funciones_Numericas "source/Funciones_Numericas.cpp")

# AÃ±adiremos los directorios de busqueda "include" para nuestra biblioteca creando
# la interfaz para su busqueda en este directorio actual en include.

target_include_directories (Funciones_Numericas

	# Establecemos la interfaz publica en el directorio : include dentro de esta carpeta.

	PUBLIC
		
		# Creamos la interfaz
		
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		
		# Instalamos la interfaz.
		
		$<INSTALL_INTERFACE:include>

	# Como privado tenemos el codigo fuente.
	
	PRIVATE
		
		# Los codigos fuente de la biblioteca en este directorio.
		
		source/
	
)

# ------------------------------------------------------------------------------

# Ahora añadiremos la dependencia de nuestra biblioteca.

# La dependencia con los númericos la Buscaremos mediante lo siguiente.

include (FetchContent)

# Desconectado de actualizaciones.

set (FETCHCONTENT_UPDATES_DISCONNECTED TRUE)

# Sin ocultar la información de procesado.

set (FETCHCONTENT_QUIET FALSE)

# Tenemos la función FetchContent_Declare para establecer una biblioteca de dependencia
# que requiere nuestra biblioteca actual y poderla buscar ya sea en un Path establecido o en
# un repositorio de codigo para descargar y compilar junto a todo el proyecto.

# Usamos esto para buscar nuestra biblioteca de Númericos en nuestro repositorio.

FetchContent_Declare (Numericos
	
	# Obtenemos el repositorio de donde lo va a descargar.
	
	GIT_REPOSITORY https://github.com/Menightmar/Numericos.git
	
	# El número de commit actual para usar.
	
	GIT_TAG cb32680026363e4f025917b39f9038fe467e4652
	
	# Mostramos el progreso.
	
	GIT_PROGRESS TRUE
	
)

# Obtenemos las propiedades para asignar al proyecto actual.

FetchContent_GetProperties (Numericos)

# Validamos que haya sido encontrada en esta propiedad.

if (NOT numericos_POPULATED)

  # Buscamos el contenido usando detalles declarados previamente.
  
  FetchContent_Populate (Numericos)

  # Bring the populated content into the build
  
  add_subdirectory (${numericos_SOURCE_DIR} ${numericos_BINARY_DIR})
  
endif ()

# Finalmente enlazaremos la biblioteca a esta otra.

target_link_libraries (Funciones_Numericas PUBLIC Numericos)

# ------------------------------------------------------------------------------
