#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface()
{
    py::class_< UInterface,  UObject   >("UInterface")
        .def("StaticClass", &UInterface::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}