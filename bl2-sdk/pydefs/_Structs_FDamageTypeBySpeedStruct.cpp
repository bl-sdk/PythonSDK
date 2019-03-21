#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeBySpeedStruct()
{
    py::class_< FDamageTypeBySpeedStruct >("FDamageTypeBySpeedStruct")
        .def_readwrite("Speed", &FDamageTypeBySpeedStruct::Speed)
        .def_readwrite("DamageType", &FDamageTypeBySpeedStruct::DamageType)
  ;
}