#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_Filter()
{
    py::class_< UNavMeshGoal_Filter,  UObject   >("UNavMeshGoal_Filter")
        .def_readwrite("NumNodesThrownOut", &UNavMeshGoal_Filter::NumNodesThrownOut)
        .def_readwrite("NumNodesProcessed", &UNavMeshGoal_Filter::NumNodesProcessed)
        .def("StaticClass", &UNavMeshGoal_Filter::StaticClass, py::return_value_policy::reference)
        .def("eventGetDumpString", &UNavMeshGoal_Filter::eventGetDumpString)
        .staticmethod("StaticClass")
  ;
}