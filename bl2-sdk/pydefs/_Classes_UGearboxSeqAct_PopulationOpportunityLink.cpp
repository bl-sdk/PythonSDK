#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_PopulationOpportunityLink(py::module &m)
{
    py::class_< UGearboxSeqAct_PopulationOpportunityLink,  USeqAct_Latent   >(m, "UGearboxSeqAct_PopulationOpportunityLink")
		.def_static("StaticClass", &UGearboxSeqAct_PopulationOpportunityLink::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CloneOpportunities", &UGearboxSeqAct_PopulationOpportunityLink::CloneOpportunities)
          ;
}