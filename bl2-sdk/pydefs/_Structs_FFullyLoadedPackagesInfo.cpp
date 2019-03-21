#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFullyLoadedPackagesInfo(py::object m)
{
    py::class_< FFullyLoadedPackagesInfo >(m, "FFullyLoadedPackagesInfo")
        .def_readwrite("FullyLoadType", &FFullyLoadedPackagesInfo::FullyLoadType)
        .def_readwrite("Tag", &FFullyLoadedPackagesInfo::Tag)
        .def_readwrite("PackagesToLoad", &FFullyLoadedPackagesInfo::PackagesToLoad)
        .def_readwrite("LoadedObjects", &FFullyLoadedPackagesInfo::LoadedObjects)
  ;
}