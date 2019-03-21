#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger_LOS()
{
    py::class_< ATrigger_LOS,  ATrigger   >("ATrigger_LOS")
        .def_readwrite("PCsWithLOS", &ATrigger_LOS::PCsWithLOS)
        .def("StaticClass", &ATrigger_LOS::StaticClass, py::return_value_policy::reference)
        .def("eventTick", &ATrigger_LOS::eventTick)
        .staticmethod("StaticClass")
  ;
}