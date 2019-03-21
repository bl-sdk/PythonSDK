#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAssetLibraryManager(py::object m)
{
    py::class_< UAssetLibraryManager,  UObject   >(m, "UAssetLibraryManager")
        .def_readonly("LibraryConfigs", &UAssetLibraryManager::LibraryConfigs)
        .def_readwrite("EditorAssetLibraries", &UAssetLibraryManager::EditorAssetLibraries)
        .def_readwrite("RuntimeAssetLibraries", &UAssetLibraryManager::RuntimeAssetLibraries)
        .def("StaticClass", &UAssetLibraryManager::StaticClass, py::return_value_policy::reference)
        .def("DetermineObjLibraryType", &UAssetLibraryManager::DetermineObjLibraryType)
        .def("DetermineLibraryType", &UAssetLibraryManager::DetermineLibraryType)
        .def("DecodeTyped", &UAssetLibraryManager::DecodeTyped)
        .def("Decode", &UAssetLibraryManager::Decode)
        .def("EncodeSKUID", &UAssetLibraryManager::EncodeSKUID)
        .def("EncodeTyped", &UAssetLibraryManager::EncodeTyped)
        .def("Encode", &UAssetLibraryManager::Encode)
          ;
}