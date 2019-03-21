#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBoolProperty(py::object m)
{
    py::class_< UBoolProperty,  UProperty   >(m, "UBoolProperty")
        .def_readonly("UnknownData00", &UBoolProperty::UnknownData00)
        .def("StaticClass", &UBoolProperty::StaticClass, py::return_value_policy::reference)
          ;
}