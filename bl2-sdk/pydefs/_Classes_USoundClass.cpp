#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoundClass(py::module &m)
{
    py::class_< USoundClass,  UObject   >(m, "USoundClass")
		.def_static("StaticClass", &USoundClass::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Properties", &USoundClass::Properties)
        .def_readwrite("ChildClassNames", &USoundClass::ChildClassNames)
          ;
}