#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHUDScaleGuideGFxMovie()
{
    class_< UHUDScaleGuideGFxMovie, bases< UWillowGFxMovie3D >  , boost::noncopyable>("UHUDScaleGuideGFxMovie", no_init)
        .def_readwrite("Arrow_Up", &UHUDScaleGuideGFxMovie::Arrow_Up)
        .def_readwrite("Arrow_Down", &UHUDScaleGuideGFxMovie::Arrow_Down)
        .def_readwrite("Arrow_Left", &UHUDScaleGuideGFxMovie::Arrow_Left)
        .def_readwrite("Arrow_Right", &UHUDScaleGuideGFxMovie::Arrow_Right)
        .def("StaticClass", &UHUDScaleGuideGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateFrameForAspectRatio", &UHUDScaleGuideGFxMovie::UpdateFrameForAspectRatio)
        .def("SetScaleForClip", &UHUDScaleGuideGFxMovie::SetScaleForClip)
        .def("eventOnTick", &UHUDScaleGuideGFxMovie::eventOnTick)
        .def("eventStart", &UHUDScaleGuideGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}