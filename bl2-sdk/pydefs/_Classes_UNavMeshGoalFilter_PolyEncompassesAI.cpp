#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_PolyEncompassesAI()
{
    class_< UNavMeshGoalFilter_PolyEncompassesAI, bases< UNavMeshGoal_Filter >  , boost::noncopyable>("UNavMeshGoalFilter_PolyEncompassesAI", no_init)
        .def_readwrite("OverrideExtentToCheck", &UNavMeshGoalFilter_PolyEncompassesAI::OverrideExtentToCheck)
        .def("StaticClass", &UNavMeshGoalFilter_PolyEncompassesAI::StaticClass, return_value_policy< reference_existing_object >())
        .def("MakeSureAIFits", &UNavMeshGoalFilter_PolyEncompassesAI::MakeSureAIFits)
        .staticmethod("StaticClass")
  ;
}