#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeBehaviorSetState()
{
    py::class_< UBehavior_ChangeBehaviorSetState,  UBehaviorBase   >("UBehavior_ChangeBehaviorSetState")
        .def_readwrite("BehaviorSetName", &UBehavior_ChangeBehaviorSetState::BehaviorSetName)
        .def_readwrite("ChangeStatus", &UBehavior_ChangeBehaviorSetState::ChangeStatus)
        .def("StaticClass", &UBehavior_ChangeBehaviorSetState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeBehaviorSetState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}