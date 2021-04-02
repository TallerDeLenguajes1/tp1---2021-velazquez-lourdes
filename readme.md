# TRABAJO PRÁCTICO Nº 1
***
## Manejo de punteros y versionado en git y github.

**Investigar el archivo .gitignore**
***
- ¿Por qué es conveniente incluirlo?
Hay código que no necesitas enviar a Git, ya sea porque sea privado para un desarrollador.
Pueden ser también archivos binarios con datos que no necesitas mantener en el control de versiones,
como diagramas, instaladores de software, etc.
Si Git ignora todos esos archivos, el peso total de proyecto será mucho menor y eso redundará en un mejor 
mantenimiento y distribución del código. 
Otro claro ejemplo de uso de gitignore son los archivos que crean los sistemas operativos automáticamente, 
archivos que muchas veces están ocultos y no los vemos, pero que existen. Si no evitas que Git los procese, estarán 
en tu proyecto como cualquier otro archivo de código y generalmente es algo que no quieres que ocurra.
***
- ¿Cuándo se debe hacer?
 Se de hacer antes de subir el proyecto en el cual de esta trabanjo a github
***
- ¿Cómo usaría la página https://www.gitignore.io/? y ¿Cómo configuraría el archivo .gitignore?
crear un block de nota con el nombre .gitignore

´´´.gitignore.txt
´´´ 
luego se incresa a la pagina * [gitignore](https://www.gitignore.io/)
se escriben algunas palabras clave como por ejemplo: OSX, Windows, Node, Polymer, SublimeText, c, c++, visual studio code, etc.
 y pulsas la tecla enter para ir creando los "chips". 
 Una vez generado el código del gitignore, solo te queda copiarlo y pegarlo en tu archivo .gitignore, en la raíz de del proyecto.
