#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_PolyEncompassesAI()
{
    class_< UNavMeshGoal_PolyEncompassesAI, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_PolyEncompassesAI", no_init)
        .def_readwrite("OverrideExtentToCheck", &UNavMeshGoal_PolyEncompassesAI::OverrideExtentToCheck)
        .def("StaticClass", &UNavMeshGoal_PolyEncompassesAI::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshGoal_PolyEncompassesAI::Recycle)
        .def("MakeSureAIFits", &UNavMeshGoal_PolyEncompassesAI::MakeSureAIFits)
        .staticmethod("StaticClass")
  ;
}