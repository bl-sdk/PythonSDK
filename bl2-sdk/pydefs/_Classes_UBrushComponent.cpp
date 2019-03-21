#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBrushComponent()
{
    class_< UBrushComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UBrushComponent", no_init)
        .def_readwrite("Brush", &UBrushComponent::Brush)
        .def_readwrite("BrushAggGeom", &UBrushComponent::BrushAggGeom)
        .def_readwrite("BrushPhysDesc", &UBrushComponent::BrushPhysDesc)
        .def_readwrite("CachedPhysBrushData", &UBrushComponent::CachedPhysBrushData)
        .def_readwrite("CachedPhysBrushDataVersion", &UBrushComponent::CachedPhysBrushDataVersion)
        .def("StaticClass", &UBrushComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}