#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALadder()
{
    py::class_< ALadder,  ANavigationPoint   >("ALadder")
        .def_readwrite("MyLadder", &ALadder::MyLadder)
        .def_readwrite("LadderList", &ALadder::LadderList)
        .def("StaticClass", &ALadder::StaticClass, py::return_value_policy::reference)
        .def("eventSuggestMovePreparation", &ALadder::eventSuggestMovePreparation)
        .staticmethod("StaticClass")
  ;
}