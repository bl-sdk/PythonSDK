#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshRenderingComponent()
{
    class_< UNavMeshRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UNavMeshRenderingComponent", no_init)
        .def("StaticClass", &UNavMeshRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}