#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_AimAtThreat()
{
    py::class_< UAction_AimAtThreat,  UWillowActionSequencePawn   >("UAction_AimAtThreat")
        .def("StaticClass", &UAction_AimAtThreat::StaticClass, py::return_value_policy::reference)
        .def("eventStart", &UAction_AimAtThreat::eventStart)
        .def("eventCanRun", &UAction_AimAtThreat::eventCanRun)
        .staticmethod("StaticClass")
  ;
}