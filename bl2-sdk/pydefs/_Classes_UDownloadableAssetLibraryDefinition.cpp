#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableAssetLibraryDefinition()
{
    class_< UDownloadableAssetLibraryDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDownloadableAssetLibraryDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadableAssetLibraryDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageDef", &UDownloadableAssetLibraryDefinition::PackageDef)
        .def_readonly("Libraries", &UDownloadableAssetLibraryDefinition::Libraries)
        .def("StaticClass", &UDownloadableAssetLibraryDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}