#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDScaleGuideGFxMovie(py::module &m)
{
    py::class_< UHUDScaleGuideGFxMovie,  UWillowGFxMovie3D   >(m, "UHUDScaleGuideGFxMovie")
        .def_readwrite("Arrow_Up", &UHUDScaleGuideGFxMovie::Arrow_Up)
        .def_readwrite("Arrow_Down", &UHUDScaleGuideGFxMovie::Arrow_Down)
        .def_readwrite("Arrow_Left", &UHUDScaleGuideGFxMovie::Arrow_Left)
        .def_readwrite("Arrow_Right", &UHUDScaleGuideGFxMovie::Arrow_Right)
        .def("UpdateFrameForAspectRatio", &UHUDScaleGuideGFxMovie::UpdateFrameForAspectRatio)
        .def("SetScaleForClip", &UHUDScaleGuideGFxMovie::SetScaleForClip)
        .def("eventOnTick", &UHUDScaleGuideGFxMovie::eventOnTick)
        .def("eventStart", &UHUDScaleGuideGFxMovie::eventStart)
          ;
}