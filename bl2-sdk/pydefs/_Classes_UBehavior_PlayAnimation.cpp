#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PlayAnimation(py::module &m)
{
    py::class_< UBehavior_PlayAnimation,  UBehaviorBase   >(m, "UBehavior_PlayAnimation")
		.def_static("StaticClass", &UBehavior_PlayAnimation::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AnimName", &UBehavior_PlayAnimation::AnimName)
        .def("ApplyBehaviorToContext", &UBehavior_PlayAnimation::ApplyBehaviorToContext)
          ;
}