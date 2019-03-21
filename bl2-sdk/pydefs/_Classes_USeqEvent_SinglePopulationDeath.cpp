#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_SinglePopulationDeath()
{
    class_< USeqEvent_SinglePopulationDeath, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_SinglePopulationDeath", no_init)
        .def("StaticClass", &USeqEvent_SinglePopulationDeath::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}