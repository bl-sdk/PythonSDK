#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_FaceThreat()
{
    py::class_< UAction_FaceThreat,  UActionSequencePawn   >("UAction_FaceThreat")
        .def("StaticClass", &UAction_FaceThreat::StaticClass, py::return_value_policy::reference)
        .def("eventStopSequence", &UAction_FaceThreat::eventStopSequence)
        .staticmethod("StaticClass")
  ;
}