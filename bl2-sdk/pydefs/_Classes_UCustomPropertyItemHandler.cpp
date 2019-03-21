#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomPropertyItemHandler()
{
    py::class_< UCustomPropertyItemHandler,  UInterface   >("UCustomPropertyItemHandler")
        .def("StaticClass", &UCustomPropertyItemHandler::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}