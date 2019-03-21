#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkelMaterialSetterDatum()
{
    class_< FSkelMaterialSetterDatum >("FSkelMaterialSetterDatum", no_init)
        .def_readwrite("MaterialIndex", &FSkelMaterialSetterDatum::MaterialIndex)
        .def_readwrite("TheMaterial", &FSkelMaterialSetterDatum::TheMaterial)
  ;
}