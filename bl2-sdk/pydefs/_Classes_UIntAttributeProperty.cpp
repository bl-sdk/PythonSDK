#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIntAttributeProperty(py::module &m)
{
    py::class_< UIntAttributeProperty,  UIntProperty   >(m, "UIntAttributeProperty")
        .def("StaticClass", &UIntAttributeProperty::StaticClass, py::return_value_policy::reference)
          ;
}