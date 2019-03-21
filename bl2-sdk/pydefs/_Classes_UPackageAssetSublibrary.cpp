#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPackageAssetSublibrary()
{
    class_< UPackageAssetSublibrary, bases< UGBXDefinition >  , boost::noncopyable>("UPackageAssetSublibrary", no_init)
        .def_readwrite("LibraryType", &UPackageAssetSublibrary::LibraryType)
        .def_readwrite("Assets", &UPackageAssetSublibrary::Assets)
        .def_readwrite("AssetPaths", &UPackageAssetSublibrary::AssetPaths)
        .def_readwrite("CachedPackageName", &UPackageAssetSublibrary::CachedPackageName)
        .def("StaticClass", &UPackageAssetSublibrary::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}