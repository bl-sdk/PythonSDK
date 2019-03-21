#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetCleanupParameters()
{
    class_< UBehavior_SetCleanupParameters, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetCleanupParameters", no_init)
        .def_readwrite("MaxLifetime", &UBehavior_SetCleanupParameters::MaxLifetime)
        .def("StaticClass", &UBehavior_SetCleanupParameters::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventApplyBehaviorToContext", &UBehavior_SetCleanupParameters::eventApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}