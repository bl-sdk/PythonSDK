#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXNavMeshRenderingComponent()
{
    class_< UGBXNavMeshRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UGBXNavMeshRenderingComponent", no_init)
        .def_readwrite("MeshSpacingHullsToDraw", &UGBXNavMeshRenderingComponent::MeshSpacingHullsToDraw)
        .def_readwrite("NavMeshRenderingData", &UGBXNavMeshRenderingComponent::NavMeshRenderingData)
        .def("StaticClass", &UGBXNavMeshRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}