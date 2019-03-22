#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALiftExit(py::module &m)
{
    py::class_< ALiftExit,  ANavigationPoint   >(m, "ALiftExit")
        .def_readwrite("MyLiftCenter", &ALiftExit::MyLiftCenter)
        .def("StaticClass", &ALiftExit::StaticClass, py::return_value_policy::reference)
        .def("eventSuggestMovePreparation", &ALiftExit::eventSuggestMovePreparation)
        .def("WaitForLift", &ALiftExit::WaitForLift)
        .def("CanBeReachedFromLiftBy", &ALiftExit::CanBeReachedFromLiftBy)
          ;
}