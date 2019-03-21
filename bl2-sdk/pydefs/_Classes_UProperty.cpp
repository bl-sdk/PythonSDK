#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProperty(py::object m)
{
    py::class_< UProperty,  UField   >(m, "UProperty")
        .def_readonly("UnknownData00", &UProperty::UnknownData00)
        .def("StaticClass", &UProperty::StaticClass, py::return_value_policy::reference)
          ;
}