#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetPendingLevel()
{
    py::class_< UNetPendingLevel,  UPendingLevel   >("UNetPendingLevel")
        .def("StaticClass", &UNetPendingLevel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}