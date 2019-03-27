#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeBySpeedStruct(py::module &m)
{
    py::class_< FDamageTypeBySpeedStruct >(m, "FDamageTypeBySpeedStruct")
        .def_readwrite("Speed", &FDamageTypeBySpeedStruct::Speed)
        .def_readwrite("DamageType", &FDamageTypeBySpeedStruct::DamageType)
  ;
}