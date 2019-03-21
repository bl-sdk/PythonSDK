#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_ShootThreatWhenInView()
{
    py::class_< UAction_ShootThreatWhenInView,  UWillowActionSequencePawn   >("UAction_ShootThreatWhenInView")
        .def("StaticClass", &UAction_ShootThreatWhenInView::StaticClass, py::return_value_policy::reference)
        .def("eventStop", &UAction_ShootThreatWhenInView::eventStop)
        .def("eventStart", &UAction_ShootThreatWhenInView::eventStart)
        .def("eventCanRun", &UAction_AimAtThreat::eventCanRun)
        .staticmethod("StaticClass")
  ;
}