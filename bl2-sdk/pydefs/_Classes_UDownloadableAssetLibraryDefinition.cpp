#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableAssetLibraryDefinition()
{
    py::class_< UDownloadableAssetLibraryDefinition,  UGBXDefinition   >("UDownloadableAssetLibraryDefinition")
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadableAssetLibraryDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageDef", &UDownloadableAssetLibraryDefinition::PackageDef)
        .def_readonly("Libraries", &UDownloadableAssetLibraryDefinition::Libraries)
        .def("StaticClass", &UDownloadableAssetLibraryDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}