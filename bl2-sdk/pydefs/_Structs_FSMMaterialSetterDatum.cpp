#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMMaterialSetterDatum()
{
    py::class_< FSMMaterialSetterDatum >("FSMMaterialSetterDatum")
        .def_readwrite("MaterialIndex", &FSMMaterialSetterDatum::MaterialIndex)
        .def_readwrite("TheMaterial", &FSMMaterialSetterDatum::TheMaterial)
  ;
}