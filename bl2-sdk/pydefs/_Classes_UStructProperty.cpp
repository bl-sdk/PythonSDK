#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStructProperty()
{
    py::class_< UStructProperty,  UProperty   >("UStructProperty")
        .def_readonly("UnknownData00", &UStructProperty::UnknownData00)
        .def("StaticClass", &UStructProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}