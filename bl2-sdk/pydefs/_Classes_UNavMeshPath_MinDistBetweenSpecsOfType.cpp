#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_MinDistBetweenSpecsOfType()
{
    class_< UNavMeshPath_MinDistBetweenSpecsOfType, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_MinDistBetweenSpecsOfType", no_init)
        .def_readwrite("MinDistBetweenEdgeTypes", &UNavMeshPath_MinDistBetweenSpecsOfType::MinDistBetweenEdgeTypes)
        .def_readwrite("InitLocation", &UNavMeshPath_MinDistBetweenSpecsOfType::InitLocation)
        .def_readwrite("EdgeType", &UNavMeshPath_MinDistBetweenSpecsOfType::EdgeType)
        .def_readwrite("Penalty", &UNavMeshPath_MinDistBetweenSpecsOfType::Penalty)
        .def("StaticClass", &UNavMeshPath_MinDistBetweenSpecsOfType::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshPath_MinDistBetweenSpecsOfType::Recycle)
        .def("EnforceMinDist", &UNavMeshPath_MinDistBetweenSpecsOfType::EnforceMinDist)
        .staticmethod("StaticClass")
  ;
}