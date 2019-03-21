#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshBuildEvents()
{
    class_< UIGBXNavMeshBuildEvents, bases< UInterface >  , boost::noncopyable>("UIGBXNavMeshBuildEvents", no_init)
        .def("StaticClass", &UIGBXNavMeshBuildEvents::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}