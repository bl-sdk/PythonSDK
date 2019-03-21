#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStrProperty(py::object m)
{
    py::class_< UStrProperty,  UProperty   >(m, "UStrProperty")
        .def("StaticClass", &UStrProperty::StaticClass, py::return_value_policy::reference)
          ;
}