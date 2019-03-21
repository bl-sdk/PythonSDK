#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_Filter()
{
    class_< UNavMeshGoal_Filter, bases< UObject >  , boost::noncopyable>("UNavMeshGoal_Filter", no_init)
        .def_readwrite("NumNodesThrownOut", &UNavMeshGoal_Filter::NumNodesThrownOut)
        .def_readwrite("NumNodesProcessed", &UNavMeshGoal_Filter::NumNodesProcessed)
        .def("StaticClass", &UNavMeshGoal_Filter::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDumpString", &UNavMeshGoal_Filter::eventGetDumpString)
        .staticmethod("StaticClass")
  ;
}