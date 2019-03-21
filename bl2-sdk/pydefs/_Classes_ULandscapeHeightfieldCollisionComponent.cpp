#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULandscapeHeightfieldCollisionComponent()
{
    class_< ULandscapeHeightfieldCollisionComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("ULandscapeHeightfieldCollisionComponent", no_init)
        .def_readwrite("CollisionHeightData", &ULandscapeHeightfieldCollisionComponent::CollisionHeightData)
        .def_readwrite("SectionBaseX", &ULandscapeHeightfieldCollisionComponent::SectionBaseX)
        .def_readwrite("SectionBaseY", &ULandscapeHeightfieldCollisionComponent::SectionBaseY)
        .def_readwrite("CollisionSizeQuads", &ULandscapeHeightfieldCollisionComponent::CollisionSizeQuads)
        .def_readwrite("CollisionScale", &ULandscapeHeightfieldCollisionComponent::CollisionScale)
        .def_readwrite("CollisionQuadFlags", &ULandscapeHeightfieldCollisionComponent::CollisionQuadFlags)
        .def_readwrite("PhysicalMaterials", &ULandscapeHeightfieldCollisionComponent::PhysicalMaterials)
        .def_readwrite("RBHeightfield", &ULandscapeHeightfieldCollisionComponent::RBHeightfield)
        .def_readwrite("CachedBoxSphereBounds", &ULandscapeHeightfieldCollisionComponent::CachedBoxSphereBounds)
        .def("StaticClass", &ULandscapeHeightfieldCollisionComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}