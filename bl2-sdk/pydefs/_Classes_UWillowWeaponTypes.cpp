#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowWeaponTypes()
{
    py::class_< UWillowWeaponTypes,  UInterface   >("UWillowWeaponTypes")
        .def("StaticClass", &UWillowWeaponTypes::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}