#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityPoint()
{
    class_< UActorFactoryPopulationOpportunityPoint, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryPopulationOpportunityPoint", no_init)
        .def("StaticClass", &UActorFactoryPopulationOpportunityPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}