#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPackageAssetLibrary()
{
    class_< UPackageAssetLibrary, bases< UGBXDefinition >  , boost::noncopyable>("UPackageAssetLibrary", no_init)
        .def_readwrite("LibraryType", &UPackageAssetLibrary::LibraryType)
        .def_readwrite("Sublibraries", &UPackageAssetLibrary::Sublibraries)
        .def_readwrite("SublibraryLinks", &UPackageAssetLibrary::SublibraryLinks)
        .def("StaticClass", &UPackageAssetLibrary::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}