#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearLikenessMeshComponent()
{
    class_< UGearLikenessMeshComponent, bases< USkeletalMeshComponent >  , boost::noncopyable>("UGearLikenessMeshComponent", no_init)
        .def_readwrite("LikenessOf", &UGearLikenessMeshComponent::LikenessOf)
        .def_readwrite("GroupIndex", &UGearLikenessMeshComponent::GroupIndex)
        .def_readwrite("CachedLikenessID", &UGearLikenessMeshComponent::CachedLikenessID)
        .def("StaticClass", &UGearLikenessMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("RefreshGearLikenessComponents", &UGearLikenessMeshComponent::RefreshGearLikenessComponents)
        .staticmethod("StaticClass")
  ;
}