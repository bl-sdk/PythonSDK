#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxRenderTextureManager()
{
    class_< UGearboxRenderTextureManager, bases< UObject >  , boost::noncopyable>("UGearboxRenderTextureManager", no_init)
        .def_readwrite("FreeList2D", &UGearboxRenderTextureManager::FreeList2D)
        .def_readwrite("FreeList", &UGearboxRenderTextureManager::FreeList)
        .def_readwrite("HoldDuration", &UGearboxRenderTextureManager::HoldDuration)
        .def_readwrite("TimeToNextTick", &UGearboxRenderTextureManager::TimeToNextTick)
        .def_readwrite("Thumbnails", &UGearboxRenderTextureManager::Thumbnails)
        .def_readwrite("DefaultLights", &UGearboxRenderTextureManager::DefaultLights)
        .def_readwrite("ThumbnailTextureArea", &UGearboxRenderTextureManager::ThumbnailTextureArea)
        .def("StaticClass", &UGearboxRenderTextureManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetThumbnailMesh", &UGearboxRenderTextureManager::SetThumbnailMesh)
        .def("FreeContext", &UGearboxRenderTextureManager::FreeContext)
        .def("FreeThumbnail", &UGearboxRenderTextureManager::FreeThumbnail)
        .def("GetThumbnail", &UGearboxRenderTextureManager::GetThumbnail, return_value_policy< reference_existing_object >())
        .def("FreeTexture2D", &UGearboxRenderTextureManager::FreeTexture2D)
        .def("GetTexture2D", &UGearboxRenderTextureManager::GetTexture2D, return_value_policy< reference_existing_object >())
        .def("FreeRenderTexture", &UGearboxRenderTextureManager::FreeRenderTexture)
        .def("GetRenderTexture", &UGearboxRenderTextureManager::GetRenderTexture, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}