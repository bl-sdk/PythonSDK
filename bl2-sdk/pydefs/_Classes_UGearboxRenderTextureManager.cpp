#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxRenderTextureManager(py::object m)
{
    py::class_< UGearboxRenderTextureManager,  UObject   >(m, "UGearboxRenderTextureManager")
        .def_readwrite("FreeList2D", &UGearboxRenderTextureManager::FreeList2D)
        .def_readwrite("FreeList", &UGearboxRenderTextureManager::FreeList)
        .def_readwrite("HoldDuration", &UGearboxRenderTextureManager::HoldDuration)
        .def_readwrite("TimeToNextTick", &UGearboxRenderTextureManager::TimeToNextTick)
        .def_readwrite("Thumbnails", &UGearboxRenderTextureManager::Thumbnails)
        .def_readwrite("DefaultLights", &UGearboxRenderTextureManager::DefaultLights)
        .def_readwrite("ThumbnailTextureArea", &UGearboxRenderTextureManager::ThumbnailTextureArea)
        .def("StaticClass", &UGearboxRenderTextureManager::StaticClass, py::return_value_policy::reference)
        .def("SetThumbnailMesh", &UGearboxRenderTextureManager::SetThumbnailMesh)
        .def("FreeContext", &UGearboxRenderTextureManager::FreeContext)
        .def("FreeThumbnail", &UGearboxRenderTextureManager::FreeThumbnail)
        .def("GetThumbnail", &UGearboxRenderTextureManager::GetThumbnail, py::return_value_policy::reference)
        .def("FreeTexture2D", &UGearboxRenderTextureManager::FreeTexture2D)
        .def("GetTexture2D", &UGearboxRenderTextureManager::GetTexture2D, py::return_value_policy::reference)
        .def("FreeRenderTexture", &UGearboxRenderTextureManager::FreeRenderTexture)
        .def("GetRenderTexture", &UGearboxRenderTextureManager::GetRenderTexture, py::return_value_policy::reference)
          ;
}