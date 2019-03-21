#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_WithinDistanceEnvelope()
{
    class_< UNavMeshPath_WithinDistanceEnvelope, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_WithinDistanceEnvelope", no_init)
        .def_readwrite("MaxDistance", &UNavMeshPath_WithinDistanceEnvelope::MaxDistance)
        .def_readwrite("MinDistance", &UNavMeshPath_WithinDistanceEnvelope::MinDistance)
        .def_readwrite("SoftStartPenalty", &UNavMeshPath_WithinDistanceEnvelope::SoftStartPenalty)
        .def_readwrite("EnvelopeTestPoint", &UNavMeshPath_WithinDistanceEnvelope::EnvelopeTestPoint)
        .def("StaticClass", &UNavMeshPath_WithinDistanceEnvelope::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshPath_WithinDistanceEnvelope::Recycle)
        .def("StayWithinEnvelopeToLoc", &UNavMeshPath_WithinDistanceEnvelope::StayWithinEnvelopeToLoc)
        .staticmethod("StaticClass")
  ;
}