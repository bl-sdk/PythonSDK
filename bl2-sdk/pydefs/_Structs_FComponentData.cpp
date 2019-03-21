#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FComponentData()
{
    class_< FComponentData >("FComponentData", no_init)
        .def_readwrite("Component", &FComponentData::Component)
        .def_readwrite("CollisionType", &FComponentData::CollisionType)
        .def_readwrite("MeshSocketName", &FComponentData::MeshSocketName)
        .def_readwrite("HitRegionDefinition", &FComponentData::HitRegionDefinition)
        .def_readwrite("InteractIcon", &FComponentData::InteractIcon)
        .def_readwrite("SecondaryInteractIcon", &FComponentData::SecondaryInteractIcon)
  ;
}