#include <iostream>
#include "Builder/Computer.cpp"

int main() {
    //se obtiene una instancia del builder de Computer.
    auto *builder = new Builder();
    //se "Construye" la instancia con los valores seleccionados, los que no se agreguen, se quedarán como "stock"
    Computer pc = *builder->withProcessor("I9-9900K") // el hacer que los métodos del Builder retornen una referencia a si mismo, permite
        ->withGPU("RTX 3090")//                              agregar las llamadas de esta manera que facilita la visualización del código.
        ->withRam(32)
        ->withSpace(4)
        ->withCase("Corsair Mini-ITX")
        ->withCooler("All In One Liquid loop 240mm")->build();

    pc.show(); // se muestra en pantalla.
    return 0;
}
