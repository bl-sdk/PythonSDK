#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_PopulationOpportunityLink()
{
    py::class_< UGearboxSeqAct_PopulationOpportunityLink,  USeqAct_Latent   >("UGearboxSeqAct_PopulationOpportunityLink")
        .def_readwrite("CloneOpportunities", &UGearboxSeqAct_PopulationOpportunityLink::CloneOpportunities)
        .def("StaticClass", &UGearboxSeqAct_PopulationOpportunityLink::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}