#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHealthBarGFxObject()
{
    py::class_< UHealthBarGFxObject,  UGFxObject   >("UHealthBarGFxObject")
        .def_readwrite("CachedCurrentHealth", &UHealthBarGFxObject::CachedCurrentHealth)
        .def("StaticClass", &UHealthBarGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetHealth", &UHealthBarGFxObject::SetHealth)
        .staticmethod("StaticClass")
  ;
}