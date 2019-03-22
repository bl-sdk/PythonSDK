#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_GenericFilterContainer(py::module &m)
{
    py::class_< UNavMeshGoal_GenericFilterContainer,  UNavMeshPathGoalEvaluator   >(m, "UNavMeshGoal_GenericFilterContainer")
        .def_readwrite("GoalFilters", &UNavMeshGoal_GenericFilterContainer::GoalFilters)
        .def_readwrite("SuccessfulGoal", &UNavMeshGoal_GenericFilterContainer::SuccessfulGoal)
        .def_readwrite("MyNavigationHandle", &UNavMeshGoal_GenericFilterContainer::MyNavigationHandle)
        .def("StaticClass", &UNavMeshGoal_GenericFilterContainer::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshGoal_GenericFilterContainer::Recycle)
        .def("GetGoalPoint", &UNavMeshGoal_GenericFilterContainer::GetGoalPoint)
        .def("GetFilterOfType", &UNavMeshGoal_GenericFilterContainer::GetFilterOfType, py::return_value_policy::reference)
        .def("CreateAndAddFilterToNavHandle", &UNavMeshGoal_GenericFilterContainer::CreateAndAddFilterToNavHandle, py::return_value_policy::reference)
          ;
}