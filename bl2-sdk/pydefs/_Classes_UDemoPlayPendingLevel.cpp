#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDemoPlayPendingLevel()
{
    py::class_< UDemoPlayPendingLevel,  UPendingLevel   >("UDemoPlayPendingLevel")
        .def("StaticClass", &UDemoPlayPendingLevel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}