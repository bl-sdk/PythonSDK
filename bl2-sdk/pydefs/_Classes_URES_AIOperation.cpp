#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_AIOperation()
{
    py::class_< URES_AIOperation,  UActionResource   >("URES_AIOperation")
        .def("StaticClass", &URES_AIOperation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}