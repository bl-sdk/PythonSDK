#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureRenderTarget(py::object m)
{
    py::class_< UTextureRenderTarget,  UTexture   >(m, "UTextureRenderTarget")
        .def_readwrite("TargetGamma", &UTextureRenderTarget::TargetGamma)
        .def("StaticClass", &UTextureRenderTarget::StaticClass, py::return_value_policy::reference)
          ;
}