#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxThirdPersonDefinition(py::module &m)
{
    py::class_< UWillowGFxThirdPersonDefinition,  UWillowGFxMovie3DDefinition   >(m, "UWillowGFxThirdPersonDefinition")
        .def_readwrite("CameraInterpSpeed", &UWillowGFxThirdPersonDefinition::CameraInterpSpeed)
        .def_readwrite("CloseInterpTime", &UWillowGFxThirdPersonDefinition::CloseInterpTime)
        .def_readwrite("CloseInterpDistSqThreshold", &UWillowGFxThirdPersonDefinition::CloseInterpDistSqThreshold)
        .def_readwrite("PostProcessInterpolationTime", &UWillowGFxThirdPersonDefinition::PostProcessInterpolationTime)
        .def_readwrite("TabViews", &UWillowGFxThirdPersonDefinition::TabViews)
        .def_readwrite("CameraPitchMin", &UWillowGFxThirdPersonDefinition::CameraPitchMin)
        .def_readwrite("CameraPitchMax", &UWillowGFxThirdPersonDefinition::CameraPitchMax)
        .def_readwrite("MenuRotationSpeed", &UWillowGFxThirdPersonDefinition::MenuRotationSpeed)
        .def_readwrite("MenuRotationSmoothingSpeed", &UWillowGFxThirdPersonDefinition::MenuRotationSmoothingSpeed)
        .def("StaticClass", &UWillowGFxThirdPersonDefinition::StaticClass, py::return_value_policy::reference)
          ;
}