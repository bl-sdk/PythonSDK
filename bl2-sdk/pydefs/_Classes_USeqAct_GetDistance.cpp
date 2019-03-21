#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_GetDistance()
{
    class_< USeqAct_GetDistance, bases< USequenceAction >  , boost::noncopyable>("USeqAct_GetDistance", no_init)
        .def_readwrite("Distance", &USeqAct_GetDistance::Distance)
        .def_readwrite("Method", &USeqAct_GetDistance::Method)
        .def("StaticClass", &USeqAct_GetDistance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}