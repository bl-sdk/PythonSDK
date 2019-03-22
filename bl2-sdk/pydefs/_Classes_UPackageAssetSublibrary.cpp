#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageAssetSublibrary(py::module &m)
{
    py::class_< UPackageAssetSublibrary,  UGBXDefinition   >(m, "UPackageAssetSublibrary")
        .def_readwrite("LibraryType", &UPackageAssetSublibrary::LibraryType)
        .def_readwrite("Assets", &UPackageAssetSublibrary::Assets)
        .def_readwrite("AssetPaths", &UPackageAssetSublibrary::AssetPaths)
        .def_readwrite("CachedPackageName", &UPackageAssetSublibrary::CachedPackageName)
          ;
}