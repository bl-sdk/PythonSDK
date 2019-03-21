#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_FinishLifting()
{
    class_< UBehavior_FinishLifting, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_FinishLifting", no_init)
        .def("StaticClass", &UBehavior_FinishLifting::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_FinishLifting::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}