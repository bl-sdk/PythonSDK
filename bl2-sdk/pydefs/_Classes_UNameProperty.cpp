#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNameProperty()
{
    py::class_< UNameProperty,  UProperty   >("UNameProperty")
        .def("StaticClass", &UNameProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}