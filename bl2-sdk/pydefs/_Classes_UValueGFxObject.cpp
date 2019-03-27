#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UValueGFxObject(py::module &m)
{
    py::class_< UValueGFxObject,  UGFxObject   >(m, "UValueGFxObject")
		.def_static("StaticClass", &UValueGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetValue", &UValueGFxObject::SetValue)
          ;
}