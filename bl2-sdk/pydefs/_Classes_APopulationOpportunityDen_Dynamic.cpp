#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationOpportunityDen_Dynamic(py::module &m)
{
    py::class_< APopulationOpportunityDen_Dynamic,  APopulationOpportunityDen   >(m, "APopulationOpportunityDen_Dynamic")
        .def_readwrite("DynamicPointName", &APopulationOpportunityDen_Dynamic::DynamicPointName)
        .def_readwrite("DynamicPointRadius", &APopulationOpportunityDen_Dynamic::DynamicPointRadius)
        .def("eventDestroyed", &APopulationOpportunityDen_Dynamic::eventDestroyed)
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityDen_Dynamic::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityDen_Dynamic::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("GetOpportunityGameStage", &APopulationOpportunityDen_Dynamic::GetOpportunityGameStage)
          ;
}