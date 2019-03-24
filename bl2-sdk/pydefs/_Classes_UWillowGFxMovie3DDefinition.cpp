#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovie3DDefinition(py::module &m)
{
    py::class_< UWillowGFxMovie3DDefinition,  UGFxMovieDefinition   >(m, "UWillowGFxMovie3DDefinition")
		.def_static("StaticClass", &UWillowGFxMovie3DDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("View3DFOV", &UWillowGFxMovie3DDefinition::View3DFOV)
        .def_readwrite("View3DScale", &UWillowGFxMovie3DDefinition::View3DScale)
        .def_readwrite("View3DTrans", &UWillowGFxMovie3DDefinition::View3DTrans)
        .def_readwrite("View3DRot", &UWillowGFxMovie3DDefinition::View3DRot)
        .def_readwrite("SplitscreenFOVScalar", &UWillowGFxMovie3DDefinition::SplitscreenFOVScalar)
        .def_readwrite("SplitscreenSizeScalar", &UWillowGFxMovie3DDefinition::SplitscreenSizeScalar)
        .def_readwrite("VerticalSplitscreenPanning", &UWillowGFxMovie3DDefinition::VerticalSplitscreenPanning)
        .def_readwrite("VerticalSplitscreenPanning_Spread", &UWillowGFxMovie3DDefinition::VerticalSplitscreenPanning_Spread)
          ;
}