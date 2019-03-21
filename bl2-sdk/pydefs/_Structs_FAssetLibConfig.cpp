#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAssetLibConfig()
{
    py::class_< FAssetLibConfig >("FAssetLibConfig")
        .def_readwrite("SublibraryBits", &FAssetLibConfig::SublibraryBits)
        .def_readwrite("AssetBits", &FAssetLibConfig::AssetBits)
        .def_readwrite("Desc", &FAssetLibConfig::Desc)
        .def_readwrite("LibraryType", &FAssetLibConfig::LibraryType)
  ;
}