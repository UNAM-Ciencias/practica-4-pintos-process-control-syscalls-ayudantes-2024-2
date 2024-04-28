# PROJECT 2: USER PROGRAMS. PROCESS CONTROL SYSTEM CALLS

## EQUIPO

> Pon aquí los nombres y correos electrónicos de los integrantes de tu equipo.

<Nombre_Completo> <email@domain.example>
<Nombre_Completo> <email@domain.example>

## PRELIMINARES

> Si tienes algún comentario preliminar a tu entrega, notas para los ayudantes o extra créditos, por favor déjalos aquí.

> Por favor cita cualquier recurso offline u online que hayas consultado mientras preparabas tu entrega, otros que no sean la documentación de Pintos, las notas del curso, o el equipo de enseñanza

## SYSTEM CALLS - PROCESS CONTROL

### ESTRUCTURAS DE DATOS

> B1: A cada declaración nueva o modificación de un `struct` o `struct member`, variable global o estática, `typedef` o `enum`. Agrega comentarios en el código en el que describas su propósito en 25 palabras o menos.

 R: Va directo en el código.

### ALGORITMOS
    
> B5: Describe brevemente tu implementación de la __system call__ "wait" y cómo interactúa con la terminación del proceso.


### SINCRONIZACION

> B7: La __system call__ `exec` regresa `-1` si falla la carga del ejecutable, por lo cual no puede regresar antes de que se complete la carga en el proceso hijo. ¿Cómo se garantiza que `exec` no regrese antes de que finalice la carga del ejecutable? ¿Cómo se pasa el resultado de la carga (éxito/fallo) hacia el __thread__ que llama a `exec`? 

> B8: Considera un proceso padre `P` con un proceso hijo `C`. ¿Cómo se evitan __race conditions__ cuando `P` llama `wait(C)` antes de que `C` finalice? ¿Cómo se evitan __race conditions__ cuando `P` llama `wait(C)` luego de que `C` finalice? ¿Cómo se garantiza que todos los recursos se liberen en cada caso? ¿Qué ocurre cuando `P` finaliza su ejecución sin llamar a `wait(C)`, antes de que `C` finalice? ¿Luego de que `C` finalice? ¿Existe algún caso especial que se deba tener en cuenta?

### RATIONALE

> B11: El mapeo de `tid_t` a `pid_t` utilizado por defecto es la función identidad. Si se utilizó un mapeo diferente, ¿Cuáles son las ventajas del mapeo utilizado?
