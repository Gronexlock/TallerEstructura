# TallerEstructura
// DIEGO CASTRO OLIVARES
// 18.633.660-7
// diego.castro03@alumnos.ucn.cl

Descripción de los Objetos Creados en el Main

Durante el inicio del programa, se crean instancias de la clase Organizador para gestionar eventos y asistentes. Estas instancias se utilizan para cargar datos desde archivos, mostrar información sobre eventos y asistentes, y guardar datos en archivos al finalizar la ejecución del programa.
Eventos Creados

Los eventos se cargan desde el archivo eventos.txt durante el inicio del programa. Cada línea en este archivo representa un evento con los siguientes atributos:

    Tipo de evento (Conferencia, Seminario, Taller, Charla, Concierto)
    Nombre del evento
    Duración del evento
    Ubicación del evento

Los eventos cargados se almacenan en un vector dinámico dentro de la instancia de Organizador.
Asistentes Creados

Los asistentes se cargan desde el archivo asistentes.txt durante el inicio del programa. Cada línea en este archivo representa un asistente con los siguientes atributos:

    Tipo de asistente (Estudiante, Profesional, Invitado Especial)
    Nombre del asistente
    Edad del asistente
    Ocupación del asistente
    Empresa o institución del asistente

Los asistentes cargados se almacenan en otro vector dinámico dentro de la instancia de Organizador.