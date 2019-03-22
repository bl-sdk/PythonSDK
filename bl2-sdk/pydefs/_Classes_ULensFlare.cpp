#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULensFlare(py::module &m)
{
    py::class_< ULensFlare,  UObject   >(m, "ULensFlare")
        .def_readwrite("SourceElement", &ULensFlare::SourceElement)
        .def_readwrite("SourceMesh", &ULensFlare::SourceMesh)
        .def_readwrite("SourceDPG", &ULensFlare::SourceDPG)
        .def_readwrite("ReflectionsDPG", &ULensFlare::ReflectionsDPG)
        .def_readwrite("Reflections", &ULensFlare::Reflections)
        .def_readwrite("OuterCone", &ULensFlare::OuterCone)
        .def_readwrite("InnerCone", &ULensFlare::InnerCone)
        .def_readwrite("ConeFudgeFactor", &ULensFlare::ConeFudgeFactor)
        .def_readwrite("Radius", &ULensFlare::Radius)
        .def_readwrite("MinStrength", &ULensFlare::MinStrength)
        .def_readwrite("ScreenPercentageMap", &ULensFlare::ScreenPercentageMap)
        .def_readwrite("FixedRelativeBoundingBox", &ULensFlare::FixedRelativeBoundingBox)
        .def_readwrite("CurveEdSetup", &ULensFlare::CurveEdSetup)
        .def_readwrite("ReflectionCount", &ULensFlare::ReflectionCount)
        .def_readwrite("ThumbnailAngle", &ULensFlare::ThumbnailAngle)
        .def_readwrite("ThumbnailDistance", &ULensFlare::ThumbnailDistance)
        .def_readwrite("ThumbnailImage", &ULensFlare::ThumbnailImage)
          ;
}