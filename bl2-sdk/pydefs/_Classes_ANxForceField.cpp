#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxForceField()
{
    class_< ANxForceField, bases< AActor >  , boost::noncopyable>("ANxForceField", no_init)
        .def_readwrite("ExcludeChannel", &ANxForceField::ExcludeChannel)
        .def_readwrite("CollideWithChannels", &ANxForceField::CollideWithChannels)
        .def_readwrite("RBChannel", &ANxForceField::RBChannel)
        .def_readwrite("ForceField", &ANxForceField::ForceField)
        .def_readwrite("ConvexMeshes", &ANxForceField::ConvexMeshes)
        .def_readwrite("ExclusionShapes", &ANxForceField::ExclusionShapes)
        .def_readwrite("ExclusionShapePoses", &ANxForceField::ExclusionShapePoses)
        .def_readwrite("U2NRotation", &ANxForceField::U2NRotation)
        .def_readwrite("SceneIndex", &ANxForceField::SceneIndex)
        .def("StaticClass", &ANxForceField::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ANxForceField::OnToggle)
        .def("DoInitRBPhys", &ANxForceField::DoInitRBPhys)
        .staticmethod("StaticClass")
  ;
}