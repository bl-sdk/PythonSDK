#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFireCond_IsPlayerTarget()
{
    class_< UFireCond_IsPlayerTarget, bases< UFiringCondition >  , boost::noncopyable>("UFireCond_IsPlayerTarget", no_init)
        .def("StaticClass", &UFireCond_IsPlayerTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}