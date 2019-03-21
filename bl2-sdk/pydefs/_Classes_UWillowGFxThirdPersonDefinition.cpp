#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxThirdPersonDefinition()
{
    class_< UWillowGFxThirdPersonDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UWillowGFxThirdPersonDefinition", no_init)
        .def_readwrite("CameraInterpSpeed", &UWillowGFxThirdPersonDefinition::CameraInterpSpeed)
        .def_readwrite("CloseInterpTime", &UWillowGFxThirdPersonDefinition::CloseInterpTime)
        .def_readwrite("CloseInterpDistSqThreshold", &UWillowGFxThirdPersonDefinition::CloseInterpDistSqThreshold)
        .def_readwrite("PostProcessInterpolationTime", &UWillowGFxThirdPersonDefinition::PostProcessInterpolationTime)
        .def_readwrite("TabViews", &UWillowGFxThirdPersonDefinition::TabViews)
        .def_readwrite("CameraPitchMin", &UWillowGFxThirdPersonDefinition::CameraPitchMin)
        .def_readwrite("CameraPitchMax", &UWillowGFxThirdPersonDefinition::CameraPitchMax)
        .def_readwrite("MenuRotationSpeed", &UWillowGFxThirdPersonDefinition::MenuRotationSpeed)
        .def_readwrite("MenuRotationSmoothingSpeed", &UWillowGFxThirdPersonDefinition::MenuRotationSmoothingSpeed)
        .def("StaticClass", &UWillowGFxThirdPersonDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}