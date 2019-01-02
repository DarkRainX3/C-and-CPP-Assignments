//  ENSF 337- Fall 2018 lab 7, Exercise C
//  cplx.cpp
//  By: M. Moussavi 

#include "cplx.h"

Cplx::Cplx(double real , double imag ): realM(real), imagM(imag) {
    // point one
}

double Cplx::getRealPart() const {
    return realM;
}

double Cplx::getImaginaryPart( ) const {
    return imagM;
}

void Cplx::setRealPart(double arg) {
    
    realM = arg;
}

void Cplx::setImaginaryPart(double arg) {
    imagM = arg;
    // point two
}



