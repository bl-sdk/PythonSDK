#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPath_WithinDistanceEnvelope()
{
    class_< UPath_WithinDistanceEnvelope, bases< UPathConstraint >  , boost::noncopyable>("UPath_WithinDistanceEnvelope", no_init)
        .def_readwrite("MaxDistance", &UPath_WithinDistanceEnvelope::MaxDistance)
        .def_readwrite("MinDistance", &UPath_WithinDistanceEnvelope::MinDistance)
        .def_readwrite("SoftStartPenalty", &UPath_WithinDistanceEnvelope::SoftStartPenalty)
        .def_readwrite("EnvelopeTestPoint", &UPath_WithinDistanceEnvelope::EnvelopeTestPoint)
        .def("StaticClass", &UPath_WithinDistanceEnvelope::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UPath_WithinDistanceEnvelope::Recycle)
        .def("StayWithinEnvelopeToLoc", &UPath_WithinDistanceEnvelope::StayWithinEnvelopeToLoc)
        .staticmethod("StaticClass")
  ;
}