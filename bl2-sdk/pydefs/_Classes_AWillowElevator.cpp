#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowElevator()
{
    py::class_< AWillowElevator,  AInterpActor   >("AWillowElevator")
        .def_readwrite("FloorIndex", &AWillowElevator::FloorIndex)
        .def_readwrite("DestFloorIndex", &AWillowElevator::DestFloorIndex)
        .def_readwrite("InitialFloorIndex", &AWillowElevator::InitialFloorIndex)
        .def_readwrite("Floors", &AWillowElevator::Floors)
        .def_readwrite("Buttons", &AWillowElevator::Buttons)
        .def("StaticClass", &AWillowElevator::StaticClass, py::return_value_policy::reference)
        .def("ButtonsGoToInUseState", &AWillowElevator::ButtonsGoToInUseState)
        .def("eventButtonsGoToEnabledState", &AWillowElevator::eventButtonsGoToEnabledState)
        .def("OnToggle", &AWillowElevator::OnToggle)
        .def("SetDestFloorIndex", &AWillowElevator::SetDestFloorIndex)
        .def("eventButtonPushed", &AWillowElevator::eventButtonPushed)
        .def("TryGoToInitialState", &AWillowElevator::TryGoToInitialState)
        .def("ChildEncroachingOn", &AWillowElevator::ChildEncroachingOn)
        .def("PostBeginPlay", &AWillowElevator::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}