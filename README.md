# File-Selection-Sort
Este proyecto en C implementa un ordenamiento por selección (Selection Sort) directamente sobre archivos binarios. Permite:  Leer registros desde un archivo (archivo.dat).  Ordenar los datos de forma ascendente según su contenido.  Guardar los datos ordenados de nuevo en el archivo. 

# 📂 fileSelectionSort

[![MIT License](https://img.shields.io/badge/license-MIT-green)](LICENSE)  
[![C](https://img.shields.io/badge/language-C-blue)](https://github.com/TU_USUARIO/fileSelectionSort)  

Proyecto en **C** que implementa el algoritmo de **Selection Sort** para ordenar datos almacenados en archivos binarios (`archivo.dat`). Permite leer, ordenar y guardar datos de manera eficiente.  

Repositorio: [https://github.com/TU_USUARIO/fileSelectionSort](https://github.com/TU_USUARIO/fileSelectionSort)

---

## 📖 Descripción
- Implementa el **algoritmo Selection Sort** sobre archivos binarios.  
- Permite leer registros desde un archivo (`archivo.dat`) y ordenarlos de manera ascendente.  
- Guardado de los datos ordenados en el mismo archivo o en uno nuevo.  
- Utiliza estructuras definidas en `selectionSort.h` para almacenar los datos.  
- Compatible con **Windows y Linux**, compilable desde Code::Blocks o terminal.  

---

## 📂 Estructura del proyecto

- **src/** – Código fuente
  - `main.c` – Entrada principal del programa
  - `selectionSort.c` – Implementación del algoritmo y funciones de archivo
  - `selectionSort.h` – Header con estructuras y prototipos

- **project/** – Archivos del proyecto de Code::Blocks
  - `selectionSort.cbp`
  - `selectionSort.layout`
  - `selectionSort.depend`

- **data/**
  - `archivo.dat` – Archivo de datos a ordenar

- `.gitignore` – Archivos y carpetas que Git debe ignorar (binarios, objetos, ejecutables)

---

## 🛠 Requisitos
- Compilador **C** (GCC / MinGW)  
- **Code::Blocks** (opcional)  

---

## 💻 Compilación y ejecución
---

<details>
<summary>🖥️ Windows (MinGW / Code::Blocks)</summary>

### Compilación en Code::Blocks
1. Abrir **Code::Blocks** y cargar el archivo de proyecto `selectionSort.cbp`.
2. Asegúrate de que la configuración del compilador sea correcta (generalmente MinGW).
3. Usar **Build & Run** (o presionar `F9`) para compilar y ejecutar el programa.

### Compilación desde terminal
gcc main.c selectionSort.c -o fileSelectionSort
Ejecutar
./fileSelectionSort.exe
</details>

<details> <summary>🐧 Linux</summary>

### Compilación desde terminal
gcc main.c selectionSort.c -o fileSelectionSort

Ejecutar
./fileSelectionSort
</details>
📂 Archivos importantes
main.c → Entrada principal.

selectionSort.c / selectionSort.h → Implementación del algoritmo y manejo de archivos.

archivo.dat → Archivo de datos a ordenar.

🎮 Uso
Ejecutar el programa.

Seleccionar el archivo de datos a ordenar (por defecto archivo.dat).

El programa lee los datos, los ordena y guarda el resultado en el mismo archivo o en otro archivo especificado.

Revisar los datos ordenados abriendo el archivo binario o usando funciones de impresión.

📝 Licencia
MIT License © 2025 Fabrizio Del Vecchio

Se permite usar, modificar y redistribuir, siempre mencionando al autor.
