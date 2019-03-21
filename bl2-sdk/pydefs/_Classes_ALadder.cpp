#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALadder(py::object m)
{
    py::class_< ALadder,  ANavigationPoint   >(m, "ALadder")
        .def_readwrite("MyLadder", &ALadder::MyLadder)
        .def_readwrite("LadderList", &ALadder::LadderList)
        .def("StaticClass", &ALadder::StaticClass, py::return_value_policy::reference)
        .def("eventSuggestMovePreparation", &ALadder::eventSuggestMovePreparation)
          ;
}