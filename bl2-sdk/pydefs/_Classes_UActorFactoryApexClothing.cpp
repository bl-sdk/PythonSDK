#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryApexClothing(py::module &m)
{
    py::class_< UActorFactoryApexClothing,  UActorFactorySkeletalMesh   >(m, "UActorFactoryApexClothing")
		.def_static("StaticClass", &UActorFactoryApexClothing::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ClothingAssets", &UActorFactoryApexClothing::ClothingAssets)
        .def_readwrite("ClothingRBChannel", &UActorFactoryApexClothing::ClothingRBChannel)
        .def_readwrite("ClothingRBCollideWithChannels", &UActorFactoryApexClothing::ClothingRBCollideWithChannels)
          ;
}