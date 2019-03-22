#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_LevelOff(py::module &m)
{
    py::class_< UProjectileBehavior_LevelOff,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_LevelOff")
        .def_readwrite("DesiredWorldZToLevelOff", &UProjectileBehavior_LevelOff::DesiredWorldZToLevelOff)
        .def_readwrite("TurnSpeed", &UProjectileBehavior_LevelOff::TurnSpeed)
        .def("StaticClass", &UProjectileBehavior_LevelOff::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_LevelOff::ApplyBehaviorToContext)
          ;
}