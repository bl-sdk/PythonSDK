#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimSet(py::module &m)
{
    py::class_< UAnimSet,  UObject   >(m, "UAnimSet")
        .def_readwrite("TrackBoneNames", &UAnimSet::TrackBoneNames)
        .def_readwrite("Sequences", &UAnimSet::Sequences)
        .def_readwrite("LinkupCache", &UAnimSet::LinkupCache)
        .def_readwrite("BoneUseAnimTranslation", &UAnimSet::BoneUseAnimTranslation)
        .def_readwrite("ForceUseMeshTranslation", &UAnimSet::ForceUseMeshTranslation)
        .def_readwrite("UseTranslationBoneNames", &UAnimSet::UseTranslationBoneNames)
        .def_readwrite("ForceMeshTranslationBoneNames", &UAnimSet::ForceMeshTranslationBoneNames)
        .def_readwrite("PreviewSkelMeshName", &UAnimSet::PreviewSkelMeshName)
        .def_readwrite("BestRatioSkelMeshName", &UAnimSet::BestRatioSkelMeshName)
        .def("StaticClass", &UAnimSet::StaticClass, py::return_value_policy::reference)
          ;
}