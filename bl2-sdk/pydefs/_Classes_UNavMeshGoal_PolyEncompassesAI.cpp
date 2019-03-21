#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_PolyEncompassesAI()
{
    py::class_< UNavMeshGoal_PolyEncompassesAI,  UNavMeshPathGoalEvaluator   >("UNavMeshGoal_PolyEncompassesAI")
        .def_readwrite("OverrideExtentToCheck", &UNavMeshGoal_PolyEncompassesAI::OverrideExtentToCheck)
        .def("StaticClass", &UNavMeshGoal_PolyEncompassesAI::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshGoal_PolyEncompassesAI::Recycle)
        .def("MakeSureAIFits", &UNavMeshGoal_PolyEncompassesAI::MakeSureAIFits)
        .staticmethod("StaticClass")
  ;
}