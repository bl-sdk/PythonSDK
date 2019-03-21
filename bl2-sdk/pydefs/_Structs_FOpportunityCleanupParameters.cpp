#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOpportunityCleanupParameters()
{
    py::class_< FOpportunityCleanupParameters >("FOpportunityCleanupParameters")
        .def_readwrite("ActorIrrelvantDistance", &FOpportunityCleanupParameters::ActorIrrelvantDistance)
  ;
}