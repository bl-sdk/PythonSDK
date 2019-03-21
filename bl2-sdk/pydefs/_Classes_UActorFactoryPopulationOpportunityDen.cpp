#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityDen()
{
    class_< UActorFactoryPopulationOpportunityDen, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryPopulationOpportunityDen", no_init)
        .def("StaticClass", &UActorFactoryPopulationOpportunityDen::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}