#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_Random()
{
    class_< UNavMeshGoal_Random, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_Random", no_init)
        .def_readwrite("MinDist", &UNavMeshGoal_Random::MinDist)
        .def_readwrite("BestRating", &UNavMeshGoal_Random::BestRating)
        .def_readwrite("PartialGoal", &UNavMeshGoal_Random::PartialGoal)
        .def("StaticClass", &UNavMeshGoal_Random::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshGoal_Random::Recycle)
        .def("RecycleNative", &UNavMeshGoal_Random::RecycleNative)
        .def("FindRandom", &UNavMeshGoal_Random::FindRandom)
        .staticmethod("StaticClass")
  ;
}