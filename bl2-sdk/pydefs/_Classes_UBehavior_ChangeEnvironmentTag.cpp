#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeEnvironmentTag(py::object m)
{
    py::class_< UBehavior_ChangeEnvironmentTag,  UBehaviorBase   >(m, "UBehavior_ChangeEnvironmentTag")
        .def_readwrite("Action", &UBehavior_ChangeEnvironmentTag::Action)
        .def_readwrite("EnvironmentTag", &UBehavior_ChangeEnvironmentTag::EnvironmentTag)
        .def("StaticClass", &UBehavior_ChangeEnvironmentTag::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeEnvironmentTag::ApplyBehaviorToContext)
          ;
}