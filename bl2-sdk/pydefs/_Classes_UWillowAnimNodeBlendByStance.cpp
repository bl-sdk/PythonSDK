#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendByStance()
{
    class_< UWillowAnimNodeBlendByStance, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendByStance", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendByStance::BlendTime)
        .def_readwrite("ReferencesSpeeds", &UWillowAnimNodeBlendByStance::ReferencesSpeeds)
        .def_readwrite("DefaultStances", &UWillowAnimNodeBlendByStance::DefaultStances)
        .def_readwrite("ChildStanceTypes", &UWillowAnimNodeBlendByStance::ChildStanceTypes)
        .def_readwrite("Scale", &UWillowAnimNodeBlendByStance::Scale)
        .def_readwrite("DiagScale", &UWillowAnimNodeBlendByStance::DiagScale)
        .def_readwrite("CurrentStanceType", &UWillowAnimNodeBlendByStance::CurrentStanceType)
        .def_readwrite("CachedSkelControls", &UWillowAnimNodeBlendByStance::CachedSkelControls)
        .def("StaticClass", &UWillowAnimNodeBlendByStance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}