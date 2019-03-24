#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_PolyEncompassesAI(py::module &m)
{
    py::class_< UNavMeshGoal_PolyEncompassesAI,  UNavMeshPathGoalEvaluator   >(m, "UNavMeshGoal_PolyEncompassesAI")
		.def_static("StaticClass", &UNavMeshGoal_PolyEncompassesAI::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OverrideExtentToCheck", &UNavMeshGoal_PolyEncompassesAI::OverrideExtentToCheck)
        .def("Recycle", &UNavMeshGoal_PolyEncompassesAI::Recycle)
        .def("MakeSureAIFits", &UNavMeshGoal_PolyEncompassesAI::MakeSureAIFits)
          ;
}