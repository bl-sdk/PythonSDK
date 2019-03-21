#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetLookAtActor()
{
    class_< UWillowSeqAct_SetLookAtActor, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_SetLookAtActor", no_init)
        .def_readwrite("Offset", &UWillowSeqAct_SetLookAtActor::Offset)
        .def("StaticClass", &UWillowSeqAct_SetLookAtActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}