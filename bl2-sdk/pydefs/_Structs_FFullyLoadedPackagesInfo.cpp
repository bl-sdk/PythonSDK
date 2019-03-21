#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFullyLoadedPackagesInfo()
{
    class_< FFullyLoadedPackagesInfo >("FFullyLoadedPackagesInfo", no_init)
        .def_readwrite("FullyLoadType", &FFullyLoadedPackagesInfo::FullyLoadType)
        .def_readwrite("Tag", &FFullyLoadedPackagesInfo::Tag)
        .def_readwrite("PackagesToLoad", &FFullyLoadedPackagesInfo::PackagesToLoad)
        .def_readwrite("LoadedObjects", &FFullyLoadedPackagesInfo::LoadedObjects)
  ;
}