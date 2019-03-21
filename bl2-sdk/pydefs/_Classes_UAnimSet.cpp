#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimSet(py::object m)
{
    py::class_< UAnimSet,  UObject   >(m, "UAnimSet")
        .def_readwrite("TrackBoneNames", &UAnimSet::TrackBoneNames)
        .def_readwrite("Sequences", &UAnimSet::Sequences)
        .def_readonly("UnknownData00", &UAnimSet::UnknownData00)
        .def_readwrite("LinkupCache", &UAnimSet::LinkupCache)
        .def_readonly("UnknownData01", &UAnimSet::UnknownData01)
        .def_readwrite("BoneUseAnimTranslation", &UAnimSet::BoneUseAnimTranslation)
        .def_readwrite("ForceUseMeshTranslation", &UAnimSet::ForceUseMeshTranslation)
        .def_readwrite("UseTranslationBoneNames", &UAnimSet::UseTranslationBoneNames)
        .def_readwrite("ForceMeshTranslationBoneNames", &UAnimSet::ForceMeshTranslationBoneNames)
        .def_readwrite("PreviewSkelMeshName", &UAnimSet::PreviewSkelMeshName)
        .def_readwrite("BestRatioSkelMeshName", &UAnimSet::BestRatioSkelMeshName)
        .def("StaticClass", &UAnimSet::StaticClass, py::return_value_policy::reference)
          ;
}