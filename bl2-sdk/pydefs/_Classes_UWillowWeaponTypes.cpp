#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowWeaponTypes(py::object m)
{
    py::class_< UWillowWeaponTypes,  UInterface   >(m, "UWillowWeaponTypes")
        .def("StaticClass", &UWillowWeaponTypes::StaticClass, py::return_value_policy::reference)
          ;
}