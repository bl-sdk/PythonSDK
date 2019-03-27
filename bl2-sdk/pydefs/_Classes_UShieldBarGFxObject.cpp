#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldBarGFxObject(py::module &m)
{
    py::class_< UShieldBarGFxObject,  UGFxObject   >(m, "UShieldBarGFxObject")
		.def_static("StaticClass", &UShieldBarGFxObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CachedCurrentShield", &UShieldBarGFxObject::CachedCurrentShield)
        .def("SetShield", &UShieldBarGFxObject::SetShield)
          ;
}