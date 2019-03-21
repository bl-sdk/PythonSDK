#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AttemptItemCallout(py::object m)
{
    py::class_< UBehavior_AttemptItemCallout,  UBehaviorBase   >(m, "UBehavior_AttemptItemCallout")
        .def_readwrite("DET_CallOut", &UBehavior_AttemptItemCallout::DET_CallOut)
        .def_readwrite("InstanceDataName", &UBehavior_AttemptItemCallout::InstanceDataName)
        .def("StaticClass", &UBehavior_AttemptItemCallout::StaticClass, py::return_value_policy::reference)
        .def("TestTargetVisibility", &UBehavior_AttemptItemCallout::TestTargetVisibility)
        .def("ApplyBehaviorToContext", &UBehavior_AttemptItemCallout::ApplyBehaviorToContext)
          ;
}