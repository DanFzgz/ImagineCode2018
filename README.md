# Sistema interactivo de detección de traza creado con 3pi Pololu
Solución creada por el equipo PANTERAS DE MANILA para la primera edición del ImagineCode el cual mezcla reconocimiento por ordenador con robótica al reto presentado por Everis.


## Notas para el cambio a C++:
Sustituidas en **"ImagineCode.cproj"** las referencias a *C* por *CPP*.

En **"Project->Properties->AVR/GNU Linker->Libraries"** añadido: **"pololu_atmega328p"**


## Modificados aspectos que daban error de compilación en C++, fundamentalmente:
**const char msg** del principio de **"main.cpp"** por  **char msg**, esto hace que no se pueda usar *PROGMEM*
**last_time_into** de **"power.cpp"** por **last_time_into_power**, esto evita un error de **"first defined here"** respecto de **"dance.cpp"**