#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APatrolDestination()
{
    class_< APatrolDestination, bases< AActor >  , boost::noncopyable>("APatrolDestination", no_init)
        .def_readwrite("NextPatrolPoints", &APatrolDestination::NextPatrolPoints)
        .def("StaticClass", &APatrolDestination::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}