#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeBySpeedStruct(py::object m)
{
    py::class_< FDamageTypeBySpeedStruct >(m, "FDamageTypeBySpeedStruct")
        .def_readwrite("Speed", &FDamageTypeBySpeedStruct::Speed)
        .def_readwrite("DamageType", &FDamageTypeBySpeedStruct::DamageType)
  ;
}