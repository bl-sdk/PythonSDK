#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOpportunityCleanupParameters(py::module &m)
{
    py::class_< FOpportunityCleanupParameters >(m, "FOpportunityCleanupParameters")
        .def_readwrite("ActorIrrelvantDistance", &FOpportunityCleanupParameters::ActorIrrelvantDistance)
  ;
}