#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexClothingAsset()
{
    py::class_< UApexClothingAsset,  UObject   >("UApexClothingAsset")
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
        .def("StaticClass", &UApexClothingAsset::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}