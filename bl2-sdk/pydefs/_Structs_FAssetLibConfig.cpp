#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAssetLibConfig(py::object m)
{
    py::class_< FAssetLibConfig >(m, "FAssetLibConfig")
        .def_readwrite("SublibraryBits", &FAssetLibConfig::SublibraryBits)
        .def_readwrite("AssetBits", &FAssetLibConfig::AssetBits)
        .def_readwrite("Desc", &FAssetLibConfig::Desc)
        .def_readwrite("LibraryType", &FAssetLibConfig::LibraryType)
  ;
}