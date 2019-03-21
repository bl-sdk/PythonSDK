#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDeclarations()
{
    py::class_< UWillowDeclarations,  UObject   >("UWillowDeclarations")
        .def("StaticClass", &UWillowDeclarations::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}