#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_Provoked()
{
    class_< UWillowSeqEvent_Provoked, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_Provoked", no_init)
        .def("StaticClass", &UWillowSeqEvent_Provoked::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}