#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PlayAnimation(py::object m)
{
    py::class_< UBehavior_PlayAnimation,  UBehaviorBase   >(m, "UBehavior_PlayAnimation")
        .def_readwrite("AnimName", &UBehavior_PlayAnimation::AnimName)
        .def("StaticClass", &UBehavior_PlayAnimation::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_PlayAnimation::ApplyBehaviorToContext)
          ;
}