#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIntProperty()
{
    py::class_< UIntProperty,  UProperty   >("UIntProperty")
        .def("StaticClass", &UIntProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}