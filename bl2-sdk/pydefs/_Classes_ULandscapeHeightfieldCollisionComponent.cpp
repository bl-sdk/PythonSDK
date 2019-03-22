#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULandscapeHeightfieldCollisionComponent(py::module &m)
{
    py::class_< ULandscapeHeightfieldCollisionComponent,  UPrimitiveComponent   >(m, "ULandscapeHeightfieldCollisionComponent")
        .def_readwrite("CollisionHeightData", &ULandscapeHeightfieldCollisionComponent::CollisionHeightData)
        .def_readwrite("SectionBaseX", &ULandscapeHeightfieldCollisionComponent::SectionBaseX)
        .def_readwrite("SectionBaseY", &ULandscapeHeightfieldCollisionComponent::SectionBaseY)
        .def_readwrite("CollisionSizeQuads", &ULandscapeHeightfieldCollisionComponent::CollisionSizeQuads)
        .def_readwrite("CollisionScale", &ULandscapeHeightfieldCollisionComponent::CollisionScale)
        .def_readwrite("CollisionQuadFlags", &ULandscapeHeightfieldCollisionComponent::CollisionQuadFlags)
        .def_readwrite("PhysicalMaterials", &ULandscapeHeightfieldCollisionComponent::PhysicalMaterials)
        .def_readwrite("RBHeightfield", &ULandscapeHeightfieldCollisionComponent::RBHeightfield)
        .def_readwrite("CachedBoxSphereBounds", &ULandscapeHeightfieldCollisionComponent::CachedBoxSphereBounds)
          ;
}