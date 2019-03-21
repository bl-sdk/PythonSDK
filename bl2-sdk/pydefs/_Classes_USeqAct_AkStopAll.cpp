#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkStopAll()
{
    class_< USeqAct_AkStopAll, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AkStopAll", no_init)
        .def("StaticClass", &USeqAct_AkStopAll::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}