#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FThumbnailRenderData(py::object m)
{
    py::class_< FThumbnailRenderData >(m, "FThumbnailRenderData")
        .def_readwrite("Context", &FThumbnailRenderData::Context)
        .def_readwrite("RenderTarget", &FThumbnailRenderData::RenderTarget)
        .def_readwrite("ResultTexture", &FThumbnailRenderData::ResultTexture)
        .def_readwrite("UpdateType", &FThumbnailRenderData::UpdateType)
        .def_readwrite("Mesh", &FThumbnailRenderData::Mesh)
        .def_readwrite("TextureSizeX", &FThumbnailRenderData::TextureSizeX)
        .def_readwrite("TextureSizeY", &FThumbnailRenderData::TextureSizeY)
        .def_readwrite("SizeX", &FThumbnailRenderData::SizeX)
        .def_readwrite("SizeY", &FThumbnailRenderData::SizeY)
        .def_readwrite("ReferencedTextures", &FThumbnailRenderData::ReferencedTextures)
        .def_readwrite("StopStreamTexturesTime", &FThumbnailRenderData::StopStreamTexturesTime)
  ;
}