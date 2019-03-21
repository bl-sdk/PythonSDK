#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkelMaterialSetterDatum()
{
    py::class_< FSkelMaterialSetterDatum >("FSkelMaterialSetterDatum")
        .def_readwrite("MaterialIndex", &FSkelMaterialSetterDatum::MaterialIndex)
        .def_readwrite("TheMaterial", &FSkelMaterialSetterDatum::TheMaterial)
  ;
}