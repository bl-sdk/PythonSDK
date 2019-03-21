#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFoliageMesh()
{
    class_< FFoliageMesh >("FFoliageMesh", no_init)
        .def_readwrite("InstanceStaticMesh", &FFoliageMesh::InstanceStaticMesh)
        .def_readwrite("Material", &FFoliageMesh::Material)
        .def_readwrite("MaxDrawRadius", &FFoliageMesh::MaxDrawRadius)
        .def_readwrite("MinTransitionRadius", &FFoliageMesh::MinTransitionRadius)
        .def_readwrite("MinThinningRadius", &FFoliageMesh::MinThinningRadius)
        .def_readwrite("MinScale", &FFoliageMesh::MinScale)
        .def_readwrite("MaxScale", &FFoliageMesh::MaxScale)
        .def_readwrite("MinUniformScale", &FFoliageMesh::MinUniformScale)
        .def_readwrite("MaxUniformScale", &FFoliageMesh::MaxUniformScale)
        .def_readwrite("SwayScale", &FFoliageMesh::SwayScale)
        .def_readwrite("Seed", &FFoliageMesh::Seed)
        .def_readwrite("SurfaceAreaPerInstance", &FFoliageMesh::SurfaceAreaPerInstance)
        .def_readwrite("Component", &FFoliageMesh::Component)
  ;
}