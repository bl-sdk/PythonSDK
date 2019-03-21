#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_SetFlight()
{
    py::class_< UAction_SetFlight,  UWillowActionSequencePawn   >("UAction_SetFlight")
        .def_readwrite("Mode", &UAction_SetFlight::Mode)
        .def_readwrite("Anim", &UAction_SetFlight::Anim)
        .def_readwrite("LandPos", &UAction_SetFlight::LandPos)
        .def("StaticClass", &UAction_SetFlight::StaticClass, py::return_value_policy::reference)
        .def("eventStart", &UAction_SetFlight::eventStart)
        .def("eventCanRun", &UAction_SetFlight::eventCanRun)
        .staticmethod("StaticClass")
  ;
}