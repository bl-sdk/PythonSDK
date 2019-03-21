#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSMMaterialSetterDatum()
{
    class_< FSMMaterialSetterDatum >("FSMMaterialSetterDatum", no_init)
        .def_readwrite("MaterialIndex", &FSMMaterialSetterDatum::MaterialIndex)
        .def_readwrite("TheMaterial", &FSMMaterialSetterDatum::TheMaterial)
  ;
}