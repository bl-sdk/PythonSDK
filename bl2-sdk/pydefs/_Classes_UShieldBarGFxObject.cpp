#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldBarGFxObject()
{
    py::class_< UShieldBarGFxObject,  UGFxObject   >("UShieldBarGFxObject")
        .def_readwrite("CachedCurrentShield", &UShieldBarGFxObject::CachedCurrentShield)
        .def("StaticClass", &UShieldBarGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetShield", &UShieldBarGFxObject::SetShield)
        .staticmethod("StaticClass")
  ;
}