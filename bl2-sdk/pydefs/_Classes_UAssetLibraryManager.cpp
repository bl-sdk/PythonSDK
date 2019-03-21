#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAssetLibraryManager()
{
    class_< UAssetLibraryManager, bases< UObject >  , boost::noncopyable>("UAssetLibraryManager", no_init)
        .def_readonly("LibraryConfigs", &UAssetLibraryManager::LibraryConfigs)
        .def_readwrite("EditorAssetLibraries", &UAssetLibraryManager::EditorAssetLibraries)
        .def_readwrite("RuntimeAssetLibraries", &UAssetLibraryManager::RuntimeAssetLibraries)
        .def("StaticClass", &UAssetLibraryManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("DetermineObjLibraryType", &UAssetLibraryManager::DetermineObjLibraryType)
        .def("DetermineLibraryType", &UAssetLibraryManager::DetermineLibraryType)
        .def("DecodeTyped", &UAssetLibraryManager::DecodeTyped)
        .def("Decode", &UAssetLibraryManager::Decode)
        .def("EncodeSKUID", &UAssetLibraryManager::EncodeSKUID)
        .def("EncodeTyped", &UAssetLibraryManager::EncodeTyped)
        .def("Encode", &UAssetLibraryManager::Encode)
        .staticmethod("StaticClass")
  ;
}