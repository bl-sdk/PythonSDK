#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldBarGFxObject(py::object m)
{
    py::class_< UShieldBarGFxObject,  UGFxObject   >(m, "UShieldBarGFxObject")
        .def_readwrite("CachedCurrentShield", &UShieldBarGFxObject::CachedCurrentShield)
        .def("StaticClass", &UShieldBarGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetShield", &UShieldBarGFxObject::SetShield)
          ;
}