#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowStaggerAnimNodeBlend()
{
    py::class_< UWillowStaggerAnimNodeBlend,  UAnimNodeBlendBase   >("UWillowStaggerAnimNodeBlend")
        .def_readwrite("StaggerNodeIndex", &UWillowStaggerAnimNodeBlend::StaggerNodeIndex)
        .def_readwrite("StaggerNodeWeight", &UWillowStaggerAnimNodeBlend::StaggerNodeWeight)
        .def_readwrite("StaggerNodeWeightTarget", &UWillowStaggerAnimNodeBlend::StaggerNodeWeightTarget)
        .def_readwrite("BlendTimeToGo", &UWillowStaggerAnimNodeBlend::BlendTimeToGo)
        .def_readwrite("AltCondition", &UWillowStaggerAnimNodeBlend::AltCondition)
        .def_readwrite("AdditionalRotationDef", &UWillowStaggerAnimNodeBlend::AdditionalRotationDef)
        .def_readwrite("AdditionalRotationAlt", &UWillowStaggerAnimNodeBlend::AdditionalRotationAlt)
        .def("StaticClass", &UWillowStaggerAnimNodeBlend::StaticClass, py::return_value_policy::reference)
        .def("EndStaggerBlend", &UWillowStaggerAnimNodeBlend::EndStaggerBlend)
        .def("StartStaggerBlend", &UWillowStaggerAnimNodeBlend::StartStaggerBlend)
        .def("PlayStaggerAnimation", &UWillowStaggerAnimNodeBlend::PlayStaggerAnimation)
        .def("StopStaggerAnimation", &UWillowStaggerAnimNodeBlend::StopStaggerAnimation)
        .staticmethod("StaticClass")
  ;
}