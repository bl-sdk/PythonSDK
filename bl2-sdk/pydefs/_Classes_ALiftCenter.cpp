#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALiftCenter(py::module &m)
{
    py::class_< ALiftCenter,  ANavigationPoint   >(m, "ALiftCenter")
        .def_readwrite("MyLift", &ALiftCenter::MyLift)
        .def_readwrite("MaxDist2D", &ALiftCenter::MaxDist2D)
        .def_readwrite("LiftOffset", &ALiftCenter::LiftOffset)
        .def_readwrite("CollisionHeight", &ALiftCenter::CollisionHeight)
        .def_readwrite("LiftTrigger", &ALiftCenter::LiftTrigger)
        .def("StaticClass", &ALiftCenter::StaticClass, py::return_value_policy::reference)
        .def("ProceedWithMove", &ALiftCenter::ProceedWithMove)
        .def("eventSuggestMovePreparation", &ALiftCenter::eventSuggestMovePreparation)
        .def("eventSpecialHandling", &ALiftCenter::eventSpecialHandling, py::return_value_policy::reference)
        .def("eventPostBeginPlay", &ALiftCenter::eventPostBeginPlay)
          ;
}