#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Falling(py::module &m)
{
    py::class_< UWillowAnimNode_Falling,  UAnimNodeBlendList   >(m, "UWillowAnimNode_Falling")
        .def_readwrite("DelayBeforeStartFalling", &UWillowAnimNode_Falling::DelayBeforeStartFalling)
        .def_readwrite("MinStartFallingVelocity", &UWillowAnimNode_Falling::MinStartFallingVelocity)
        .def_readwrite("InterruptEndFallMovementSpeed", &UWillowAnimNode_Falling::InterruptEndFallMovementSpeed)
        .def_readwrite("StartFallingTime", &UWillowAnimNode_Falling::StartFallingTime)
        .def_readwrite("StuckFallingTimer", &UWillowAnimNode_Falling::StuckFallingTimer)
        .def_readwrite("ChildBlendInTime", &UWillowAnimNodeBlendList::ChildBlendInTime)
        .def("StaticClass", &UWillowAnimNode_Falling::StaticClass, py::return_value_policy::reference)
          ;
}