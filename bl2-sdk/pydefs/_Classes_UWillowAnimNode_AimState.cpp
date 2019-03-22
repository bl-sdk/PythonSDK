#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_AimState(py::module &m)
{
    py::class_< UWillowAnimNode_AimState,  UAnimNodeBlendList   >(m, "UWillowAnimNode_AimState")
        .def_readwrite("TransitionAnims", &UWillowAnimNode_AimState::TransitionAnims)
        .def_readwrite("CurrentModeChildIndex", &UWillowAnimNode_AimState::CurrentModeChildIndex)
        .def_readwrite("TransitionBlendOutTime", &UWillowAnimNode_AimState::TransitionBlendOutTime)
        .def("StaticClass", &UWillowAnimNode_AimState::StaticClass, py::return_value_policy::reference)
          ;
}