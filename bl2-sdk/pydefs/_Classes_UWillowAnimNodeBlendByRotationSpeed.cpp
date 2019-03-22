#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendByRotationSpeed(py::module &m)
{
    py::class_< UWillowAnimNodeBlendByRotationSpeed,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendByRotationSpeed")
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendByRotationSpeed::BlendTime)
        .def_readwrite("ThresholdRate", &UWillowAnimNodeBlendByRotationSpeed::ThresholdRate)
        .def_readwrite("ReferenceSpeed", &UWillowAnimNodeBlendByRotationSpeed::ReferenceSpeed)
        .def_readwrite("PreviewRotationRate", &UWillowAnimNodeBlendByRotationSpeed::PreviewRotationRate)
          ;
}