#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTexture2DComposite()
{
    py::class_< UTexture2DComposite,  UTexture   >("UTexture2DComposite")
        .def_readwrite("SourceRegions", &UTexture2DComposite::SourceRegions)
        .def_readwrite("MaxTextureSize", &UTexture2DComposite::MaxTextureSize)
        .def("StaticClass", &UTexture2DComposite::StaticClass, py::return_value_policy::reference)
        .def("ResetSourceRegions", &UTexture2DComposite::ResetSourceRegions)
        .def("UpdateCompositeTexture", &UTexture2DComposite::UpdateCompositeTexture)
        .def("SourceTexturesFullyStreamedIn", &UTexture2DComposite::SourceTexturesFullyStreamedIn)
        .staticmethod("StaticClass")
  ;
}