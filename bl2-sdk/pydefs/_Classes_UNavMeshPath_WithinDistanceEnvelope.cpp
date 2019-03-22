#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_WithinDistanceEnvelope(py::module &m)
{
    py::class_< UNavMeshPath_WithinDistanceEnvelope,  UNavMeshPathConstraint   >(m, "UNavMeshPath_WithinDistanceEnvelope")
        .def_readwrite("MaxDistance", &UNavMeshPath_WithinDistanceEnvelope::MaxDistance)
        .def_readwrite("MinDistance", &UNavMeshPath_WithinDistanceEnvelope::MinDistance)
        .def_readwrite("SoftStartPenalty", &UNavMeshPath_WithinDistanceEnvelope::SoftStartPenalty)
        .def_readwrite("EnvelopeTestPoint", &UNavMeshPath_WithinDistanceEnvelope::EnvelopeTestPoint)
        .def("StaticClass", &UNavMeshPath_WithinDistanceEnvelope::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshPath_WithinDistanceEnvelope::Recycle)
        .def("StayWithinEnvelopeToLoc", &UNavMeshPath_WithinDistanceEnvelope::StayWithinEnvelopeToLoc)
          ;
}