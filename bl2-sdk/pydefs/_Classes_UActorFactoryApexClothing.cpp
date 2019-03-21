#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryApexClothing()
{
    py::class_< UActorFactoryApexClothing,  UActorFactorySkeletalMesh   >("UActorFactoryApexClothing")
        .def_readwrite("ClothingAssets", &UActorFactoryApexClothing::ClothingAssets)
        .def_readwrite("ClothingRBChannel", &UActorFactoryApexClothing::ClothingRBChannel)
        .def_readwrite("ClothingRBCollideWithChannels", &UActorFactoryApexClothing::ClothingRBCollideWithChannels)
        .def("StaticClass", &UActorFactoryApexClothing::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}