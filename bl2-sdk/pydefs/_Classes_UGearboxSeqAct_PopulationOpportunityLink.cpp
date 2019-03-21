#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_PopulationOpportunityLink()
{
    class_< UGearboxSeqAct_PopulationOpportunityLink, bases< USeqAct_Latent >  , boost::noncopyable>("UGearboxSeqAct_PopulationOpportunityLink", no_init)
        .def_readwrite("CloneOpportunities", &UGearboxSeqAct_PopulationOpportunityLink::CloneOpportunities)
        .def("StaticClass", &UGearboxSeqAct_PopulationOpportunityLink::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}