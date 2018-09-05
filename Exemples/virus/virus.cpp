#include "virus.h"

Virus::Virus(std::string nome, double forca){
    _nome  = nome;
    _forca = forca;
}

std::string Virus::get_nome(){ // '::' indica qual classe pertence o m�todo
    return _nome;
}

double Virus::get_forca(){ // implementa��o do m�todo
    return _forca;
}

/* Tamb�m podemos implementtar:
THIS � um ponteiro para o pr�rpio objeto!
Virus::Virus(std::string nome, double forca){
    this->nome  = nome;
    this->forca = forca;
}

std::string Virus::get_nome(){
    return this->nome;
}

double Virus::get_forca(){
    return this->forca;
}
*/
