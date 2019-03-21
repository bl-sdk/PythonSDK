#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureRenderTargetCube()
{
    py::class_< UTextureRenderTargetCube,  UTextureRenderTarget   >("UTextureRenderTargetCube")
        .def_readwrite("SizeX", &UTextureRenderTargetCube::SizeX)
        .def_readwrite("Format", &UTextureRenderTargetCube::Format)
        .def("StaticClass", &UTextureRenderTargetCube::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}