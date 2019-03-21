#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_PlayCustomAnimation(py::object m)
{
    py::class_< UAction_PlayCustomAnimation,  UWillowActionSequencePawn   >(m, "UAction_PlayCustomAnimation")
        .def_readwrite("SpecialMove", &UAction_PlayCustomAnimation::SpecialMove)
        .def("StaticClass", &UAction_PlayCustomAnimation::StaticClass, py::return_value_policy::reference)
        .def("eventStop", &UAction_PlayCustomAnimation::eventStop)
        .def("eventStart", &UAction_PlayCustomAnimation::eventStart)
        .def("eventCanRun", &UAction_PlayCustomAnimation::eventCanRun)
          ;
}