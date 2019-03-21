#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_GenericFilterContainer()
{
    class_< UNavMeshGoal_GenericFilterContainer, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_GenericFilterContainer", no_init)
        .def_readwrite("GoalFilters", &UNavMeshGoal_GenericFilterContainer::GoalFilters)
        .def_readwrite("SuccessfulGoal", &UNavMeshGoal_GenericFilterContainer::SuccessfulGoal)
        .def_readwrite("MyNavigationHandle", &UNavMeshGoal_GenericFilterContainer::MyNavigationHandle)
        .def("StaticClass", &UNavMeshGoal_GenericFilterContainer::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshGoal_GenericFilterContainer::Recycle)
        .def("GetGoalPoint", &UNavMeshGoal_GenericFilterContainer::GetGoalPoint)
        .def("GetFilterOfType", &UNavMeshGoal_GenericFilterContainer::GetFilterOfType, return_value_policy< reference_existing_object >())
        .def("CreateAndAddFilterToNavHandle", &UNavMeshGoal_GenericFilterContainer::CreateAndAddFilterToNavHandle, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}