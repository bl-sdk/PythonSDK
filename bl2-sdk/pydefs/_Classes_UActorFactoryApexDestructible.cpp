#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryApexDestructible()
{
    class_< UActorFactoryApexDestructible, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryApexDestructible", no_init)
        .def_readwrite("RBChannel", &UActorFactoryApexDestructible::RBChannel)
        .def_readwrite("CollideWithChannels", &UActorFactoryApexDestructible::CollideWithChannels)
        .def_readwrite("DestructibleAsset", &UActorFactoryApexDestructible::DestructibleAsset)
        .def("StaticClass", &UActorFactoryApexDestructible::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}