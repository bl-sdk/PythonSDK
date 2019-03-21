#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ConditionallyLoadCommons()
{
    class_< USeqAct_ConditionallyLoadCommons, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ConditionallyLoadCommons", no_init)
        .def("StaticClass", &USeqAct_ConditionallyLoadCommons::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}