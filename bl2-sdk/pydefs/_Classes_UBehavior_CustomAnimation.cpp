#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CustomAnimation()
{
    py::class_< UBehavior_CustomAnimation,  UBehaviorBase   >("UBehavior_CustomAnimation")
        .def_readwrite("Reaction", &UBehavior_CustomAnimation::Reaction)
        .def_readwrite("CustomAnimNodeName", &UBehavior_CustomAnimation::CustomAnimNodeName)
        .def_readwrite("AnimName", &UBehavior_CustomAnimation::AnimName)
        .def_readwrite("AnimDuration", &UBehavior_CustomAnimation::AnimDuration)
        .def_readwrite("BlendInTime", &UBehavior_CustomAnimation::BlendInTime)
        .def_readwrite("BlendOutTime", &UBehavior_CustomAnimation::BlendOutTime)
        .def_readwrite("AnimRate", &UBehavior_CustomAnimation::AnimRate)
        .def("StaticClass", &UBehavior_CustomAnimation::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CustomAnimation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}