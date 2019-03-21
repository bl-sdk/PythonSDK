#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_WithinTraversalDist()
{
    class_< UNavMeshPath_WithinTraversalDist, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_WithinTraversalDist", no_init)
        .def_readwrite("MaxTraversalDist", &UNavMeshPath_WithinTraversalDist::MaxTraversalDist)
        .def_readwrite("SoftStartPenalty", &UNavMeshPath_WithinTraversalDist::SoftStartPenalty)
        .def("StaticClass", &UNavMeshPath_WithinTraversalDist::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshPath_WithinTraversalDist::Recycle)
        .def("DontExceedMaxDist", &UNavMeshPath_WithinTraversalDist::DontExceedMaxDist)
        .staticmethod("StaticClass")
  ;
}