#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowElevator()
{
    class_< AWillowElevator, bases< AInterpActor >  , boost::noncopyable>("AWillowElevator", no_init)
        .def_readwrite("FloorIndex", &AWillowElevator::FloorIndex)
        .def_readwrite("DestFloorIndex", &AWillowElevator::DestFloorIndex)
        .def_readwrite("InitialFloorIndex", &AWillowElevator::InitialFloorIndex)
        .def_readwrite("Floors", &AWillowElevator::Floors)
        .def_readwrite("Buttons", &AWillowElevator::Buttons)
        .def("StaticClass", &AWillowElevator::StaticClass, return_value_policy< reference_existing_object >())
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