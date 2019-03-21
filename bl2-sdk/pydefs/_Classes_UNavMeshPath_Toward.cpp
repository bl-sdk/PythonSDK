#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_Toward()
{
    class_< UNavMeshPath_Toward, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_Toward", no_init)
        .def_readwrite("GoalActor", &UNavMeshPath_Toward::GoalActor)
        .def_readwrite("GoalPoint", &UNavMeshPath_Toward::GoalPoint)
        .def("StaticClass", &UNavMeshPath_Toward::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshPath_Toward::Recycle)
        .def("TowardPoint", &UNavMeshPath_Toward::TowardPoint)
        .def("TowardGoal", &UNavMeshPath_Toward::TowardGoal)
        .staticmethod("StaticClass")
  ;
}