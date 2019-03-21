#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UField()
{
    py::class_< UField,  UObject   >("UField")
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UField::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}