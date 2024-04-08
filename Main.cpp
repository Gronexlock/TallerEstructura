//Diego Castro Olivares
//18.633.660-7

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

// Clase base abstracta para representar un evento
class Evento {
protected:
    std::string nombre;
    std::string tipo;
    std::string duracion;
    std::string ubicacion;
public:
    Evento(const std::string& nombre, const std::string& tipo, const std::string& duracion, const std::string& ubicacion) : nombre(nombre), tipo(tipo), duracion(duracion), ubicacion(ubicacion) {}
    virtual ~Evento() {}
    virtual void mostrarInfo() const = 0; // Función virtual pura para mostrar información del evento
    virtual std::string serializar() const = 0; // Función virtual pura para serializar el evento
};

// Clase derivada de Evento para representar una conferencia
class Conferencia : public Evento {
public:
    Conferencia(const std::string& nombre, const std::string& duracion, const std::string& ubicacion) : Evento(nombre, "Conferencia", duracion, ubicacion) {}

    // Implementación de la función virtual para mostrar información del evento
    void mostrarInfo() const override {
        std::cout << "Conferencia: " << nombre << ", Duración: " << duracion << ", Ubicación: " << ubicacion << std::endl;
    }

    // Implementación de la función virtual para serializar el evento
    std::string serializar() const override {
        return "Conferencia," + nombre + "," + duracion + "," + ubicacion;
    }
};

// Clase derivada de Evento para representar un seminario
class Seminario : public Evento {
public:
    Seminario(const std::string& nombre, const std::string& duracion, const std::string& ubicacion) : Evento(nombre, "Seminario", duracion, ubicacion) {}

    // Implementación de la función virtual para mostrar información del evento
    void mostrarInfo() const override {
        std::cout << "Seminario: " << nombre << ", Duración: " << duracion << ", Ubicación: " << ubicacion << std::endl;
    }

    // Implementación de la función virtual para serializar el evento
    std::string serializar() const override {
        return "Seminario," + nombre + "," + duracion + "," + ubicacion;
    }
};

// Clase derivada de Evento para representar un taller
class Taller : public Evento {
public:
    Taller(const std::string& nombre, const std::string& duracion, const std::string& ubicacion) : Evento(nombre, "Taller", duracion, ubicacion) {}

    // Implementación de la función virtual para mostrar información del evento
    void mostrarInfo() const override {
        std::cout << "Taller: " << nombre << ", Duración: " << duracion << ", Ubicación: " << ubicacion << std::endl;
    }

    // Implementación de la función virtual para serializar el evento
    std::string serializar() const override {
        return "Taller," + nombre + "," + duracion + "," + ubicacion;
    }
};

// Clase derivada de Evento para representar una charla
class Charla : public Evento {
public:
    Charla(const std::string& nombre, const std::string& duracion, const std::string& ubicacion) : Evento(nombre, "Charla", duracion, ubicacion) {}

    // Implementación de la función virtual para mostrar información del evento
    void mostrarInfo() const override {
        std::cout << "Charla: " << nombre << ", Duración: " << duracion << ", Ubicación: " << ubicacion << std::endl;
    }

    // Implementación de la función virtual para serializar el evento
    std::string serializar() const override {
        return "Charla," + nombre + "," + duracion + "," + ubicacion;
    }
};

// Clase derivada de Evento para representar un concierto
class Concierto : public Evento {
public:
    Concierto(const std::string& nombre, const std::string& duracion, const std::string& ubicacion) : Evento(nombre, "Concierto", duracion, ubicacion) {}

    // Implementación de la función virtual para mostrar información del evento
    void mostrarInfo() const override {
        std::cout << "Concierto: " << nombre << ", Duración: " << duracion << ", Ubicación: " << ubicacion << std::endl;
    }

    // Implementación de la función virtual para serializar el evento
    std::string serializar() const override {
        return "Concierto," + nombre + "," + duracion + "," + ubicacion;
    }
};

// Clase base abstracta para representar un asistente
class Asistente {
protected:
    std::string nombre;
    int edad;
    std::string ocupacion;
    std::string empresa;
public:
    Asistente(const std::string& nombre, int edad, const std::string& ocupacion, const std::string& empresa) : nombre(nombre), edad(edad), ocupacion(ocupacion), empresa(empresa) {}
    virtual ~Asistente() {}
    virtual void mostrarInfo() const = 0; // Función virtual pura para mostrar información del asistente
    virtual std::string serializar() const = 0; // Función virtual pura para serializar el asistente
};

// Clase derivada de Asistente para representar un estudiante
class Estudiante : public Asistente {
public:
    Estudiante(const std::string& nombre, int edad, const std::string& ocupacion, const std::string& empresa) : Asistente(nombre, edad, ocupacion, empresa) {}

    // Implementación de la función virtual para mostrar información del asistente
    void mostrarInfo() const override {
        std::cout << "Estudiante: " << nombre << ", Edad: " << edad << ", Ocupación: " << ocupacion << ", Empresa/Institución: " << empresa << std::endl;
    }

    // Implementación de la función virtual para serializar el asistente
    std::string serializar() const override {
        return "Estudiante," + nombre + "," + std::to_string(edad) + "," + ocupacion + "," + empresa;
    }
};

// Clase derivada de Asistente para representar un profesional
class Profesional : public Asistente {
public:
    Profesional(const std::string& nombre, int edad, const std::string& ocupacion, const std::string& empresa) : Asistente(nombre, edad, ocupacion, empresa) {}

    // Implementación de la función virtual para mostrar información del asistente
    void mostrarInfo() const override {
        std::cout << "Profesional: " << nombre << ", Edad: " << edad << ", Ocupación: " << ocupacion << ", Empresa/Institución: " << empresa << std::endl;
    }

    // Implementación de la función virtual para serializar el asistente
    std::string serializar() const override {
        return "Profesional," + nombre + "," + std::to_string(edad) + "," + ocupacion + "," + empresa;
    }
};

// Clase derivada de Asistente para representar un invitado especial
class InvitadoEspecial : public Asistente {
public:
    InvitadoEspecial(const std::string& nombre, int edad, const std::string& ocupacion, const std::string& empresa) : Asistente(nombre, edad, ocupacion, empresa) {}

    // Implementación de la función virtual para mostrar información del asistente
    void mostrarInfo() const override {
        std::cout << "Invitado Especial: " << nombre << ", Edad: " << edad << ", Ocupación: " << ocupacion << ", Empresa/Institución: " << empresa << std::endl;
    }

    // Implementación de la función virtual para serializar el asistente
    std::string serializar() const override {
        return "InvitadoEspecial," + nombre + "," + std::to_string(edad) + "," + ocupacion + "," + empresa;
    }
};

// Clase para gestionar eventos y asistentes
class Organizador {
private:
    std::vector<Evento*> eventos; // Vector dinámico para almacenar eventos
    std::vector<Asistente*> asistentes; // Vector dinámico para almacenar asistentes

    // Función privada para limpiar la memoria asignada para los eventos
    void limpiarEventos() {
        for (auto evento : eventos)
            delete evento;
        eventos.clear();
    }

    // Función privada para limpiar la memoria asignada para los asistentes
    void limpiarAsistentes() {
        for (auto asistente : asistentes)
            delete asistente;
        asistentes.clear();
    }

public:
    ~Organizador() {
        limpiarEventos(); // Limpia la memoria asignada para los eventos al destruir el objeto Organizador
        limpiarAsistentes(); // Limpia la memoria asignada para los asistentes al destruir el objeto Organizador
    }

    // Función para agregar un evento al vector de eventos
    void agregarEvento(Evento* evento) {
        eventos.push_back(evento);
    }

    // Función para agregar un asistente al vector de asistentes
    void agregarAsistente(Asistente* asistente) {
        asistentes.push_back(asistente);
    }

    // Función para guardar los datos de eventos y asistentes en archivos
    void guardarDatos(const std::string& nombreArchivoEventos, const std::string& nombreArchivoAsistentes) {
        std::ofstream archivoEventos(nombreArchivoEventos); // Abre un archivo de salida para eventos
        if (!archivoEventos) {
            std::cerr << "Error al abrir el archivo de eventos para escritura" << std::endl;
            return;
        }

        // Itera sobre cada evento y lo escribe en el archivo
        for (const auto& evento : eventos)
            archivoEventos << evento->serializar() << std::endl;

        archivoEventos.close(); // Cierra el archivo de eventos

        std::ofstream archivoAsistentes(nombreArchivoAsistentes); // Abre un archivo de salida para asistentes
        if (!archivoAsistentes) {
            std::cerr << "Error al abrir el archivo de asistentes para escritura" << std::endl;
            return;
        }

        // Itera sobre cada asistente y lo escribe en el archivo
        for (const auto& asistente : asistentes)
            archivoAsistentes << asistente->serializar() << std::endl;

        archivoAsistentes.close(); // Cierra el archivo de asistentes
    }

    // Función para cargar eventos desde un archivo
    void cargarEventosDesdeArchivo(const std::string& nombreArchivo) {
        std::ifstream archivo(nombreArchivo); // Abre un archivo de entrada para eventos
        if (!archivo) {
            std::cerr << "Error al abrir el archivo de eventos" << std::endl;
            return;
        }

        limpiarEventos(); // Limpia los eventos existentes antes de cargar nuevos

        std::string linea;
        while (std::getline(archivo, linea)) {
            std::istringstream iss(linea);
            std::string tipo, nombre, duracion, ubicacion;
            if (!(iss >> tipo >> nombre >> duracion >> ubicacion)) {
                std::cerr << "Error al leer los datos del evento" << std::endl;
                continue;
            }
            Evento* evento = nullptr;
            if (tipo == "Conferencia") {
                evento = new Conferencia(nombre, duracion, ubicacion);
            } else if (tipo == "Seminario") {
                evento = new Seminario(nombre, duracion, ubicacion);
            } else if (tipo == "Taller") {
                evento = new Taller(nombre, duracion, ubicacion);
            } else if (tipo == "Charla") {
                evento = new Charla(nombre, duracion, ubicacion);
            } else if (tipo == "Concierto") {
                evento = new Concierto(nombre, duracion, ubicacion);
            }
            if (evento) {
                agregarEvento(evento);
            }
        }

        archivo.close(); // Cierra el archivo de eventos
    }

    // Función para cargar asistentes desde un archivo
    void cargarAsistentesDesdeArchivo(const std::string& nombreArchivo) {
        std::ifstream archivo(nombreArchivo); // Abre un archivo de entrada para asistentes
        if (!archivo) {
            std::cerr << "Error al abrir el archivo de asistentes" << std::endl;
            return;
        }

        limpiarAsistentes(); // Limpia los asistentes existentes antes de cargar nuevos

        std::string linea;
        while (std::getline(archivo, linea)) {
            std::istringstream iss(linea);
            std::string tipo, nombre, ocupacion, empresa;
            int edad;
            if (!(iss >> tipo >> nombre >> edad >> ocupacion >> empresa)) {
                std::cerr << "Error al leer los datos del asistente" << std::endl;
                continue;
            }
            Asistente* asistente = nullptr;
            if (tipo == "Estudiante") {
                asistente = new Estudiante(nombre, edad, ocupacion, empresa);
            } else if (tipo == "Profesional") {
                asistente = new Profesional(nombre, edad, ocupacion, empresa);
            } else if (tipo == "InvitadoEspecial") {
                asistente = new InvitadoEspecial(nombre, edad, ocupacion, empresa);
            }
            if (asistente) {
                agregarAsistente(asistente);
            }
        }

        archivo.close(); // Cierra el archivo de asistentes
    }

    // Función para mostrar información de los eventos
    void mostrarEventos() const {
        std::cout << "Eventos:" << std::endl;
        for (const auto& evento : eventos) {
            evento->mostrarInfo();
        }
    }

    // Función para mostrar información de los asistentes
    void mostrarAsistentes() const {
        std::cout << "Asistentes:" << std::endl;
        for (const auto& asistente : asistentes) {
            asistente->mostrarInfo();
        }
    }
};

int main() {
    Organizador organizador;

    // Cargar datos desde archivos
    organizador.cargarEventosDesdeArchivo("eventos.txt"); // Carga eventos desde el archivo de eventos
    organizador.cargarAsistentesDesdeArchivo("asistentes.txt"); // Carga asistentes desde el archivo de asistentes

    // Mostrar información
    organizador.mostrarEventos(); // Muestra la lista de eventos
    organizador.mostrarAsistentes(); // Muestra la lista de asistentes

    // Guardar datos antes de salir
    organizador.guardarDatos("eventos_guardados.txt", "asistentes_guardados.txt"); // Guarda los datos de eventos y asistentes en archivos

    return 0;
}