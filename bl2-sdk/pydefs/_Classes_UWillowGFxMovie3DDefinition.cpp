#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxMovie3DDefinition()
{
    class_< UWillowGFxMovie3DDefinition, bases< UGFxMovieDefinition >  , boost::noncopyable>("UWillowGFxMovie3DDefinition", no_init)
        .def_readwrite("View3DFOV", &UWillowGFxMovie3DDefinition::View3DFOV)
        .def_readwrite("View3DScale", &UWillowGFxMovie3DDefinition::View3DScale)
        .def_readwrite("View3DTrans", &UWillowGFxMovie3DDefinition::View3DTrans)
        .def_readwrite("View3DRot", &UWillowGFxMovie3DDefinition::View3DRot)
        .def_readwrite("SplitscreenFOVScalar", &UWillowGFxMovie3DDefinition::SplitscreenFOVScalar)
        .def_readwrite("SplitscreenSizeScalar", &UWillowGFxMovie3DDefinition::SplitscreenSizeScalar)
        .def_readwrite("VerticalSplitscreenPanning", &UWillowGFxMovie3DDefinition::VerticalSplitscreenPanning)
        .def_readwrite("VerticalSplitscreenPanning_Spread", &UWillowGFxMovie3DDefinition::VerticalSplitscreenPanning_Spread)
        .def("StaticClass", &UWillowGFxMovie3DDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}