#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearLikenessMeshComponent(py::module &m)
{
    py::class_< UGearLikenessMeshComponent,  USkeletalMeshComponent   >(m, "UGearLikenessMeshComponent")
        .def_readwrite("LikenessOf", &UGearLikenessMeshComponent::LikenessOf)
        .def_readwrite("GroupIndex", &UGearLikenessMeshComponent::GroupIndex)
        .def_readwrite("CachedLikenessID", &UGearLikenessMeshComponent::CachedLikenessID)
        .def("RefreshGearLikenessComponents", &UGearLikenessMeshComponent::RefreshGearLikenessComponents)
          ;
}