#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_FlyThroughHasEnded()
{
    class_< USeqAct_FlyThroughHasEnded, bases< USequenceAction >  , boost::noncopyable>("USeqAct_FlyThroughHasEnded", no_init)
        .def("StaticClass", &USeqAct_FlyThroughHasEnded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}