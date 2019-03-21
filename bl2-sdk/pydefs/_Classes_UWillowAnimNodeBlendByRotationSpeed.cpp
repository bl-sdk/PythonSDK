#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendByRotationSpeed()
{
    class_< UWillowAnimNodeBlendByRotationSpeed, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendByRotationSpeed", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendByRotationSpeed::BlendTime)
        .def_readwrite("ThresholdRate", &UWillowAnimNodeBlendByRotationSpeed::ThresholdRate)
        .def_readwrite("ReferenceSpeed", &UWillowAnimNodeBlendByRotationSpeed::ReferenceSpeed)
        .def_readwrite("PreviewRotationRate", &UWillowAnimNodeBlendByRotationSpeed::PreviewRotationRate)
        .def("StaticClass", &UWillowAnimNodeBlendByRotationSpeed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}