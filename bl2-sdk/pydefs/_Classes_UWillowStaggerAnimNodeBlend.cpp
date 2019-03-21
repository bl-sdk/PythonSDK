#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowStaggerAnimNodeBlend()
{
    class_< UWillowStaggerAnimNodeBlend, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UWillowStaggerAnimNodeBlend", no_init)
        .def_readwrite("StaggerNodeIndex", &UWillowStaggerAnimNodeBlend::StaggerNodeIndex)
        .def_readwrite("StaggerNodeWeight", &UWillowStaggerAnimNodeBlend::StaggerNodeWeight)
        .def_readwrite("StaggerNodeWeightTarget", &UWillowStaggerAnimNodeBlend::StaggerNodeWeightTarget)
        .def_readwrite("BlendTimeToGo", &UWillowStaggerAnimNodeBlend::BlendTimeToGo)
        .def_readwrite("AltCondition", &UWillowStaggerAnimNodeBlend::AltCondition)
        .def_readwrite("AdditionalRotationDef", &UWillowStaggerAnimNodeBlend::AdditionalRotationDef)
        .def_readwrite("AdditionalRotationAlt", &UWillowStaggerAnimNodeBlend::AdditionalRotationAlt)
        .def("StaticClass", &UWillowStaggerAnimNodeBlend::StaticClass, return_value_policy< reference_existing_object >())
        .def("EndStaggerBlend", &UWillowStaggerAnimNodeBlend::EndStaggerBlend)
        .def("StartStaggerBlend", &UWillowStaggerAnimNodeBlend::StartStaggerBlend)
        .def("PlayStaggerAnimation", &UWillowStaggerAnimNodeBlend::PlayStaggerAnimation)
        .def("StopStaggerAnimation", &UWillowStaggerAnimNodeBlend::StopStaggerAnimation)
        .staticmethod("StaticClass")
  ;
}