#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicsAsset()
{
    class_< UPhysicsAsset, bases< UObject >  , boost::noncopyable>("UPhysicsAsset", no_init)
        .def_readwrite("BodySetup", &UPhysicsAsset::BodySetup)
        .def_readwrite("BodySetupIndexMap", &UPhysicsAsset::BodySetupIndexMap)
        .def_readwrite("BoundsBodies", &UPhysicsAsset::BoundsBodies)
        .def_readwrite("ConstraintSetup", &UPhysicsAsset::ConstraintSetup)
        .def_readwrite("DefaultInstance", &UPhysicsAsset::DefaultInstance)
        .def("StaticClass", &UPhysicsAsset::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindBodyIndex", &UPhysicsAsset::FindBodyIndex)
        .staticmethod("StaticClass")
  ;
}