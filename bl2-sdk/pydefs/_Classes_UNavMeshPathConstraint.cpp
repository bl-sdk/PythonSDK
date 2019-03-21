#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPathConstraint()
{
    class_< UNavMeshPathConstraint, bases< UObject >  , boost::noncopyable>("UNavMeshPathConstraint", no_init)
        .def_readwrite("NextConstraint", &UNavMeshPathConstraint::NextConstraint)
        .def_readwrite("NumNodesProcessed", &UNavMeshPathConstraint::NumNodesProcessed)
        .def_readwrite("NumThrownOutNodes", &UNavMeshPathConstraint::NumThrownOutNodes)
        .def_readwrite("AddedDirectCost", &UNavMeshPathConstraint::AddedDirectCost)
        .def_readwrite("AddedHeuristicCost", &UNavMeshPathConstraint::AddedHeuristicCost)
        .def("StaticClass", &UNavMeshPathConstraint::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDumpString", &UNavMeshPathConstraint::eventGetDumpString)
        .def("eventRecycle", &UNavMeshPathConstraint::eventRecycle)
        .staticmethod("StaticClass")
  ;
}