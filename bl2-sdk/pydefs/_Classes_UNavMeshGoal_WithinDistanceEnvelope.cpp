#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_WithinDistanceEnvelope()
{
    class_< UNavMeshGoal_WithinDistanceEnvelope, bases< UNavMeshPathGoalEvaluator >  , boost::noncopyable>("UNavMeshGoal_WithinDistanceEnvelope", no_init)
        .def_readwrite("MaxDistance", &UNavMeshGoal_WithinDistanceEnvelope::MaxDistance)
        .def_readwrite("MinDistance", &UNavMeshGoal_WithinDistanceEnvelope::MinDistance)
        .def_readwrite("MinTraversalDist", &UNavMeshGoal_WithinDistanceEnvelope::MinTraversalDist)
        .def_readwrite("EnvelopeTestPoint", &UNavMeshGoal_WithinDistanceEnvelope::EnvelopeTestPoint)
        .def("StaticClass", &UNavMeshGoal_WithinDistanceEnvelope::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshGoal_WithinDistanceEnvelope::Recycle)
        .def("GoalWithinEnvelopeToLoc", &UNavMeshGoal_WithinDistanceEnvelope::GoalWithinEnvelopeToLoc)
        .staticmethod("StaticClass")
  ;
}