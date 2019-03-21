#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOpportunityCleanupParameters()
{
    class_< FOpportunityCleanupParameters >("FOpportunityCleanupParameters", no_init)
        .def_readwrite("ActorIrrelvantDistance", &FOpportunityCleanupParameters::ActorIrrelvantDistance)
  ;
}