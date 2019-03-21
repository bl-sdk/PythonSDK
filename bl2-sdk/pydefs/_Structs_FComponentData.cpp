#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FComponentData()
{
    py::class_< FComponentData >("FComponentData")
        .def_readwrite("Component", &FComponentData::Component)
        .def_readwrite("CollisionType", &FComponentData::CollisionType)
        .def_readwrite("MeshSocketName", &FComponentData::MeshSocketName)
        .def_readwrite("HitRegionDefinition", &FComponentData::HitRegionDefinition)
        .def_readwrite("InteractIcon", &FComponentData::InteractIcon)
        .def_readwrite("SecondaryInteractIcon", &FComponentData::SecondaryInteractIcon)
  ;
}