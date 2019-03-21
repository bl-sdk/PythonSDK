#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexClothingAsset()
{
    class_< UApexClothingAsset, bases< UObject >  , boost::noncopyable>("UApexClothingAsset", no_init)
        .def_readwrite("MApexAsset", &UApexClothingAsset::MApexAsset)
        .def_readwrite("ApexClothingLibrary", &UApexClothingAsset::ApexClothingLibrary)
        .def_readwrite("UVChannelForTangentUpdate", &UApexClothingAsset::UVChannelForTangentUpdate)
        .def_readwrite("MaxDistanceBlendTime", &UApexClothingAsset::MaxDistanceBlendTime)
        .def_readwrite("ContinuousRotationThreshold", &UApexClothingAsset::ContinuousRotationThreshold)
        .def_readwrite("ContinuousDistanceThreshold", &UApexClothingAsset::ContinuousDistanceThreshold)
        .def_readwrite("LodWeightsMaxDistance", &UApexClothingAsset::LodWeightsMaxDistance)
        .def_readwrite("LodWeightsDistanceWeight", &UApexClothingAsset::LodWeightsDistanceWeight)
        .def_readwrite("LodWeightsBias", &UApexClothingAsset::LodWeightsBias)
        .def_readwrite("LodWeightsBenefitsBias", &UApexClothingAsset::LodWeightsBenefitsBias)
        .def_readwrite("OriginalApexName", &UApexAsset::OriginalApexName)
        .def_readwrite("ApexComponents", &UApexAsset::ApexComponents)
        .def("StaticClass", &UApexClothingAsset::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}