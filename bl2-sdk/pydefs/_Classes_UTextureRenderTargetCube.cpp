#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureRenderTargetCube(py::module &m)
{
    py::class_< UTextureRenderTargetCube,  UTextureRenderTarget   >(m, "UTextureRenderTargetCube")
		.def_static("StaticClass", &UTextureRenderTargetCube::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SizeX", &UTextureRenderTargetCube::SizeX)
        .def_readwrite("Format", &UTextureRenderTargetCube::Format)
          ;
}