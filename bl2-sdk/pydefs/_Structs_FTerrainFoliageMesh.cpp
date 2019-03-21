#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainFoliageMesh()
{
    class_< FTerrainFoliageMesh >("FTerrainFoliageMesh", no_init)
        .def_readwrite("StaticMesh", &FTerrainFoliageMesh::StaticMesh)
        .def_readwrite("Material", &FTerrainFoliageMesh::Material)
        .def_readwrite("Density", &FTerrainFoliageMesh::Density)
        .def_readwrite("MaxDrawRadius", &FTerrainFoliageMesh::MaxDrawRadius)
        .def_readwrite("MinTransitionRadius", &FTerrainFoliageMesh::MinTransitionRadius)
        .def_readwrite("MinScale", &FTerrainFoliageMesh::MinScale)
        .def_readwrite("MaxScale", &FTerrainFoliageMesh::MaxScale)
        .def_readwrite("MinUniformScale", &FTerrainFoliageMesh::MinUniformScale)
        .def_readwrite("MaxUniformScale", &FTerrainFoliageMesh::MaxUniformScale)
        .def_readwrite("MinThinningRadius", &FTerrainFoliageMesh::MinThinningRadius)
        .def_readwrite("Seed", &FTerrainFoliageMesh::Seed)
        .def_readwrite("SwayScale", &FTerrainFoliageMesh::SwayScale)
        .def_readwrite("AlphaMapThreshold", &FTerrainFoliageMesh::AlphaMapThreshold)
        .def_readwrite("SlopeRotationBlend", &FTerrainFoliageMesh::SlopeRotationBlend)
  ;
}