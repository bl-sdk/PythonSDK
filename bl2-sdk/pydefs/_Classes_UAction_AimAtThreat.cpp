#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_AimAtThreat(py::module &m)
{
    py::class_< UAction_AimAtThreat,  UWillowActionSequencePawn   >(m, "UAction_AimAtThreat")
        .def("eventStart", &UAction_AimAtThreat::eventStart)
        .def("eventCanRun", &UAction_AimAtThreat::eventCanRun)
          ;
}