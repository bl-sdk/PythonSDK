#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger_PawnsOnly()
{
    py::class_< ATrigger_PawnsOnly,  ATrigger   >("ATrigger_PawnsOnly")
        .def("StaticClass", &ATrigger_PawnsOnly::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}