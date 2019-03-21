#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAutoNavMeshPathObstacleUnregister()
{
    class_< UAutoNavMeshPathObstacleUnregister, bases< UObject >  , boost::noncopyable>("UAutoNavMeshPathObstacleUnregister", no_init)
        .def_readwrite("PathObstacleRef", &UAutoNavMeshPathObstacleUnregister::PathObstacleRef)
        .def_readonly("UnknownData00", &UAutoNavMeshPathObstacleUnregister::UnknownData00)
        .def("StaticClass", &UAutoNavMeshPathObstacleUnregister::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}