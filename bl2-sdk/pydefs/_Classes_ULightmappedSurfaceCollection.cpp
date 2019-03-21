#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULightmappedSurfaceCollection()
{
    class_< ULightmappedSurfaceCollection, bases< UObject >  , boost::noncopyable>("ULightmappedSurfaceCollection", no_init)
        .def_readwrite("SourceModel", &ULightmappedSurfaceCollection::SourceModel)
        .def_readwrite("Surfaces", &ULightmappedSurfaceCollection::Surfaces)
        .def("StaticClass", &ULightmappedSurfaceCollection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}