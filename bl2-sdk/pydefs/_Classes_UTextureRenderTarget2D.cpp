#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureRenderTarget2D(py::module &m)
{
    py::class_< UTextureRenderTarget2D,  UTexture   >(m, "UTextureRenderTarget2D")
		.def_static("StaticClass", &UTextureRenderTarget2D::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SizeX", &UTextureRenderTarget2D::SizeX)
        .def_readwrite("SizeY", &UTextureRenderTarget2D::SizeY)
        .def_readwrite("Format", &UTextureRenderTarget2D::Format)
        .def_readwrite("AddressX", &UTextureRenderTarget2D::AddressX)
        .def_readwrite("AddressY", &UTextureRenderTarget2D::AddressY)
        .def_readwrite("ClearColor", &UTextureRenderTarget2D::ClearColor)
        .def_readwrite("TargetGamma", &UTextureRenderTarget::TargetGamma)
        .def("Create", &UTextureRenderTarget2D::Create, py::return_value_policy::reference)
          ;
}