#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTexture(py::object m)
{
    py::class_< UTexture,  USurface   >(m, "UTexture")
        .def_readwrite("CompressionSettings", &UTexture::CompressionSettings)
        .def_readwrite("Filter", &UTexture::Filter)
        .def_readwrite("LODGroup", &UTexture::LODGroup)
        .def_readwrite("MipGenSettings", &UTexture::MipGenSettings)
        .def_readwrite("LODBias", &UTexture::LODBias)
        .def_readwrite("CachedCombinedLODBias", &UTexture::CachedCombinedLODBias)
        .def_readwrite("NumCinematicMipLevels", &UTexture::NumCinematicMipLevels)
        .def_readwrite("Resource", &UTexture::Resource)
        .def_readwrite("InternalFormatLODBias", &UTexture::InternalFormatLODBias)
        .def("StaticClass", &UTexture::StaticClass, py::return_value_policy::reference)
          ;
}