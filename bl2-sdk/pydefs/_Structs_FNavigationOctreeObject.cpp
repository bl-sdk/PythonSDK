#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavigationOctreeObject(py::object m)
{
    py::class_< FNavigationOctreeObject >(m, "FNavigationOctreeObject")
        .def_readwrite("BoundingBox", &FNavigationOctreeObject::BoundingBox)
        .def_readwrite("BoxCenter", &FNavigationOctreeObject::BoxCenter)
        .def_readwrite("OctreeNode", &FNavigationOctreeObject::OctreeNode)
        .def_readwrite("Owner", &FNavigationOctreeObject::Owner)
        .def_readwrite("OwnerType", &FNavigationOctreeObject::OwnerType)
  ;
}