#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFloatProperty()
{
    py::class_< UFloatProperty,  UProperty   >("UFloatProperty")
        .def("StaticClass", &UFloatProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}