#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UValueGFxObject()
{
    py::class_< UValueGFxObject,  UGFxObject   >("UValueGFxObject")
        .def("StaticClass", &UValueGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetValue", &UValueGFxObject::SetValue)
        .staticmethod("StaticClass")
  ;
}