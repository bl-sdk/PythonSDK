#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_Burrow(py::object m)
{
    py::class_< UAction_Burrow,  UWillowActionSequencePawn   >(m, "UAction_Burrow")
        .def_readwrite("BurrowEnter", &UAction_Burrow::BurrowEnter)
        .def_readwrite("BurrowExit", &UAction_Burrow::BurrowExit)
        .def("StaticClass", &UAction_Burrow::StaticClass, py::return_value_policy::reference)
        .def("CheckCloaked", &UAction_Burrow::CheckCloaked)
        .def("SafeToUncloak", &UAction_Burrow::SafeToUncloak)
        .def("ForceUncloak", &UAction_Burrow::ForceUncloak)
        .def("ForceCloak", &UAction_Burrow::ForceCloak)
        .def("CheckStateTransition", &UAction_Burrow::CheckStateTransition)
        .def("eventStart", &UAction_Burrow::eventStart)
          ;
}