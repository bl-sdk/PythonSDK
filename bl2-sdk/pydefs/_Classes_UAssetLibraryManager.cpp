#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAssetLibraryManager(py::object m)
{
    py::class_< UAssetLibraryManager,  UObject   >(m, "UAssetLibraryManager")
        .def_readwrite("EditorAssetLibraries", &UAssetLibraryManager::EditorAssetLibraries)
        .def_readwrite("RuntimeAssetLibraries", &UAssetLibraryManager::RuntimeAssetLibraries)
        .def("StaticClass", &UAssetLibraryManager::StaticClass, py::return_value_policy::reference)
        .def("DetermineObjLibraryType", &UAssetLibraryManager::DetermineObjLibraryType)
        .def("DetermineLibraryType", &UAssetLibraryManager::DetermineLibraryType)
        .def("DecodeTyped", [](UAssetLibraryManager &self , int EncodedObj, unsigned char ObjType, int Revision, int SKUID) { class UObject** pyDecodedResult = 0 ;  bool ret =  self.DecodeTyped(EncodedObj, ObjType, Revision, SKUID, pyDecodedResult); return py::make_tuple(ret, *pyDecodedResult); })
        .def("Decode", [](UAssetLibraryManager &self , int EncodedObj, int Revision, int SKUID) { class UObject** pyDecodedResult = 0 ;  bool ret =  self.Decode(EncodedObj, Revision, SKUID, pyDecodedResult); return py::make_tuple(ret, *pyDecodedResult); })
        .def("EncodeSKUID", &UAssetLibraryManager::EncodeSKUID)
        .def("EncodeTyped", &UAssetLibraryManager::EncodeTyped)
        .def("Encode", &UAssetLibraryManager::Encode)
          ;
}