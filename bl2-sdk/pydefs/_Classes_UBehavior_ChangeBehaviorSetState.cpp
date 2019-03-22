#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeBehaviorSetState(py::module &m)
{
    py::class_< UBehavior_ChangeBehaviorSetState,  UBehaviorBase   >(m, "UBehavior_ChangeBehaviorSetState")
        .def_readwrite("BehaviorSetName", &UBehavior_ChangeBehaviorSetState::BehaviorSetName)
        .def_readwrite("ChangeStatus", &UBehavior_ChangeBehaviorSetState::ChangeStatus)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeBehaviorSetState::ApplyBehaviorToContext)
          ;
}