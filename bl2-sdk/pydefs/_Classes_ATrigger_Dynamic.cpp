#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger_Dynamic()
{
    py::class_< ATrigger_Dynamic,  ATrigger   >("ATrigger_Dynamic")
        .def("StaticClass", &ATrigger_Dynamic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}