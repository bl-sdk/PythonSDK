#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPendingLevel()
{
    py::class_< UPendingLevel,  ULevelBase   >("UPendingLevel")
        .def_readonly("UnknownData00", &UPendingLevel::UnknownData00)
        .def("StaticClass", &UPendingLevel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}