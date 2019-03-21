#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_SeeDeath()
{
    class_< USeqEvent_SeeDeath, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_SeeDeath", no_init)
        .def("StaticClass", &USeqEvent_SeeDeath::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}