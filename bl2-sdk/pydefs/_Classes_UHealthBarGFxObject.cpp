#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHealthBarGFxObject(py::module &m)
{
    py::class_< UHealthBarGFxObject,  UGFxObject   >(m, "UHealthBarGFxObject")
		.def_static("StaticClass", &UHealthBarGFxObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CachedCurrentHealth", &UHealthBarGFxObject::CachedCurrentHealth)
        .def("SetHealth", &UHealthBarGFxObject::SetHealth)
          ;
}