#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_SinglePopulationDeath()
{
    py::class_< USeqEvent_SinglePopulationDeath,  USequenceEvent   >("USeqEvent_SinglePopulationDeath")
        .def("StaticClass", &USeqEvent_SinglePopulationDeath::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}