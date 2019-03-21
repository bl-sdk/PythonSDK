#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathFinder()
{
    class_< UGBXNavMeshPathFinder, bases< UObject >  , boost::noncopyable>("UGBXNavMeshPathFinder", no_init)
        .def_readwrite("PathModifiers", &UGBXNavMeshPathFinder::PathModifiers)
        .def("StaticClass", &UGBXNavMeshPathFinder::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindPathToLocation", &UGBXNavMeshPathFinder::FindPathToLocation)
        .def("FindNavMeshPolyForPoint", &UGBXNavMeshPathFinder::FindNavMeshPolyForPoint)
        .staticmethod("StaticClass")
  ;
}