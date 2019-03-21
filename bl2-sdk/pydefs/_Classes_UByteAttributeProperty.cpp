#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UByteAttributeProperty(py::object m)
{
    py::class_< UByteAttributeProperty,  UByteProperty   >(m, "UByteAttributeProperty")
        .def_readonly("UnknownData00", &UByteAttributeProperty::UnknownData00)
        .def("StaticClass", &UByteAttributeProperty::StaticClass, py::return_value_policy::reference)
          ;
}