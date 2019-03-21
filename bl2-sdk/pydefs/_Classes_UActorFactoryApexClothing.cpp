#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryApexClothing()
{
    class_< UActorFactoryApexClothing, bases< UActorFactorySkeletalMesh >  , boost::noncopyable>("UActorFactoryApexClothing", no_init)
        .def_readwrite("ClothingAssets", &UActorFactoryApexClothing::ClothingAssets)
        .def_readwrite("ClothingRBChannel", &UActorFactoryApexClothing::ClothingRBChannel)
        .def_readwrite("ClothingRBCollideWithChannels", &UActorFactoryApexClothing::ClothingRBCollideWithChannels)
        .def("StaticClass", &UActorFactoryApexClothing::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}