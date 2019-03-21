#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNavigationOctreeObject()
{
    class_< FNavigationOctreeObject >("FNavigationOctreeObject", no_init)
        .def_readwrite("BoundingBox", &FNavigationOctreeObject::BoundingBox)
        .def_readwrite("BoxCenter", &FNavigationOctreeObject::BoxCenter)
        .def_readwrite("OctreeNode", &FNavigationOctreeObject::OctreeNode)
        .def_readwrite("Owner", &FNavigationOctreeObject::Owner)
        .def_readwrite("OwnerType", &FNavigationOctreeObject::OwnerType)
  ;
}