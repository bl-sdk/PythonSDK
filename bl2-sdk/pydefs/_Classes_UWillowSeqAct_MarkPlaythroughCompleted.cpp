#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkPlaythroughCompleted()
{
    class_< UWillowSeqAct_MarkPlaythroughCompleted, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_MarkPlaythroughCompleted", no_init)
        .def("StaticClass", &UWillowSeqAct_MarkPlaythroughCompleted::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}