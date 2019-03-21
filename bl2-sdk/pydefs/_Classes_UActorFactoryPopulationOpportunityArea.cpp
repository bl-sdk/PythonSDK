#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityArea()
{
    class_< UActorFactoryPopulationOpportunityArea, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryPopulationOpportunityArea", no_init)
        .def("StaticClass", &UActorFactoryPopulationOpportunityArea::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}