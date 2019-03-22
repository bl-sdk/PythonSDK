#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBodyWeaponActionData(py::module &m)
{
    py::class_< FBodyWeaponActionData >(m, "FBodyWeaponActionData")
        .def_readwrite("Action", &FBodyWeaponActionData::Action)
        .def_readwrite("Expression", &FBodyWeaponActionData::Expression)
        .def_readwrite("Animations", &FBodyWeaponActionData::Animations)
  ;
}