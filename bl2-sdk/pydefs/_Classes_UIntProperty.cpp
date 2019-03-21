#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIntProperty(py::object m)
{
    py::class_< UIntProperty,  UProperty   >(m, "UIntProperty")
        .def("StaticClass", &UIntProperty::StaticClass, py::return_value_policy::reference)
          ;
}