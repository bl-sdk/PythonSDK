#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_EnforceTwoWayEdges()
{
    class_< UNavMeshPath_EnforceTwoWayEdges, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_EnforceTwoWayEdges", no_init)
        .def("StaticClass", &UNavMeshPath_EnforceTwoWayEdges::StaticClass, return_value_policy< reference_existing_object >())
        .def("EnforceTwoWayEdges", &UNavMeshPath_EnforceTwoWayEdges::EnforceTwoWayEdges)
        .staticmethod("StaticClass")
  ;
}