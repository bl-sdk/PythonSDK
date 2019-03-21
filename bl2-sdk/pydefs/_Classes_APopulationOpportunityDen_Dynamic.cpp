#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APopulationOpportunityDen_Dynamic()
{
    class_< APopulationOpportunityDen_Dynamic, bases< APopulationOpportunityDen >  , boost::noncopyable>("APopulationOpportunityDen_Dynamic", no_init)
        .def_readwrite("DynamicPointName", &APopulationOpportunityDen_Dynamic::DynamicPointName)
        .def_readwrite("DynamicPointRadius", &APopulationOpportunityDen_Dynamic::DynamicPointRadius)
        .def("StaticClass", &APopulationOpportunityDen_Dynamic::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &APopulationOpportunityDen_Dynamic::eventDestroyed)
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityDen_Dynamic::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityDen_Dynamic::GetBodyInfoProvider, return_value_policy< reference_existing_object >())
        .def("GetOpportunityGameStage", &APopulationOpportunityDen_Dynamic::GetOpportunityGameStage)
        .staticmethod("StaticClass")
  ;
}