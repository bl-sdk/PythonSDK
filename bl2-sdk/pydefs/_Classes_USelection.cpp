#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USelection()
{
    py::class_< USelection,  UObject   >("USelection")
        .def_readonly("UnknownData00", &USelection::UnknownData00)
        .def("StaticClass", &USelection::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}