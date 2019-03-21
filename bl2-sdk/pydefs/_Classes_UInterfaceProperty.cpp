#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterfaceProperty(py::object m)
{
    py::class_< UInterfaceProperty,  UProperty   >(m, "UInterfaceProperty")
        .def_readonly("UnknownData00", &UInterfaceProperty::UnknownData00)
        .def("StaticClass", &UInterfaceProperty::StaticClass, py::return_value_policy::reference)
          ;
}