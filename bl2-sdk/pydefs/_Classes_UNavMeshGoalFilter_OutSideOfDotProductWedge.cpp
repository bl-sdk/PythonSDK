#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_OutSideOfDotProductWedge()
{
    class_< UNavMeshGoalFilter_OutSideOfDotProductWedge, bases< UNavMeshGoal_Filter >  , boost::noncopyable>("UNavMeshGoalFilter_OutSideOfDotProductWedge", no_init)
        .def_readwrite("Location", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Location)
        .def_readwrite("Rotation", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Rotation)
        .def_readwrite("Epsilon", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Epsilon)
        .def("StaticClass", &UNavMeshGoalFilter_OutSideOfDotProductWedge::StaticClass, return_value_policy< reference_existing_object >())
        .def("OutsideOfDotProductWedge", &UNavMeshGoalFilter_OutSideOfDotProductWedge::OutsideOfDotProductWedge)
        .staticmethod("StaticClass")
  ;
}