#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureRenderTarget()
{
    py::class_< UTextureRenderTarget,  UTexture   >("UTextureRenderTarget")
        .def_readwrite("TargetGamma", &UTextureRenderTarget::TargetGamma)
        .def("StaticClass", &UTextureRenderTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}