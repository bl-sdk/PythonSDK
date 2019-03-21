#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAssetLibConfig()
{
    class_< FAssetLibConfig >("FAssetLibConfig", no_init)
        .def_readwrite("SublibraryBits", &FAssetLibConfig::SublibraryBits)
        .def_readwrite("AssetBits", &FAssetLibConfig::AssetBits)
        .def_readwrite("Desc", &FAssetLibConfig::Desc)
        .def_readwrite("LibraryType", &FAssetLibConfig::LibraryType)
  ;
}