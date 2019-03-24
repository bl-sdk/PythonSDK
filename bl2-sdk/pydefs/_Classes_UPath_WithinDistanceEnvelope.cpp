#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_WithinDistanceEnvelope(py::module &m)
{
    py::class_< UPath_WithinDistanceEnvelope,  UPathConstraint   >(m, "UPath_WithinDistanceEnvelope")
		.def_static("StaticClass", &UPath_WithinDistanceEnvelope::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxDistance", &UPath_WithinDistanceEnvelope::MaxDistance)
        .def_readwrite("MinDistance", &UPath_WithinDistanceEnvelope::MinDistance)
        .def_readwrite("SoftStartPenalty", &UPath_WithinDistanceEnvelope::SoftStartPenalty)
        .def_readwrite("EnvelopeTestPoint", &UPath_WithinDistanceEnvelope::EnvelopeTestPoint)
        .def("Recycle", &UPath_WithinDistanceEnvelope::Recycle)
        .def("StayWithinEnvelopeToLoc", &UPath_WithinDistanceEnvelope::StayWithinEnvelopeToLoc)
          ;
}