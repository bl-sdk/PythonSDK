#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearLikenessMeshComponent()
{
    py::class_< UGearLikenessMeshComponent,  USkeletalMeshComponent   >("UGearLikenessMeshComponent")
        .def_readwrite("LikenessOf", &UGearLikenessMeshComponent::LikenessOf)
        .def_readwrite("GroupIndex", &UGearLikenessMeshComponent::GroupIndex)
        .def_readwrite("CachedLikenessID", &UGearLikenessMeshComponent::CachedLikenessID)
        .def("StaticClass", &UGearLikenessMeshComponent::StaticClass, py::return_value_policy::reference)
        .def("RefreshGearLikenessComponents", &UGearLikenessMeshComponent::RefreshGearLikenessComponents)
        .staticmethod("StaticClass")
  ;
}