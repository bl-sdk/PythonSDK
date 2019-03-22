#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_OutSideOfDotProductWedge(py::module &m)
{
    py::class_< UNavMeshGoalFilter_OutSideOfDotProductWedge,  UNavMeshGoal_Filter   >(m, "UNavMeshGoalFilter_OutSideOfDotProductWedge")
        .def_readwrite("Location", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Location)
        .def_readwrite("Rotation", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Rotation)
        .def_readwrite("Epsilon", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Epsilon)
        .def("OutsideOfDotProductWedge", &UNavMeshGoalFilter_OutSideOfDotProductWedge::OutsideOfDotProductWedge)
          ;
}